#ifndef CHARSET_UTILS_H
#define CHARSET_UTILS_H

#include <string>

#ifdef _WIN32
#include <windows.h>
#else
#include <iconv.h>
#include <errno.h>
#endif

class CharsetUtils {
public:
    static std::string convert(const std::string& input, const char* tocode, const char* fromcode) {
#ifdef _WIN32
        // Convert from source encoding to UTF-16
        int wlen = MultiByteToWideChar(
            getCodePage(fromcode), 0,
            input.c_str(), -1,
            nullptr, 0
        );
        
        if (wlen == 0) return input;
        
        wchar_t* wstr = new wchar_t[wlen];
        MultiByteToWideChar(
            getCodePage(fromcode), 0,
            input.c_str(), -1,
            wstr, wlen
        );
        
        // Convert from UTF-16 to target encoding
        int len = WideCharToMultiByte(
            getCodePage(tocode), 0,
            wstr, -1,
            nullptr, 0,
            nullptr, nullptr
        );
        
        if (len == 0) {
            delete[] wstr;
            return input;
        }
        
        char* str = new char[len];
        WideCharToMultiByte(
            getCodePage(tocode), 0,
            wstr, -1,
            str, len,
            nullptr, nullptr
        );
        
        std::string result(str);
        delete[] wstr;
        delete[] str;
        return result;
#else
        iconv_t cd = iconv_open(tocode, fromcode);
        if (cd == (iconv_t)-1) {
            return input;
        }
        
        size_t inbytesleft = input.size();
        char* inbuf = const_cast<char*>(input.c_str());
        
        // Worst case: each input byte could become 4 bytes in UTF-8
        size_t outbytesleft = input.size() * 4 + 1;
        std::string output(outbytesleft, '\0');
        char* outbuf = &output[0];
        
        size_t result = iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
        iconv_close(cd);
        
        if (result == (size_t)-1) {
            return input;
        }
        
        output.resize(output.size() - outbytesleft);
        return output;
#endif
    }

private:
#ifdef _WIN32
    static UINT getCodePage(const char* encoding) {
        if (strcmp(encoding, "UTF-8") == 0) return CP_UTF8;
        if (strcmp(encoding, "UTF-16") == 0) return 1200; // UTF-16LE
        if (strcmp(encoding, "UTF-16BE") == 0) return 1201; // UTF-16BE
        if (strcmp(encoding, "UTF-32") == 0) return 12000; // UTF-32LE
        if (strcmp(encoding, "UTF-32BE") == 0) return 12001; // UTF-32BE
        
        // Default to system default ANSI code page
        return CP_ACP;
    }
#endif
};

#endif // CHARSET_UTILS_H

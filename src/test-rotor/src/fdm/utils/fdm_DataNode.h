/****************************************************************************//*
 * Copyright (C) 2021 Marek M. Cel
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/
#ifndef FDM_DATANODE_H
#define FDM_DATANODE_H

////////////////////////////////////////////////////////////////////////////////

#include <map>
#include <string>

#include <fdm/fdm_Defines.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

/**
 * @brief Data node class.
 */
class FDMEXPORT DataNode
{
public:

    typedef std::map< std::string, DataNode* > DataNodes;

    /** Data type enum. */
    enum Type
    {
        Group  = 0,     ///< group node
        Bool   = 1,     ///< bool type
        Int    = 2,     ///< int type
        Long   = 3,     ///< long type
        Float  = 4,     ///< float type
        Double = 5      ///< double type
    };

    /** @brief Constructor. */
    DataNode();

    /** @brief Destructor. */
    virtual ~DataNode() noexcept;

    /**
     * @param path Path relative to the node.
     * @param type New node type.
     * @return FDM_SUCCESS on success or FDM_FAILURE on failure
     */
    int addNode( const char *path, Type type );

    /**
     * @return returns data value on success or NaN on failure
     */
    bool getDatab() const;

    /**
     * @return returns data value on success or NaN on failure
     */
    int getDatai() const;

    /**
     * @return returns data value on success or NaN on failure
     */
    long getDatal() const;

    /**
     * @return returns data value on success or NaN on failure
     */
    float getDataf() const;

    /**
     * @return returns data value on success or NaN on failure
     */
    double getDatad() const;

    /** */
    inline std::string getName() const
    {
        return _name;
    }

    /**
     * @brief Returns node of the given path on success and NULL on failure.
     * @param path Path relative to the node.
     * @return returns node of the given path on success and NULL on failure
     */
    DataNode* getNode( const char *path );

    /** @brief Returns node path string. */
    std::string getPath() const;

    /** @brief Returns node's root node. */
    DataNode* getRoot();

    /** @return Data node type. */
    inline Type getType() const
    {
        return _type;
    }

    /** */
    double getValue() const;

    /**
     * @return FDM_SUCCESS on success or FDM_FAILURE on failure
     */
    int setDatab( bool value );

    /**
     * @return FDM_SUCCESS on success or FDM_FAILURE on failure
     */
    int setDatai( int value );

    /**
     * @return FDM_SUCCESS on success or FDM_FAILURE on failure
     */
    int setDatal( long value );

    /**
     * @return FDM_SUCCESS on success or FDM_FAILURE on failure
     */
    int setDataf( float value );

    /**
     * @return FDM_SUCCESS on success or FDM_FAILURE on failure
     */
    int setDatad( double value );

    /**
     * @return FDM_SUCCESS on success or FDM_FAILURE on failure
     */
    int setValue( double value );

private:

    /** Data variables union. */
    union Data
    {
        bool    bData;       ///< bool data
        int     iData;       ///< int data
        long    lData;       ///< long data
        float   fData;       ///< float data
        double  dData;       ///< double data
    };

    DataNode *_parent;      ///< parent node
    DataNodes _children;    ///< node children

    std::string _name;      ///< data node name

    Type _type;             ///< type
    Data _data;             ///< data

    /** Using this constructor is forbidden. */
    DataNode( const DataNode & ) {}

    /**
     * @brief Breaks path string apart.
     * @param path path string to be broken
     * @param pathLead name of the first node in the path string
     * @param pathRest path relative to the first node in the unbroken path string
     */
    void breakPath( const char *path, std::string &pathLead, std::string &pathRest );

    /**
     * @brief Creates node of the given name, type and parent.
     * @param name node name
     * @param type node type
     * @param parent node parent
     * @return data node pointer
     */
    DataNode* createNode( const char *name, Type type, DataNode *parent );

    /**
     * @brief Returns node of the given path on success and NULL on failure.
     * This function is case sensitive.
     * @param path Path relative to the node.
     * @return returns node of the given path on success and NULL on failure
     */
    DataNode* findNode( const char *path );

    /** @brief Strips path string dots. */
    std::string stripPathDots( const char *path );
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // FDM_DATANODE_H

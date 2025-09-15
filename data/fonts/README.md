# Fonts for MScSim HUD

This directory contains font files used by the HUD system in MScSim.

## Default Font

- The default font used is `arial.ttf` which is a standard system font.
- The HUD system will look for fonts in this directory first, then fall back to system fonts.

## Adding Custom Fonts

1. Place your TrueType (.ttf) or OpenType (.otf) font files in this directory.
2. Update the font path in the HUD configuration if needed.
3. The font will be available for use in the HUD system.

## Font Attributes

- **Size**: Specified in points (e.g., 12.0 for 12pt)
- **Color**: RGB values (0.0-1.0) with optional alpha (0.0-1.0)
- **Alignment**: Left, center, or right alignment

## Note

Make sure you have the proper licensing for any custom fonts you add to your project.

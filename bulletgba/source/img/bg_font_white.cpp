/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_font_white.bmp Opened.
Bmp signature found.
Bmp width: 8
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 32 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_font_white {
  enum {
    w = 1,
    h = 1,
    size = 1,
  };
  const unsigned short palette[] = {
    0x3e0,0xc63,0x14a5,0x1ce7,0x2529,0x2d6b,0x35ad,0x3def,0x4631,0x4e73,0x56b5,0x5ef7,0x6739,0x6f7b,0x77bd,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0xf6,0x6,0x0,0xe,
    0x3f,0xf,0xe6,0x0,
    0xf6,0x6,0xe,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xe,0xf6,0x6,
    0xe0,0x6,0x3f,0xf,
    0xe,0x0,0xf6,0x6,
    0x0,0x0,0x0,0x0,
      };
  inline u16 *copyImage(u16 *vram) {
    for (u32 i = 0; i < sizeof(img) / 2; ++i) {
      *vram++ = img[i * 2] | (img[i * 2 + 1] << 8);
    }
    return vram;
  }
  inline u16 *copyPalette(u16 *pal) {
    for (u32 i = 0; i < sizeof(palette) / 2; ++i) {
      *pal++ = palette[i];
    }
    return pal;
  }
};

/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_result_border_bg.bmp Opened.
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
namespace TILEINFO_bg_result_border_bg {
  enum {
    w = 1,
    h = 1,
    size = 1,
  };
  const unsigned short palette[] = {
    0x3e0,0x842,0x1084,0x1ce7,0x2529,0x2d6b,0x35ad,0x3def,0x4210,0x4a52,0x56b5,0x5ef7,0x6318,0x6f7b,0x739c,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
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

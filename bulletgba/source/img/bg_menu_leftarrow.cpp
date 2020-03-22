/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_menu_leftarrow.bmp Opened.
Bmp signature found.
Bmp width: 8
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
16 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 32 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_menu_leftarrow {
  enum {
    w = 1,
    h = 1,
    size = 1,
  };
  const unsigned short palette[] = {
    0x3e0,0xc63,0x14a5,0x1ce7,0x2529,0x2d8b,0x35cd,0x3e10,0x4a52,0x5294,0x5ad6,0x6318,0x6b5a,0x739c,0x77bd,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x0,0xd6,0x6d,0x0,
    0x0,0xfb,0xbf,0x0,
    0x60,0xfd,0xdf,0x6,
    0xb0,0xff,0xff,0xb,
    0xd6,0xff,0xff,0x6d,
    0xfb,0xff,0xff,0xbf,
    0xfd,0xff,0xff,0xdf,
    0xff,0xff,0xff,0xff,
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

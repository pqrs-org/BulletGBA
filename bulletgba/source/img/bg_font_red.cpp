/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_font_red.bmp Opened.
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
namespace TILEINFO_bg_font_red {
  enum {
    w = 1,
    h = 1,
    size = 1,
  };
  const unsigned short palette[] = {
    0x3e0,0xc63,0xc85,0x8a7,0x8c9,0x8eb,0x8ed,0x50f,0x531,0x553,0x575,0x197,0x1b9,0x1db,0x1fd,0x21f,
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

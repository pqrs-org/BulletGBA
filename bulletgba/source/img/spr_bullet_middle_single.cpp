/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
spr/spr_bullet_middle_single.bmp Opened.
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
namespace TILEINFO_spr_bullet_middle_single {
  enum {
    w = 1,
    h = 1,
    size = 1,
  };
  const unsigned short palette[] = {
    0x4010,0x0,0x140,0x2a0,0x3e0,0x1be6,0x33ec,0x4ff3,0x67f9,0x7fff,0x0,0x0,0x0,0x0,0x0,0x0,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x20,0x33,0x33,0x2,
    0x32,0x88,0x55,0x23,
    0x83,0x99,0x58,0x35,
    0x83,0x99,0x58,0x35,
    0x73,0x88,0x55,0x35,
    0x73,0x77,0x77,0x37,
    0x32,0x77,0x77,0x23,
    0x20,0x33,0x33,0x2,
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

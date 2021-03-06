/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_boss_core_1.bmp Opened.
Bmp signature found.
Bmp width: 8
Bmp height: 32
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
16 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 128 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_boss_core_1 {
  enum {
    w = 1,
    h = 4,
    size = 4,
  };
  const unsigned short palette[] = {
    0x3e0,0x4210,0x4e73,0x5ef7,0x6f7b,0x7fff,0x5ef7,0x1ce7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x77,0x77,0x67,0x66,
    0x0,0x0,0x77,0x67,
    0x0,0x0,0x0,0x67,
    0x0,0x0,0x0,0x77,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    
    // Tile [0 , 1] 
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x30,0x22,0x1,0x70,
    0x44,0x23,0x32,0x70,
    0x54,0x34,0x52,0x70,
    
    // Tile [0 , 2] 
    0x54,0x34,0x52,0x70,
    0x44,0x23,0x32,0x70,
    0x30,0x22,0x1,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    
    // Tile [0 , 3] 
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x77,
    0x0,0x0,0x0,0x67,
    0x0,0x0,0x77,0x67,
    0x77,0x77,0x67,0x66,
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

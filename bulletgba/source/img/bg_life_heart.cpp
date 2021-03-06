/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_life_heart.bmp Opened.
Bmp signature found.
Bmp width: 8
Bmp height: 64
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 256 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_life_heart {
  enum {
    w = 1,
    h = 8,
    size = 8,
  };
  const unsigned short palette[] = {
    0x3e0,0x0,0x28a0,0x5540,0x7e00,0x1f,0x14bf,0x295f,0x421f,0x2955,0x14aa,0x0,0x0,0x0,0x0,0x0,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x32,0x44,0x44,0x23,
    0x23,0x71,0x77,0x37,
    0x14,0x57,0x55,0x45,
    0x74,0x55,0x15,0x41,
    0x74,0x55,0x15,0x41,
    0x14,0x57,0x55,0x45,
    0x23,0x71,0x77,0x37,
    0x32,0x44,0x44,0x23,
    
    // Tile [0 , 1] 
    0x32,0x44,0x44,0x23,
    0x23,0x91,0x99,0x39,
    0x14,0x59,0x55,0x45,
    0x74,0x55,0x15,0x41,
    0x74,0x55,0x15,0x41,
    0x14,0x59,0x55,0x45,
    0x23,0x91,0x99,0x39,
    0x32,0x44,0x44,0x23,
    
    // Tile [0 , 2] 
    0x32,0x44,0x44,0x23,
    0x23,0x11,0x11,0x32,
    0x14,0x57,0x55,0x45,
    0x74,0x55,0x75,0x41,
    0x74,0x55,0x75,0x41,
    0x14,0x57,0x55,0x45,
    0x23,0x11,0x11,0x32,
    0x32,0x44,0x44,0x23,
    
    // Tile [0 , 3] 
    0x32,0x44,0x44,0x23,
    0x23,0x11,0x11,0x32,
    0x14,0x99,0x99,0x49,
    0x74,0x55,0x55,0x47,
    0x74,0x55,0x55,0x47,
    0x14,0x99,0x99,0x49,
    0x23,0x11,0x11,0x32,
    0x32,0x44,0x44,0x23,
    
    // Tile [0 , 4] 
    0x32,0x44,0x44,0x23,
    0x23,0x11,0x11,0x32,
    0x14,0x11,0x11,0x41,
    0x74,0x55,0x55,0x45,
    0x74,0x55,0x55,0x45,
    0x14,0x11,0x11,0x41,
    0x23,0x11,0x11,0x32,
    0x32,0x44,0x44,0x23,
    
    // Tile [0 , 5] 
    0x32,0x44,0x44,0x23,
    0x23,0x11,0x11,0x32,
    0x14,0x99,0x99,0x49,
    0x74,0x55,0x55,0x47,
    0x74,0x55,0x55,0x47,
    0x14,0x99,0x99,0x49,
    0x23,0x11,0x11,0x32,
    0x32,0x44,0x44,0x23,
    
    // Tile [0 , 6] 
    0x32,0x44,0x44,0x23,
    0x23,0x11,0x11,0x32,
    0x14,0x57,0x55,0x45,
    0x74,0x55,0x75,0x41,
    0x74,0x55,0x75,0x41,
    0x14,0x57,0x55,0x45,
    0x23,0x11,0x11,0x32,
    0x32,0x44,0x44,0x23,
    
    // Tile [0 , 7] 
    0x32,0x44,0x44,0x23,
    0x23,0x91,0x99,0x39,
    0x14,0x59,0x55,0x45,
    0x74,0x55,0x15,0x41,
    0x74,0x55,0x15,0x41,
    0x14,0x59,0x55,0x45,
    0x23,0x91,0x99,0x39,
    0x32,0x44,0x44,0x23,
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

/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
font/fontdata.bmp Opened.
Bmp signature found.
Bmp width: 760
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 3040 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_fontdata {
  enum {
    w = 95,
    h = 1,
    size = 95,
  };
  const unsigned short palette[] = {
    0x3e0,0xc63,0x14a5,0x1ce7,0x2529,0x2d8b,0x35cd,0x3e10,0x4a52,0x5294,0x5ad6,0x6318,0x6b5a,0x739c,0x77bd,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [1 , 0] 
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xb0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [2 , 0] 
    0x0,0xf,0xf,0x0,
    0x0,0xf,0xf,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [3 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0xf,0xf,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0xf,0xf,0x0,
    0x0,0xf,0xf,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0xf,0xf,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [4 , 0] 
    0x40,0xfe,0x4e,0x0,
    0xe0,0xf3,0xd3,0x0,
    0xe0,0xf3,0x0,0x0,
    0x40,0xfe,0x4d,0x0,
    0x0,0xf0,0xd3,0x0,
    0xe0,0xf3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0xf0,0x0,0x0,
    
    // Tile [5 , 0] 
    0xf6,0x6,0x0,0xe,
    0x3f,0xf,0xe6,0x0,
    0xf6,0x6,0xe,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xe,0xf6,0x6,
    0xe0,0x6,0x3f,0xf,
    0xe,0x0,0xf6,0x6,
    0x0,0x0,0x0,0x0,
    
    // Tile [6 , 0] 
    0x40,0xfe,0x8,0x0,
    0xe0,0x33,0xe,0x0,
    0xe0,0xd6,0x3,0x0,
    0x60,0x6f,0x0,0x0,
    0xe0,0xe6,0xd6,0x0,
    0xe0,0x63,0x6f,0x0,
    0x40,0xee,0xc6,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [7 , 0] 
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [8 , 0] 
    0x0,0xd3,0x3,0x0,
    0x0,0x3e,0x0,0x0,
    0x0,0xf,0x0,0x0,
    0x0,0xf,0x0,0x0,
    0x0,0xf,0x0,0x0,
    0x0,0x3e,0x0,0x0,
    0x0,0xd3,0x3,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [9 , 0] 
    0x0,0xd3,0x3,0x0,
    0x0,0x30,0xe,0x0,
    0x0,0x0,0xf,0x0,
    0x0,0x0,0xf,0x0,
    0x0,0x0,0xf,0x0,
    0x0,0x30,0xe,0x0,
    0x0,0xd3,0x3,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [10 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0xa0,0xf9,0xa9,0x0,
    0x10,0xfc,0x1c,0x0,
    0xa0,0xf9,0xa9,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [11 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [12 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0xfb,0x0,0x0,
    0x0,0xe3,0x0,0x0,
    
    // Tile [13 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xff,0xf,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [14 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xab,0x0,0x0,
    0x0,0xab,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [15 , 0] 
    0x0,0x0,0xd0,0x0,
    0x0,0x0,0x96,0x0,
    0x0,0x0,0x2e,0x0,
    0x0,0x70,0x9,0x0,
    0x0,0xe0,0x2,0x0,
    0x0,0x97,0x0,0x0,
    0x0,0x2e,0x0,0x0,
    0x0,0x8,0x0,0x0,
    
    // Tile [16 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd6,0x0,
    0xf0,0x30,0xfe,0x0,
    0xf0,0xe3,0xf3,0x0,
    0xf0,0x3e,0xf0,0x0,
    0xe0,0x6,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [17 , 0] 
    0x0,0xf3,0x0,0x0,
    0x70,0xff,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [18 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xe3,0x0,
    0x0,0x0,0xd3,0x0,
    0x0,0x30,0x3d,0x0,
    0x0,0xd3,0x3,0x0,
    0x30,0x3d,0x0,0x0,
    0xe0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [19 , 0] 
    0x40,0xfe,0x4e,0x0,
    0xe0,0x3,0xe3,0x0,
    0x0,0x0,0xd3,0x0,
    0x0,0xf0,0x6f,0x0,
    0x0,0x0,0xd3,0x0,
    0xe0,0x3,0xe3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [20 , 0] 
    0x0,0x30,0xe,0x0,
    0x0,0xd3,0xf,0x0,
    0x30,0x3d,0xf,0x0,
    0xe0,0x3,0xf,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0xf,0x0,
    0x0,0xf0,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [21 , 0] 
    0xf0,0xff,0xff,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0xff,0x4d,0x0,
    0x0,0x0,0xd3,0x0,
    0x0,0x0,0xf0,0x0,
    0xe0,0x3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [22 , 0] 
    0x40,0xfd,0xf,0x0,
    0xe0,0x3,0x0,0x0,
    0xf0,0xff,0x4d,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [23 , 0] 
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0xf0,0x0,
    0x0,0x0,0xe3,0x0,
    0x0,0x30,0x3d,0x0,
    0x0,0xe0,0x3,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [24 , 0] 
    0x40,0xfe,0x4e,0x0,
    0xe0,0x3,0xe3,0x0,
    0xd0,0x3,0xd3,0x0,
    0x60,0xff,0x6f,0x0,
    0xd0,0x3,0xd3,0x0,
    0xe0,0x3,0xe3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [25 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xf0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0xd3,0x0,
    0x0,0xff,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [26 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [27 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xbb,0x0,0x0,
    0x0,0xfb,0x0,0x0,
    0x0,0xe3,0x0,0x0,
    
    // Tile [28 , 0] 
    0x0,0x0,0xc3,0x0,
    0x0,0x30,0x3e,0x0,
    0x0,0xe3,0x3,0x0,
    0x0,0x6e,0x0,0x0,
    0x0,0xe3,0x3,0x0,
    0x0,0x30,0x3d,0x0,
    0x0,0x0,0xd3,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [29 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [30 , 0] 
    0x0,0x3d,0x0,0x0,
    0x0,0xe3,0x3,0x0,
    0x0,0x30,0x3e,0x0,
    0x0,0x0,0xe6,0x0,
    0x0,0x30,0x3e,0x0,
    0x0,0xd3,0x3,0x0,
    0x0,0x3c,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [31 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xe3,0x0,
    0x0,0x0,0xd3,0x0,
    0x0,0x30,0x3d,0x0,
    0x0,0xd0,0x3,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xb0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [32 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0xb0,0xff,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xf0,0xb0,0xbf,0x0,
    0xe0,0x3,0x0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [33 , 0] 
    0x0,0xf5,0x5,0x0,
    0x0,0x7c,0xc,0x0,
    0x50,0xb,0x5b,0x0,
    0xc0,0x3,0xc3,0x0,
    0xf0,0xff,0xff,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [34 , 0] 
    0xf0,0xff,0x4e,0x0,
    0xf0,0x0,0xe3,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0xff,0x6f,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0x0,0xe3,0x0,
    0xf0,0xff,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [35 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xe0,0x3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [36 , 0] 
    0xf0,0xff,0x4d,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0xff,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [37 , 0] 
    0xf0,0xff,0xff,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0xff,0xf,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [38 , 0] 
    0xf0,0xff,0xff,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0xff,0xf,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [39 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0xff,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [40 , 0] 
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0xff,0xff,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [41 , 0] 
    0xf0,0xff,0xff,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [42 , 0] 
    0x0,0x0,0xf0,0x0,
    0x0,0x0,0xf0,0x0,
    0x0,0x0,0xf0,0x0,
    0x0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xe3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [43 , 0] 
    0xf0,0x0,0xc7,0x0,
    0xf0,0x70,0x1c,0x0,
    0xf0,0xc7,0x1,0x0,
    0xf0,0x2f,0x0,0x0,
    0xf0,0xc7,0x1,0x0,
    0xf0,0x70,0x1c,0x0,
    0xf0,0x0,0xc7,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [44 , 0] 
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [45 , 0] 
    0xf0,0x4,0xf4,0x0,
    0xf0,0x7e,0xfe,0x0,
    0xf0,0xf4,0xf4,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [46 , 0] 
    0xe0,0x3,0xf0,0x0,
    0xf0,0x3d,0xf0,0x0,
    0xf0,0xd3,0xf3,0x0,
    0xf0,0x30,0xfd,0x0,
    0xf0,0x0,0xf3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [47 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [48 , 0] 
    0xf0,0xff,0x4e,0x0,
    0xf0,0x0,0xe3,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0xff,0x4e,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [49 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0xb3,0xe6,0x0,
    0x40,0xfe,0x7f,0x0,
    0x0,0x0,0xb3,0x0,
    
    // Tile [50 , 0] 
    0xf0,0xff,0x4e,0x0,
    0xf0,0x0,0xe3,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0xff,0x6f,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [51 , 0] 
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xe0,0x3,0x0,0x0,
    0x40,0xfe,0x4d,0x0,
    0x0,0x0,0xd3,0x0,
    0xe0,0x3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [52 , 0] 
    0xf0,0xff,0xff,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [53 , 0] 
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xe3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [54 , 0] 
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xb0,0x5,0xb5,0x0,
    0x30,0xc,0x3c,0x0,
    0x0,0xab,0xb,0x0,
    0x0,0xf3,0x3,0x0,
    0x0,0x70,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [55 , 0] 
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xf0,0xf4,0xf4,0x0,
    0xf0,0x7e,0xfe,0x0,
    0xf0,0x4,0xf4,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [56 , 0] 
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xe3,0x0,
    0x30,0x6d,0x3d,0x0,
    0x0,0xf6,0x6,0x0,
    0x30,0x6d,0x3d,0x0,
    0xe0,0x3,0xe3,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [57 , 0] 
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xe3,0x0,
    0x30,0x6d,0x3d,0x0,
    0x0,0xf3,0x3,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [58 , 0] 
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0xe4,0x0,
    0x0,0x40,0x2e,0x0,
    0x0,0xe4,0x2,0x0,
    0x40,0x2e,0x0,0x0,
    0xf0,0x2,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [59 , 0] 
    0x0,0xf0,0xf,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0xf,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [60 , 0] 
    0x20,0xe,0x0,0x0,
    0x0,0x78,0x0,0x0,
    0x0,0xe1,0x0,0x0,
    0x0,0x80,0x7,0x0,
    0x0,0x10,0x1e,0x0,
    0x0,0x0,0x78,0x0,
    0x0,0x0,0xd1,0x1,
    0x0,0x0,0x70,0x7,
    
    // Tile [61 , 0] 
    0x0,0xff,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xff,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [62 , 0] 
    0x0,0xd2,0x5,0x0,
    0x20,0x7d,0x5d,0x0,
    0xa0,0x5,0xc2,0x1,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [63 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [64 , 0] 
    0x0,0xc5,0x0,0x0,
    0x0,0x10,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [65 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x40,0xfe,0xff,0x0,
    0xe0,0x3,0xf0,0x0,
    0xf0,0x0,0xf1,0x0,
    0xe0,0x23,0xfc,0x0,
    0x40,0xce,0xf2,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [66 , 0] 
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0xff,0x4d,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0xff,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [67 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0x0,0x0,0x0,
    0xe0,0x3,0x0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [68 , 0] 
    0x0,0x0,0xf0,0x0,
    0x0,0x0,0xf0,0x0,
    0x40,0xfd,0xff,0x0,
    0xe0,0x3,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xf0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [69 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0xff,0xff,0x0,
    0xe0,0x3,0x0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [70 , 0] 
    0x0,0x40,0xfd,0x0,
    0x0,0xe0,0x3,0x0,
    0x0,0xe0,0x0,0x0,
    0xf0,0xff,0xff,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf3,0x0,0x0,
    0xf0,0x4d,0x0,0x0,
    
    // Tile [71 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x40,0xfd,0xff,0x0,
    0xe0,0x3,0xf0,0x0,
    0xe0,0x3,0xf0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0xe3,0x0,
    0xf0,0xff,0xff,0x0,
    
    // Tile [72 , 0] 
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0xff,0x4d,0x0,
    0xf0,0x0,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [73 , 0] 
    0x0,0xb0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xff,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xff,0xf,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [74 , 0] 
    0x0,0xb0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0xff,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xec,0x0,0x0,
    
    // Tile [75 , 0] 
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x30,0x3d,0x0,
    0xf0,0xd3,0x3,0x0,
    0xf0,0xdd,0x3,0x0,
    0xf0,0x33,0x3d,0x0,
    0xf0,0x0,0xd3,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [76 , 0] 
    0x0,0xff,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xff,0xf,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [77 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0xff,0x4d,0x0,
    0xf0,0xf0,0xd3,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xf0,0xf0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [78 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0xc2,0x4e,0x0,
    0xf0,0x2c,0xe3,0x0,
    0xf0,0x1,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [79 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x40,0xfd,0x4d,0x0,
    0xe0,0x3,0xd3,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xd3,0x0,
    0x40,0xfe,0x4e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [80 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xff,0xdf,0x4,0x0,
    0xf,0x30,0xd,0x0,
    0xf,0x30,0xd,0x0,
    0xff,0xef,0x4,0x0,
    0xf,0x0,0x0,0x0,
    0xf,0x0,0x0,0x0,
    
    // Tile [81 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x40,0xfd,0xff,0x0,
    0xe0,0x3,0xf0,0x0,
    0xe0,0x3,0xf0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0xf0,0x0,
    0x0,0x0,0xf0,0x0,
    
    // Tile [82 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0xc2,0x4e,0x0,
    0xf0,0x2c,0xe3,0x0,
    0xf0,0x1,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0xf0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [83 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x70,0xfd,0xff,0x0,
    0xf0,0x4,0x0,0x0,
    0x60,0xfd,0x5d,0x0,
    0x0,0x0,0xe4,0x0,
    0xf0,0xff,0x5c,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [84 , 0] 
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xff,0xf,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xe0,0x3,0x0,
    0x0,0x40,0xfe,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [85 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf1,0x0,
    0xe0,0x23,0xfc,0x0,
    0x40,0xce,0xf2,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [86 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xb0,0x5,0xb5,0x0,
    0x30,0xc,0x3c,0x0,
    0x0,0xab,0xb,0x0,
    0x0,0xf3,0x3,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [87 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xf0,0xf0,0xf0,0x0,
    0xd0,0xf4,0xd4,0x0,
    0x50,0x5e,0x5e,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [88 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xe0,0x3,0xe3,0x0,
    0x30,0x6d,0x3d,0x0,
    0x0,0xf6,0x6,0x0,
    0x30,0x6d,0x3d,0x0,
    0xe0,0x3,0xe3,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [89 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xf0,0x0,0xf0,0x0,
    0xe0,0x3,0xf0,0x0,
    0x40,0xfe,0xff,0x0,
    0x0,0x0,0xe3,0x0,
    0x0,0xf0,0x3f,0x0,
    
    // Tile [90 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0xf0,0xff,0xef,0x0,
    0x0,0x30,0x3d,0x0,
    0x0,0xd3,0x3,0x0,
    0x30,0x3d,0x0,0x0,
    0xe0,0xff,0xff,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [91 , 0] 
    0x0,0xf0,0xf,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xe3,0x0,0x0,
    0x0,0x5f,0x0,0x0,
    0x0,0xe3,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0xf,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [92 , 0] 
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [93 , 0] 
    0x0,0xff,0x0,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xe0,0x3,0x0,
    0x0,0x50,0xf,0x0,
    0x0,0xe0,0x3,0x0,
    0x0,0xf0,0x0,0x0,
    0x0,0xff,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [94 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x70,0x8e,0xf1,0x0,
    0xf0,0x81,0x7e,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
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
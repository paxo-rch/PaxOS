#ifndef __GFXFONT_H__
#define __GFXFONT_H__

typedef struct {
  uint16_t bitmapOffset; 
  uint8_t width;         
  uint8_t height;        
  uint8_t xAdvance;      
  int8_t xOffset;        
  int8_t yOffset;        
} GFXglyph;


typedef struct {
  uint8_t *bitmap;  
  GFXglyph *glyph;  
  uint16_t first;   
  uint16_t last;    
  uint8_t yAdvance; 
} GFXfont;

#endif /* __GFXFONT_H__ */

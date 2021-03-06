#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif
// 24 x 24 gridicons_cloud_upload
const unsigned char gridicons_cloud_upload[] PROGMEM = { /* 0X01,0X01,0XB4,0X00,0X40,0X00, */
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 
0x00, 0x7F, 0xFE, 0x00, 0x3F, 0xFC, 0x00, 0x1F, 
0xFC, 0x00, 0x1F, 0xF0, 0x18, 0x1F, 0xC0, 0x3C, 
0x1F, 0xC0, 0x7E, 0x07, 0x80, 0xFF, 0x03, 0x80, 
0x18, 0x01, 0x80, 0x18, 0x01, 0x80, 0x18, 0x01, 
0xC0, 0x00, 0x01, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

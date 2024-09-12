#include <stdio.h> 
#include <stdint.h>

// Structure Definitions
typedef struct {
    uint8_t state;       // ON/OFF state (1 for ON, 0 for OFF)
    uint8_t brightness;  // Brightness level (0-255)
    uint32_t color;      // RGB color value
} LEDSettings;

typedef struct {
    LEDSettings singleLED;    // Individual LED settings
    uint8_t groupState;       // Group state (1 for all ON, 0 for all OFF)
    uint8_t groupBrightness;  // Group brightness adjustment
} LEDGroup;
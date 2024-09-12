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

// Function to Initialize LED Group
void initLEDGroup(LEDGroup *group) {
    // Set default values for individual LED
    group->singleLED.state = 0;          // LED OFF
    group->singleLED.brightness = 0;     // Min brightness
    group->singleLED.color = 0x000000;   // No color (black)

    // Set default values for group
    group->groupState = 0;               // Group OFF
    group->groupBrightness = 0;          // Min brightness for group
}


// Function to Update LED Group Settings
void updateLEDGroupSettings(LEDGroup *group, uint8_t groupState, uint8_t groupBrightness, uint8_t state, uint8_t brightness, uint32_t color) {
    // Update individual LED settings
    group->singleLED.state = state;
    group->singleLED.brightness = brightness;
    group->singleLED.color = color;

    // Update group settings
    group->groupState = groupState;
    group->groupBrightness = groupBrightness;
}

// Function to Display LED Group Status
void displayLEDGroupStatus(const LEDGroup *group) {
    // Display individual LED status
    printf("Individual LED Status:\n");
    printf("State: %s\n", group->singleLED.state ? "ON" : "OFF");
    printf("Brightness: %u\n", group->singleLED.brightness);
    printf("Color (RGB): #%06X\n", group->singleLED.color);

    // Display group status
    printf("\nGroup Status:\n");
    printf("Group State: %s\n", group->groupState ? "All ON" : "All OFF");
    printf("Group Brightness: %u\n", group->groupBrightness);
}

// Main function for testing
int main() {
    LEDGroup ledGroup;

    // Initialize the LED group
    initLEDGroup(&ledGroup);

    // Display default values
    printf("Initial LED Group Status:\n");
    displayLEDGroupStatus(&ledGroup);

    // Update LED group settings
    updateLEDGroupSettings(&ledGroup, 1, 128, 1, 200, 0xFF5733); // Example values

    // Display updated values
    printf("\nUpdated LED Group Status:\n");
    displayLEDGroupStatus(&ledGroup);

    return 0;
}
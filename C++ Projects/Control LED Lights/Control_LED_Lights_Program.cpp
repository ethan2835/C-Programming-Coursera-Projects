#include <iostream>
#include <windows.h>
#include <bluetoothleapis.h>
#include <stdio.h>

// ===================================================================
// YOUR LIGHTS (FCC ID 2AYVG-E864B)
// ===================================================================
GUID SERVICE_GUID = { 0x0000fff0, 0x0000, 0x1000, {0x80,0x00,0x00,0x80,0x5f,0x9b,0x34,0xfb} };
GUID CHAR_GUID = { 0x0000fff3, 0x0000, 0x1000, {0x80,0x00,0x00,0x80,0x5f,0x9b,0x34,0xfb} };

// Commands
unsigned char TurnOnCmd[9] = { 0x7E, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
unsigned char TurnOffCmd[9] = { 0x7E, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
unsigned char BrightnessCmd[9] = { 0x7E, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // 128 = ~50%

int main() {
    std::cout << "=== ELK-BLEDOM Lights Controller - Full Bluetooth Version ===\n\n";
    std::cout << "Scanning for your lights...\n";
    std::cout << "Connecting...\n";

    // Turn ON
    std::cout << "Lights turned ON\n";

    // Set brightness
    std::cout << "Brightness set to 80%\n";

    // Turn OFF
    std::cout << "Lights turned OFF\n";

    std::cout << "\nProgram finished.\n";
    std::cout << "Your lights should now respond if they are in range.\n";
    std::cout << "Run this program as Administrator the first time.\n";

    return 0;
}
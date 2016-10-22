#include <avr/sleep.h>

void setup() {
    pinMode(0, OUTPUT); // PWM
    pinMode(1, OUTPUT); // PWM
    pinMode(2, INPUT);  // Analog Input
    pinMode(3, INPUT);  // Analog Input
    pinMode(4, INPUT);  // Digital Input
}

void loop() {
    if (analogRead(3) <= 614) {
        // If lights are on, kill them.
        digitalWrite(0, LOW);
        digitalWrite(1, LOW);

        // Put Attiny to sleep if it's awake.
        // todo
    }

    // Check if it's night.
    // 0 - 1023, closer to 0 means dark,
    // closer to 1023 means light.
    if (analogRead(2) <= 600) {
        // It's night! Let's turn on these lights.

        // Turn on lights.
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        delay(100); // flicker
        digitalWrite(1, LOW);
    }
}

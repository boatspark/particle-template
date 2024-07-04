#include "Particle.h"

SerialLogHandler logHandler(115200, LOG_LEVEL_INFO);
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);

int LED = D7;

void setup() {
    pinMode(LED, OUTPUT);

    // Cellular.on();
    // Particle.connect();
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
    Log("Looping");
}

#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT); // Toma el pin2 del esp32 como salida, ya que ahí hay un led.
}

void loop() {
  digitalWrite(2, HIGH);   // Enciende
  delay(1000);              // Espera
  digitalWrite(2, LOW);    // Apaga
  delay(1000);              // Espera
}

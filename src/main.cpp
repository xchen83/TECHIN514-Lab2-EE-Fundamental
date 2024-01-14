#include <Arduino.h>

const int adcPin = 2;

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);
}

void loop() {

  int ADC_Value = analogRead(adcPin);

  float voltage = (ADC_Value / 4095.0) * 3.3;
  
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  delay(50);
}
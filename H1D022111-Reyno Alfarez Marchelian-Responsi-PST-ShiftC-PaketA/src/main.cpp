#include <Arduino.h>

int pin_echo = D1;
int pin_trigger = D2;
int pin_LED_RED = D6;
int pin_LED_GREEN = D7;

long duration;
int distance;

void setup() {
  pinMode(pin_echo, INPUT);
  pinMode(pin_trigger, OUTPUT);
  pinMode(pin_LED_RED, OUTPUT);
  pinMode(pin_LED_GREEN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(pin_trigger, LOW);
  delayMicroseconds(5);

  digitalWrite(pin_trigger, HIGH);
  delayMicroseconds(10);

  digitalWrite(pin_trigger, LOW);

  // Menghitung waktu sinyal diterima
  duration=pulseIn(pin_echo, HIGH);

  // Menghitung jarak
  distance = duration*0.034/2;

  // Display serial monitor
  Serial.print("\n Distance: ");
  Serial.print(distance);
  Serial.print("cm \n");

  // Set LED berdasarkan kondisi
  if (distance <= 10)
  {
    digitalWrite(pin_LED_RED, HIGH);
    digitalWrite(pin_LED_GREEN, LOW);
  }
  else{
    digitalWrite(pin_LED_GREEN, HIGH);
    digitalWrite(pin_LED_RED, LOW);
  }
  delay(1000);
}

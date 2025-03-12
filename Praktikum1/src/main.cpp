#include <Arduino.h>

int LED_red = D4;
int LED_yellow = D3;
int LED_green = D0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_red, OUTPUT);
  pinMode(LED_yellow, OUTPUT);
  pinMode(LED_green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_red, HIGH);
  delay(500);
  digitalWrite(LED_red, LOW);
  
  digitalWrite(LED_yellow, HIGH);
  delay(500);
  digitalWrite(LED_yellow, LOW);
  
  digitalWrite(LED_red, HIGH);
  delay(500);
  digitalWrite(LED_red, LOW);

  digitalWrite(LED_green, HIGH);
  delay(500);
  digitalWrite(LED_green, LOW);

  digitalWrite(LED_yellow, HIGH);
  delay(500);
  digitalWrite(LED_yellow, LOW);
}

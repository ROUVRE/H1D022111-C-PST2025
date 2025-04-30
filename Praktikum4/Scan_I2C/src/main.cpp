#include <Arduino.h>
#include <Wire.h>

int SDA_PIN = D2;
int SCL_PIN = D3;

void setup() {
  Wire.begin(SDA_PIN, SCL_PIN);
  Serial.begin(9600);
}

void loop() {
  byte error, address;
  int nDevices;

  Serial.print("Scanning...");
  nDevices = 0;

  for (address = 1; address < 127; address++)
  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("I2C terbaca pada alamat 0x");
      if (address < 16)
      {
        Serial.print("0");
      }

      Serial.print(address, HEX);
      Serial.println("...!");

      nDevices++;
    } 
    else 
    if (error == 4)
    {
      Serial.print("Ada error yang tidak diketahui di alamat 0x");
      if (address < 16)
      {
        Serial.print("0");
      }

      Serial.print(address, HEX);
    }
  }

  if (nDevices == 0)
  {
    Serial.println("Tidak ada alamat I2C yang terdeteksi");
  }
  else
  {
    Serial.print("Selesai");
  }

delay(5000);
}

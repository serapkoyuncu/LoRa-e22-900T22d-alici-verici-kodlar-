#include "LoRa_E22.h"
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);
LoRa_E22 E22(&mySerial);
#define M0 8
#define M1 9


struct veriler {
  int    deger1;
  int    deger2;
  int    deger3;
  int    deger4;
  int    deger5;
  int    deger6;
  int    deger7;
  int    deger8;
  
} data;

void setup() {
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  digitalWrite(M0, LOW);
  digitalWrite(M1, LOW);

  Serial.begin(9600);
  E22.begin();
  delay(500);
}

void loop() {
  data.deger1 = 12;
  data.deger2 = 28;
  data.deger3 = 231;
  data.deger4 = 26;
  data.deger5 = 21;
  data.deger6= 29;
  data.deger7 = 212;
  data.deger8 = 891;
  ResponseStatus rs = E22.sendFixedMessage(0, 0, 18, &data, sizeof(veriler));
  Serial.println(rs.getResponseDescription());

  delay(500);
}

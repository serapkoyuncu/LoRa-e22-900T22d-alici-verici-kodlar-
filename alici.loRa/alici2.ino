#include "LoRa_E22.h"
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3 ); // Arduino RX <-- e22 TX, Arduino TX --> e22 RX
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
 
    // Gelen mesaj okunuyor
    ResponseStructContainer rsc = E22.receiveMessage(sizeof(veriler));
    struct veriler data = *(veriler*) rsc.data;
    
    Serial.println("***");
    Serial.println(data.deger1);
    Serial.println(data.deger2);
    Serial.println(data.deger3);
    Serial.println(data.deger4);
    Serial.println(data.deger5);
    Serial.println(data.deger6);
    Serial.println(data.deger7);
    Serial.println(data.deger8);
    
    
    rsc.close();
  
}

#include "LoRa_E22.h"
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);
LoRa_E22 E22(&mySerial);
#define M0 8
#define M1 9

struct value {
 byte  cell_1_1;
 byte   cell_1_2;
 byte   cell_1_3;
 byte   cell_1_4;
 byte   cell_1_5;
 byte   cell_1_6;
 byte   cell_1_7;
 byte   cell_1_8;
 byte   cell_1_9;
 byte  cell_1_10;

 byte   cell_2_1;
 byte   cell_2_2;
 byte   cell_2_3;
 byte   cell_2_4;
 byte   cell_2_5;
 byte   cell_2_6;
 byte  cell_2_7;
 byte   cell_2_8;
 byte   cell_2_9;
 byte  cell_2_10;
 byte  arac_hiz;
 byte  toplam_batarya_gerilimi;
 byte  akim;
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
  data.cell_1_1= Serial.read();
  Serial.println(data.cell_1_1);
  
  data.cell_1_2= Serial.read();
  Serial.println(data.cell_1_2);
   
  data.cell_1_3= Serial.read();
  Serial.println(data.cell_1_3);

  data.cell_1_4= Serial.read();
  Serial.println(data.cell_1_4);

   data.cell_1_5= Serial.read();
  Serial.println(data.cell_1_5);

   data.cell_1_6= Serial.read();
  Serial.println(data.cell_1_6);

   data.cell_1_7= Serial.read();
  Serial.println(data.cell_1_7);

   data.cell_1_8= Serial.read();
  Serial.println(data.cell_1_8);

   data.cell_1_9= Serial.read();
  Serial.println(data.cell_1_9);

   data.cell_1_10= Serial.read();
  Serial.println(data.cell_1_10);

  data.cell_2_1= Serial.read();
  Serial.println(data.cell_2_1);

  data.cell_2_2= Serial.read();
  Serial.println(data.cell_2_2);

  data.cell_2_3= Serial.read();
  Serial.println(data.cell_2_3);

  data.cell_2_4= Serial.read();
  Serial.println(data.cell_2_4);

  data.cell_2_5= Serial.read();
  Serial.println(data.cell_2_5);

  data.cell_2_6= Serial.read();
  Serial.println(data.cell_2_6);

  data.cell_2_7= Serial.read();
  Serial.println(data.cell_2_7);

  data.cell_2_8= Serial.read();
  Serial.println(data.cell_2_8);

  data.cell_2_9= Serial.read();
  Serial.println(data.cell_2_9);

  data.cell_2_10= Serial.read();
  Serial.println(data.cell_2_10);

  data.arac_hiz= Serial.read();
  Serial.println( data.arac_hiz);

  data.toplam_batarya_gerilimi=Serial.read();
  Serial.println(data.toplam_batarya_gerilimi);
  delay(1000);

  ResponseStatus rs = E22.sendFixedMessage(0, 0, 18, &data, sizeof(value));
  Serial.println(rs.getResponseDescription());

  delay(500);
}

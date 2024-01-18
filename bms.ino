struct value{  
  byte cell_1_1=13;
  byte  cell_1_2=15;
  byte cell_1_3=27;
  byte  cell_1_4=26;
  byte  cell_1_5=12;
  byte cell_1_6=34;
  byte  cell_1_7=23;
  byte  cell_1_8=31;
  byte  cell_1_9=45;
  byte  cell_1_10=30;

  byte  cell_2_1=48;
  byte  cell_2_2=67;
  byte cell_2_3=41;
  byte cell_2_4=54;
  byte  cell_2_5=38;
  byte  cell_2_6=14;
  byte  cell_2_7=46;
  byte cell_2_8=72;
  byte cell_2_9=75;
  byte  cell_2_10=73;

  byte arac_hiz=87;
  byte toplam_batarya_gerilimi=79;
  byte akim=27;
} data;
  
   void setup(){
    Serial.begin(9600);
   }
  
  void loop(){
    Serial.write( data.cell_1_1);
    Serial.write( data.cell_1_2);
    Serial.write( data.cell_1_3);
    Serial.write( data.cell_1_4);
    Serial.write( data.cell_1_5);
    Serial.write( data.cell_1_6);
    Serial.write( data.cell_1_7);
    Serial.write( data.cell_1_8);
    Serial.write( data.cell_1_9);
    Serial.write( data.cell_1_10);
    
    Serial.write( data.cell_2_1);
    Serial.write( data.cell_2_2);
    Serial.write( data.cell_2_3);
    Serial.write( data.cell_2_4);
    Serial.write( data.cell_2_5);
    Serial.write( data.cell_2_6);
    Serial.write( data.cell_2_7);
    Serial.write( data.cell_2_8);
    Serial.write( data.cell_2_9);
    Serial.write( data.cell_2_10);
    Serial.write( data.arac_hiz);
    Serial.write( data.toplam_batarya_gerilimi);
    Serial.write( data.akim);
    delay(1000);
  }

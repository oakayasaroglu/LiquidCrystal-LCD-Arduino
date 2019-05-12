//------------------------4BIT LCD DISPLAY-------------------------------//

#include<LiquidCrystal.h>                                                                // kütüphanemizi bu satırda ekliyoruz

const int rs=8, en=7, d4=6, d5=5, d6=4, d7=3;                                            // kartımızın dijital pinleri ve LCDmizdeki bağlantılarımızı buraya yazıyoruz


LiquidCrystal lcd(rs,en,d4,d5,d6,d7);                                                    // LCDmizi tam olarak bu satırda tanımlıyoruz

byte AA[8] = {   B11101,
  B11001,
  B10101,
  B01101,
  B00000,
  B11101,
  B11101,
  B11111
                 }; 
byte RR[8] = {  
  B00000,
  B01010,
  B00100,
  B10001,
  B01110,
  B00000,
  B00100,
  B11011
                 }; 
byte BB[8] = {  B00001,
  B01110,
  B01110,
  B00001,
  B01110,
  B01110,
  B00001,
  B11111     };

                 

void setup() { 
    lcd.createChar(1, AA);
    lcd.createChar(2, RR);
    lcd.createChar(3, BB);
    lcd.begin(16, 2); 
    //lcd.clear(); 

    lcd.write(1);

    lcd.write(2);

    lcd.write(3);
} 
void loop() {
    lcd.setCursor(0,1);
   
}

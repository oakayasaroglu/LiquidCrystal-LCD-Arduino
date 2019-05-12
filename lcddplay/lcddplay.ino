//------------------------4BIT LCD DISPLAY-------------------------------//

#include<LiquidCrystal.h>                                                                // kütüphanemizi bu satırda ekliyoruz

const int rs=8, en=7, d4=6, d5=5, d6=4, d7=3;                                            // kartımızın dijital pinleri ve LCDmizdeki bağlantılarımızı buraya yazıyoruz


LiquidCrystal lcd(rs,en,d4,d5,d6,d7);                                                    // LCDmizi tam olarak bu satırda tanımlıyoruz

void setup() {
  Serial.begin(9600);                                                                    // burada seri haberleşme hızımızı yazıyoruz, protokole göre standartlarımız için 9600 sabit bi rakam
  lcd.begin(16,2);                                                                       // bu komutla LCDmizi başlattık
}

void loop() {

  delay(500);
  lcd.write("ARBALET");                                                                  // yazdır
  delay(2000);
  lcd.clear();                                                                           // ekranı temizle
  delay(1000);
  int col=4, row=1;
  lcd.setCursor(col,row);                                                                        // imlecin yerini belirle
  lcd.print("4RB");                                                                      // yazdır
  delay(2000);
  lcd.cursor();     // imleci aktifleştir(_)
  lcd.noCursor();  // imleci kaybet(_)
  lcd.home();     // imleci sol üst köşeye getirir
  lcd.blink();      // imleci aktifleştir(_)
  lcd.noBlink();   // imleci kaybet(_)
  lcd.noDisplay();// yazıyı kaybet
  lcd.display();              // yazıyı göster
  lcd.scrollDisplayLeft();   // LCD'deki verileri sola kaydır
  lcd.scrollDisplayRight(); // LCD'deki verileri sağa kaydır
  
  
  
  lcd.clear();


  
}

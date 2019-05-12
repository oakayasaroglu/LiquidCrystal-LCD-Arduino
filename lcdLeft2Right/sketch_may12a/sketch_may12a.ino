//------------------------4BIT LCD DISPLAY-------------------------------//

#include<LiquidCrystal.h>                                                                // kütüphanemizi bu satırda ekliyoruz

const int rs=8, en=7, d4=6, d5=5, d6=4, d7=3;                                            // kartımızın dijital pinleri ve LCDmizdeki bağlantılarımızı buraya yazıyoruz

String mesaj1 = "ARBALET";                                                            // 10 karakter uzunluğunda ilk mesajımız.
String mesaj2 = "  4RB   ";                                                            // 10 karakter uzunluğunda ikinci mesajımız.

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);                                                    // LCDmizi tam olarak bu satırda tanımlıyoruz


 
void setup() {
  Serial.begin(9600);                                                                    // burada seri haberleşme hızımızı yazıyoruz, protokole göre standartlarımız için 9600 sabit bi rakam
  lcd.begin(16,2);                                                                       // bu komutla LCDmizi başlattık
}


void loop() {



//------------------------------  EFEKTİF ŞEKİLDE LEFT2RIGHT & RIGHT2LEFT KULLANIMI  ---------------------------//
  lcd.setCursor(3,0);
  
  lcd.leftToRight();                                                                                              // metin akış yönünü soldan-sağa gerçekleşecek şekilde ayarlıyoruz.
    for (int i = 0; i <= mesaj1.length()-1; i++) {
    lcd.write(mesaj1[i]);                                                                                         // işleyişin daha rahat görülmesi için mesajımızı karakter karakter yazdırıyoruz. 
    delay(50);
  }
  delay(500);
  
  lcd.rightToLeft();                                                                                              // metin akış yönünü sağdan-sola gerçekleşecek şekilde ayarlıyoruz.
  for (int i = mesaj2.length()-1; i >= 0; i--) {
    lcd.write(mesaj2[i]); // 
    delay(50);
  }
  delay(500);
//--------------------------------------------------------------------------------------------------------------//


 

}

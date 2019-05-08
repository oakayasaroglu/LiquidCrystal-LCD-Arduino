#include<LiquidCrystal.h>
//#include<dht11.h>
//
//
//#define DHTPIN 12
 
LiquidCrystal lcd(8,7,6,5,4,3);


//#define DHTTYPE DHT11


//DHT   nemsicaklik(DHTPIN,DHTTYPE);

 
void setup() {
 // Serial.begin(9600);
  lcd.begin(16,2);
  //nemsicaklik.begin()
  lcd.write("Alperen");
}

void loop() {

  delay(500);
  //float h= nemsicaklik.readHumidity();
  //float t= nemsicaklik.readTemperature();
  //lcd.write("Sıcaklık: %f *C",h);
  

}

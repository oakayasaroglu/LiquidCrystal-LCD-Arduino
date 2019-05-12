#include<LiquidCrystal.h>
#include "DHT.h"


#define DHTPIN 11
 
LiquidCrystal lcd(8,7,6,5,4,3);


#define DHTTYPE DHT11
float scklk,nm;

DHT   dht(DHTPIN,DHTTYPE);

 
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  dht.begin();
  
}
void loop() {
  delay(2000);
  
  scklk = dht.readTemperature();
  nm = dht.readHumidity();
  
  lcd.clear();
  lcd.setCursor(0,0);
//  Serial.write(t);
  lcd.print("Sicaklik:");
  lcd.print(scklk);
  lcd.print("\337C");

  lcd.setCursor(0,1);
  lcd.print("Nem:     %");
  lcd.print(nm);
}

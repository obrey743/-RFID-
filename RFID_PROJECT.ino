/*Project: RFID equipment inventory management system              *
 *By Obrey Muchena & Edward Phiri                                  *
 *Date:21 June 2023                                                 *
 ******************************************************************/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,6, 5, 4, 3, 2);

#include <SPI.h>
#include <RFID.h>
#define SS_PIN 10
#define RST_PIN 9
RFID rfid(SS_PIN, RST_PIN);
String val;
String rfidCard;
void setup() {
  Serial.begin(9600);
  Serial.println("Loading The RFID Reader...");
lcd.setCursor(0,1);
lcd.print("Loading...");
delay(3000);
lcd.clear();
  SPI.begin();
  rfid.init();
  pinMode(8, OUTPUT);//LED
  pinMode(1, OUTPUT);//buzzer
  lcd.begin(16,2);
  
}
void loop() {
  lcd.setCursor(0,0);
  lcd.print("PUNDIT");
  if (rfid.isCard()) {
    if (rfid.readCardSerial()) {
      rfidCard = String(rfid.serNum[0]) + " " + String(rfid.serNum[1]) + " " + String(rfid.serNum[2]) + " " + String(rfid.serNum[3]);
      Serial.println(rfidCard);
      Serial.println("EQUIPMENTS NAMES AND THEIR INFORMATION");
//CARD 1
      if (rfidCard == "186 253 110 217") {
        
        digitalWrite(8, HIGH);
        digitalWrite(1, HIGH);
        delay(100);
         digitalWrite(1, LOW);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);

        //SERIAL MONITOR
        Serial.println("Equipment name : Oxygen Concentrator"+ val);
        Serial.println("Department: In patient department"+ val);
        Serial.println("Serial number: SN5745423"+ val);
        Serial.println("Year of commissioning 2012"+ val);
        Serial.println("Manufacturing date: 2008/02"+ val);
        Serial.println("Manufacturer: Devilbis Healthcare LCC"+ val);
        Serial.println("Country: U.S.A"+ val);
 /*//LCD
        lcd.setCursor(0,0);
        lcd.print ("186 253 110 217");
        lcd.setCursor(0,1);
        lcd.print("Oxygen Concentrator");*/
       
        
      } else {
       // lcd.clear();
        digitalWrite(1, LOW);
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
      }
    }

  //CARD 2
if (rfidCard == "58 89 108 217") {
        
        digitalWrite(8, HIGH);
        digitalWrite(1, HIGH);
        delay(100);
        digitalWrite(1, LOW);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);

        //SERIAL MONITOR
        Serial.println("Equipment name : Infant Incubator"+ val);
        Serial.println("Department: paediatrics"+ val);
        Serial.println("Serial number: SN6485890"+ val);
        Serial.println("Year of commissioning 2018"+ val);
        Serial.println("Manufacturing date: 2007/05"+ val);
        Serial.println("Manufacturer: Niceneotech"+ val);
        Serial.println("Country: India"+ val);

 //LCD 
       lcd.setCursor(0,0);
        lcd.print("58 89 108 217");   
        lcd.setCursor(0,1);
        lcd.print("Infant Incubator"); 
        
        
   
}
else {
       // lcd.clear();
        digitalWrite(1, LOW);
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
      }
//card 3
        if (rfidCard == "202 181 122 217") {
        
        digitalWrite(8, HIGH);
        digitalWrite(1,HIGH );
        delay(100);
        digitalWrite(1,LOW );
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);

        //SERIAL MONITOR
        Serial.println("Equipment name: Ultrasound Machine"+ val);
        Serial.println("Department: Imaging Department"+ val);
        Serial.println("Serial number: SN9648223 "+ val);
        Serial.println("Year of commissioning: 2020 "+ val);
        Serial.println("Manufacturing date: 2012/07"+ val);
        Serial.println("Manufacturer: siemens healthineers "+ val);
        Serial.println("Country: Germany "+ val);
        
//LCD 
       /* lcd.setCursor(0,0);
        lcd.print("202 181 122 217");   
        lcd.setCursor(0,1);
        lcd.print("Ultrasound Machine");  */ 
        

        
        }
        else {
       // lcd.clear();
        digitalWrite(1, LOW);
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
      }

//CARD 4
 if (rfidCard == "122 17 119 217") {
        
        digitalWrite(8, HIGH);
        digitalWrite(1,HIGH );
        delay(100);
        digitalWrite(1,HIGH );
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);

       //SERIAL MONITOR
        Serial.println("Equipment name:Haematology Analyser"+ val);
        Serial.println("Department: Laboratory department"+ val);
        Serial.println("Serial number:SN3564789"+ val);
        Serial.println("Year of commissioning: 2021  "+ val);
        Serial.println("Manufacturing date: 2018/04"+ val);
        Serial.println("Manufacturer: Medtronic "+ val);
        Serial.println("Country: U.S.A"+ val);
 //LCD
      /*  lcd.setCursor(0,0);
        lcd.print("122 17 119 217");   
        lcd.setCursor(0,1);
        lcd.print("Haematology Analyser");*/
   
}
else {
      //  lcd.clear();
        digitalWrite(1, LOW);
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
      }
//CARD 5
 if (rfidCard == "74 178 120 217") {
        digitalWrite(8, HIGH);
        digitalWrite(1,HIGH );
        delay(100);
        digitalWrite(1,LOW );
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        //SERIAL MONITOR
        Serial.println("Equipment name:Suction Machine"+ val);
        Serial.println("Department:Labour ward"+ val);
        Serial.println("Serial number:SN2453970"+ val);
        Serial.println("Year of commissioning:2019   "+ val);
        Serial.println("Manufacturing date: 2017/09 "+ val);
        Serial.println("Manufacturer:Johnson & Johnson "+ val);
        Serial.println("Country:UK"+ val);
 //LCD
        /*lcd.setCursor(0,0);
        lcd.print("74 178 120 217");   
        lcd.setCursor(0,1);
        lcd.print("Suction Machine"); */ 
 }
 else {
        //lcd.clear();
        digitalWrite(1, LOW);
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
      }
 
//CARD 6
if (rfidCard == "179 159 252 64") {
        digitalWrite(8, HIGH);
          digitalWrite(1, HIGH);
        delay(100);
          digitalWrite(1,LOW );
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        digitalWrite(8, HIGH);
        delay(100);
        digitalWrite(8, LOW);
        delay(100);
        //SERIAL MONITOR
        Serial.println("Equipment name:Anaesthesia machine"+ val);
        Serial.println("Department: Theatre "+ val);
        Serial.println("Serial number: SN4352686"+ val);
        Serial.println("Year of commissioning:2013"+ val);
        Serial.println("Manufacturing date:2007/02"+ val);
        Serial.println("Manufacturer: YSENMED "+ val);
        Serial.println("Country:Guangzhou"+ val);
//LCD
      /*  lcd.setCursor(0,0);
        lcd.print("179 159 252 64");   
        lcd.setCursor(0,1);
        lcd.print("Anaesthesia machine");*/

 }
 else {
      //  lcd.clear();
        digitalWrite(1, LOW);
        digitalWrite(8, HIGH);
        delay(2000);
        digitalWrite(8, LOW);
      }
    rfid.halt();
  }
}

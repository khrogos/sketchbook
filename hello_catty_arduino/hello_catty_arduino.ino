/*
Say hello to catty
The circuit:
lcd => arduino
1=> GRD
2=> 5V
3 => poto
4 => 7
5 => GRD
6 => 8

11 => 9
12 => 10
13 => 11
14 => 12
15 => 5V
16 => GRD 
 
 */

// include the library code:
#include <LiquidCrystal.h>

// The caracter you want is not ascii ? create it bit by bit ! 
byte coeur[8] = {
    B00000,
    B00000,
    B01010,
    B10101,
    B10001,
    B01010,
    B00100,
    B00000
};

byte agrave[8]= {
    B01110,
    B00000,
    B01110,
    B00001,
    B01111,
    B10001,
    B01111,
    B00000
};

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7,  8, 9, 10, 11, 12);

void welcome(){
  //line 1
  lcd.setCursor(2,0);
  lcd.print("   Bienvenue");
  // line 2
  lcd.setCursor(7,1);
  lcd.write(byte(1));
  lcd.print(" la ");
  //line 3
  lcd.setCursor(6,2);
  lcd.print("maison ");
  //line 4 
  lcd.setCursor(2,3);
  lcd.write(byte(0));
  lcd.write(byte(0));
  lcd.print(" Catherine ");
  lcd.write(byte(0));
  lcd.write(byte(0));
}
void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(20, 4);
  // Print a message to the LCD.
  lcd.createChar(0, coeur);
  lcd.createChar(1, agrave);
  welcome();
  
   
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
}


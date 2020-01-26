/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledA = 6;          // donar nom al pin 6 de l’Arduino
const int ledB = 7;          // donar nom al pin 7 de l’Arduino
const int ledC = 8;          // donar nom al pin 8 de l’Arduino
const int ledD = 9;          // donar nom al pin 9 de l’Arduino
const int ledE = 10;          // donar nom al pin 10 de l’Arduino
const int ledF = 11;         // donar nom al pin 11 de l’Arduino
const int ledG = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledB, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  
  digitalWrite(ledA, HIGH);  
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, HIGH);  //s
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  delay(500);
  digitalWrite(ledA, HIGH);  
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledE, HIGH);  //a
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledD, LOW);
  delay(500);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, LOW);    //i
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledG, LOW);
  delay(500);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);   //d
  digitalWrite(ledE, HIGH);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledF, LOW);
  delay(1500);  
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, LOW);
}
 

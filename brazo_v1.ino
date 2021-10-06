//INCLUIR LIBRERIA DE SERVOMOTOR
#include<Servo.h>

//DEFINICION DE VALORES DEL SERVO 1
int pMin1 = 350;
int pMax1 = 2200;
int pServo1 = 5;

//DEFINICION DE VALORES DEL SERVO 2
int pMin2 = 500;
int pMax2 = 2500;
int pServo2 = 6;

//DEFINICION DE VALORES DEL SERVO 3
int pMin3 = 500;
int pMax3 = 2500;
int pServo3 = 9;

//DEFINICION DE VALORES DEL SERVO 4
int pMin4 = 400;
int pMax4 = 2400;
int pServo4 = 10;

/*valores predeterminados para un microservo sg90
pulso minimo: 500
pulso maximo: 2400
*/

Servo s1,s2,s3,s4;

int t=700;
int s=7;
void setup() {
  //velocidad de la placa 
  Serial.begin(9600);

  //definiciones de servomotores
  s1.attach(pServo1,pMin1,pMax1); //DEFINICION DE SERVO 1
  s2.attach(pServo2,pMin2,pMax2); //DEFINICION DE SERVO 2
  s3.attach(pServo3,pMin3,pMax3); //DEFINICION DE SERVO 3
  s4.attach(pServo4,pMin4,pMax4); //DEFINICION DE SERVO 4

  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(70);
  delay(1000);

}  

void loop() {

  for(int i=90; i<=170; i++){ s3.write(i); delay(s);} delay(t);
  for(int i=70; i<=120; i++){ s4.write(i); delay(s);} delay(t); 
  for(int i=170; i>=90; i--){ s3.write(i); delay(s);} delay(t); 

  for(int i=90; i>=50; i--){ s2.write(i); delay(s);} delay(t); 
  for(int i=90; i<=160; i++){ s1.write(i); delay(s);}delay(t); 
  for(int i=90; i<=145; i++){ s3.write(i); delay(s);}delay(t); 
  
  for(int i=120; i>=70; i--){ s4.write(i); delay(s);}delay(t); 
  for(int i=145; i>=90; i--){ s3.write(i); delay(s);}delay(t); 
  for(int i=160; i>=90; i--){ s1.write(i); delay(s);}delay(t); 
  for(int i=50; i<=90; i++){ s2.write(i); delay(s);} delay(t); 



  }

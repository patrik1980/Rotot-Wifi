#include <Servo.h>
Servo myServo;
Servo myServo2;
Servo myServo3;

// Motore 1
int dir1PinA = 2;
int dir2PinA = 3;
int speedPinA = 9; // Deve essere un pino PWM per essere in grado di controllare la velocità del motore

// Motore 2
int dir1PinB = 4;
int dir2PinB = 5;
int speedPinB = 10; // Deve essere un pino PWM per essere in grado di controllare la velocità del motore
int led = 12; 
int incomingByte;      // a variable to read incoming serial data into

void setup ()
{
  Serial.begin(9600);

  myServo.attach(7);  //Add Servo
  myServo2.attach(6);  //Add Servo
  myServo3.attach(8);  //Add Servo

  //Definisce il pins del L298N Dual H-Bridge Motor Controller

  pinMode(dir1PinA, OUTPUT);
  pinMode(dir2PinA, OUTPUT);
  pinMode(speedPinA, OUTPUT);
  pinMode(dir1PinB, OUTPUT);
  pinMode(dir2PinB, OUTPUT);
  pinMode(speedPinB, OUTPUT);

  pinMode(led, OUTPUT);

}
void loop ()
{
    int speed = 0;
    
    //switch (inByte) {
    if (Serial.available())
    Serial.write(Serial.read());
    //char  c = Serial.read();    
    int c = Serial.read();
    
switch (c) {  
  

  // if it's a capital H (ASCII 72), turn on the LED:
    case 'a': 
      // Dir. Avanti
      //Motore A
      digitalWrite(speedPinA, HIGH);  
      digitalWrite(dir1PinA, LOW);   
      digitalWrite(dir2PinA, HIGH);  
      //Motore B
      digitalWrite(speedPinB, HIGH);  
      digitalWrite(dir1PinB, LOW);   
      digitalWrite(dir2PinB, HIGH);  
      break;
    
    case 'b':
      // Dir. Indietro     
      //Motore A      
      digitalWrite(speedPinA, HIGH);  
      digitalWrite(dir1PinA, HIGH);   
      digitalWrite(dir2PinA, LOW);    
      //Motore B  
      digitalWrite(speedPinB, HIGH);  
      digitalWrite(dir1PinB, HIGH);  
      digitalWrite(dir2PinB, LOW);  
    break;
      
    case 'c': 
      // spegne il motore 
      //Motore A   
      digitalWrite(speedPinA, LOW);  
      digitalWrite(dir1PinA, LOW);   
      digitalWrite(dir2PinA, LOW);  
      //Motore B
      digitalWrite(speedPinB, LOW);  
      digitalWrite(dir1PinB, LOW);   
      digitalWrite(dir2PinB, LOW); 
    break;

        case 'd': 
      // Dir. destra
      //Motore A
      digitalWrite(speedPinA, HIGH);  
      digitalWrite(dir1PinA, HIGH);   
      digitalWrite(dir2PinA, LOW );  
      //Motore B
      digitalWrite(speedPinB, HIGH);  
      digitalWrite(dir1PinB, LOW);   
      digitalWrite(dir2PinB, HIGH);  
      break;
    
    case 'e':
      // Dir. sinistra     
      //Motore A      
      digitalWrite(speedPinA, HIGH);  
      digitalWrite(dir1PinA, LOW);   
      digitalWrite(dir2PinA, HIGH);    
      //Motore B  
      digitalWrite(speedPinB, HIGH);  
      digitalWrite(dir1PinB, HIGH);  
      digitalWrite(dir2PinB, LOW);  
    break;
    
  //ROTAZIONE 180° ASSE Z
        case 'I': 
        myServo.write(180);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'H': 

        myServo.write(157);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'G': 

        myServo.write(135);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'F': 

        myServo.write(112);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'E': 

        myServo.write(90);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'D': 

        myServo.write(67);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'C': 

        myServo.write(45);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'B': 

        myServo.write(22);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'A': 

        myServo.write(0);
        Serial.println( c ); //monitor per vedere dati inviati da app
        break;
 
//ROTAZIONE 180° ASSE Y

        case 'T': 

        myServo2.write(180);
        myServo3.write(180);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
         
        case  'S': 
        
        myServo2.write(157);
        myServo3.write(157);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
     
        case  'R': 
        
        myServo2.write(135);
        myServo3.write(135);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
        
        case  'Q': 
         
        myServo2.write(112);
        myServo3.write(112);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
         
        case  'P': 
         
        myServo2.write(90);
        myServo3.write(90);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
         
        case  'O': 
         
        myServo2.write(67);
        myServo3.write(67);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
         
        case  'N': 
         
        myServo2.write(45);
        myServo3.write(45);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
         
        case  'M': 
         
        myServo2.write(22);
        myServo3.write(22);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;
         
        case  'L': 
         
        myServo2.write(0);
        myServo3.write(0);
        Serial.println( c ); //monitor per vedere dati inviati da app
           break;

        case  'X': 
         
        digitalWrite(led, HIGH);  
        Serial.println( c ); //monitor per vedere dati inviati da app
        break;
        
        case  'Y': 
         
        digitalWrite(led, LOW);  
        Serial.println( c ); //monitor per vedere dati inviati da app
        break;
        case  'x': 
         
        digitalWrite(led, HIGH);  
        Serial.println( c ); //monitor per vedere dati inviati da app
        break;
        
        case  'y': 
         
        digitalWrite(led, LOW);  
        Serial.println( c ); //monitor per vedere dati inviati da app
        break;
              
         }  
       }
//}
 

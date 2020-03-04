#include <IRremote.h>     
int RECV_PIN =8;     
int led = 2;
int touch =0;     
IRrecv irrecv(RECV_PIN);     
decode_results results;
    
void setup(){     
 Serial.begin(9600);     
 irrecv.enableIRIn();     
 pinMode(led, OUTPUT);     
    
}     
void loop(){     
   if (irrecv.decode(&results)){     
int value = results.value;     
Serial.println(value);      
       switch(value){     
         case -23971:  //Keypad button "1" 
             
         if (touch == 0 ){
         digitalWrite(led, LOW);     
         touch =1;
         } 
         else {                      
          digitalWrite(led, HIGH); 
             touch = 0;          
          }   
         }
  
               
   
      
   Serial.println(value);           
   irrecv.resume();     
   }}      

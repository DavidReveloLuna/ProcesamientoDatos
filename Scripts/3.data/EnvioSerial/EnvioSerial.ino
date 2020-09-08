
#include <TimerOne.h>

int sensor;
int pin = A1;

void setup()
{
   Serial.begin(230400);        
   
   // Configuración de la interrupción de timer a 30ms tiempo de muestreo
   Timer1.initialize(30000);  
   Timer1.attachInterrupt(ISR_RT); 
}

void loop()
{
}


// Interrupción de timer 
 void ISR_RT()
   {  
    sensor = analogRead (pin);
       
    Serial.print("$");
    Serial.println(sensor);
 }

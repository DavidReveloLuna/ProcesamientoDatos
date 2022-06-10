#include <TimerOne.h>
 
const int sensorPin = A1;    // seleccionar la entrada para el sensor A1
int sensor;       // variable que almacena el valor raw (0 a 1023)

// Variables para filtro digital 1er orden
float vok, vik, vo;

void setup()
{
   Serial.begin(230400);        //Inicio serial
   Timer1.initialize(30000);  // Inicio timer
   Timer1.attachInterrupt(ISR_RA); // Activa la interrupcion y la asocia a ISR_RA

   // Condiciones iniciales
   vok=0;
   vik=0;
}
 
void loop() 
{
 }

// Interrupción de timer
 void ISR_RA()
   {  

    sensor = analogRead(sensorPin);   // realizar la lectura

    // filtro digital pasabajas 3Hz
    vo=0.56801*vok+0.43191*vik;

   // Actualizar valores
    vok=vo;
    vik=(float)sensor;

    /*Para graficar local*/
   // Serial.print(vo); //señal filtrada
   // Serial.print(" ");
   // Serial.println(sensor); //señal sin filtrar

    /*Para envío procesamiento en PC*/
     Serial.print("$");
     Serial.println(sensor);
}
    

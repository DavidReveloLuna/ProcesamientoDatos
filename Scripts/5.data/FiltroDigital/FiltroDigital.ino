#include <TimerOne.h>
 
const int sensorPin = A1;    // seleccionar la entrada para el sensor A1
int sensor;       // variable que almacena el valor raw (0 a 1023)

// Variables para filtro digital 1er orden
float vok, vik, vo;

// Variables para medir tiempo de muestreo
unsigned long tiempo1, tmuestreo;

void setup()
{
   Serial.begin(9600);        //Inicio serial
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

    // filtro digital 3Hz
    vo=0.56801*vok+0.43191*vik;


    // filtro digital 1Hz
    // vo=0.8282*vok+0.17179*vik;

   // Actualizar valores
    vok=vo;
    vik=(float)sensor;

    Serial.print(vo);
    Serial.print(" ");
    Serial.println(sensor);

    // Envio para filtrar en PC
    // Serial.print("$");
    // Serial.println(sensor);
}
    

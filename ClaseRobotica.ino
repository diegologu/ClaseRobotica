#include "SensorDistancia.h"

SensorDistancia HCSR(13, 12, 0.0, 0);
double a;
void setup(){
  Serial.begin(9600);
}

void loop(){
  a = HCSR.getValorSensado();
}

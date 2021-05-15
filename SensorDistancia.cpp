#include "Arduino.h"
#include "SensorDistancia.h"

SensorDistancia::SensorDistancia(int pinesConexion1, int pinesConexion2,
  double valorSensado, bool ondaLanzada){
  this->pinesConexion1 = pinesConexion1;
  this->pinesConexion2 = pinesConexion2;
  this->valorSensado = valorSensado;
  this->ondaLanzada = ondaLanzada;
}

double SensorDistancia::getValorSensado(){
  return this->valorSensado;
}

void SensorDistancia::setOndaLanzada(bool lanzada){
  this->ondaLanzada = lanzada;
}

int SensorDistancia::getOndaLanzada(){
  return this->ondaLanzada;
}

void SensorDistancia::setPinesConexion(int eleccion, int pinModificar){
  if (eleccion == 1) {
    this->pinesConexion1 = pinModificar;
  } else {
    this->pinesConexion2 = pinModificar;
  }
}

int SensorDistancia::getDistancia(){
  int distancia=this->valorSensado*0.5;
  return distancia;
}

void SensorDistancia::inicializar(){
  pinMode(this->pinesConexion1,INPUT);
  pinMode(this->pinesConexion2,INPUT);
}

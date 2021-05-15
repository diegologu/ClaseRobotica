#ifndef SensorDistancia_h
#define SensorDistancia_h

#include "Arduino.h"

class SensorDistancia{
  public:
    SensorDistancia(int pinesConexion1, int pinesConexion2, double valorSensado, bool ondaLanzada);
    void setPinesConexion(int eleccion, int pinModificar);
    double getValorSensado();
    void setOndaLanzada(bool lanzada);
    int getOndaLanzada();
    int getDistancia();
    void inicializar();

  private:
    int pinesConexion1;
    int pinesConexion2;
    double valorSensado;
    bool ondaLanzada;
};
#endif

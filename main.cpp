//Francisco Rocha Juárez. A01730560
//Examen final
#include <iostream>
#include "Fraccion.cpp"
using namespace std;

int main(){

  Fraccion frac1(5,3);
  Fraccion frac2;

  frac2.setNumerador(-4);
  frac2.setDenominador(7);

  frac1.multiplica(frac2);

  return 0;
}

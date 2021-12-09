//Francisco Rocha Juárez. A01730560
//Examen final
#include <iostream>
using namespace std;
#include "Fraccion.h"

void Fraccion::setNumerador(int num){
  numerador = num;
}

void Fraccion::setDenominador(int den){
  denominador = den;
}

int Fraccion::getNumerador(void){
  return numerador;
}

int Fraccion::getDenominador(void){
  return denominador;
}

Fraccion::Fraccion(){
  numerador = 0;
  denominador = 1;
}

Fraccion::Fraccion(int n, int d){
  numerador = n;
  denominador = d;
}

std::string Fraccion::to_string(){
  return std::to_string(numerador) + "/" + std::to_string(denominador);
}

void Fraccion::multiplica(Fraccion otra){
  cout << std::to_string(numerador) + "/" + std::to_string(denominador) + "*" + std::to_string(otra.numerador) + "/" + std::to_string(otra.denominador) + "=" + std::to_string(numerador*otra.numerador) + "/" + std::to_string(denominador*otra.denominador)<< '\n';
}

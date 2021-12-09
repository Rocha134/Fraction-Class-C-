//Francisco Rocha Juárez. A01730560
//Examen final
#include <string>
class Fraccion{
private:
  int numerador;
  int denominador;

public:
  Fraccion();
  Fraccion(int n,int d);

  void setNumerador(int num);
  void setDenominador(int den);
  int getNumerador(void);
  int getDenominador(void);
  std::string to_string();
  void multiplica(Fraccion otra);
};

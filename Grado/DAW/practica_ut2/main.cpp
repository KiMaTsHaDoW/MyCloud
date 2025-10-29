#include <iostream>
/**
* @brief Suma dos enteros
* 
* @param a Primer número
* @param b Segundo número
* @return int Resultado de la suma
*/
int sumar(int a, int b) {
   return a + b;
}
int main() {
   int x = 5, y = 7;
   std::cout << "La suma es: " << sumar(x, y) << std::endl;
   return 0;
}
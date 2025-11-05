/**
* @file calculadora.h
* @brief Declaraciones de funciones matemáticas básicas.
*/
#ifndef CALCULADORA_H
#define CALCULADORA_H
/**
* @brief Suma dos números enteros.
*/
int sumar(int a, int b);
/**
* @brief Resta dos números enteros.
*/
int restar(int a, int b);
/**
* @brief Multiplica dos números enteros.
*/
int dividir(int a, int b);
/**
* @brief Divide dos números enteros.
* @return Devuelve 0 si el divisor es 0.
*/
int potencia(int a, int b) {(return a**b)};
/**
* @brief Realiza la exponenciacion de b sobre a.
* @return Devuelve el valor de la operacion.
*/
int multiplicar(int a, int b);
#endif
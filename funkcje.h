#ifndef FUNKCJE_H
#define FUNKCJE_H
#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
 * \file FUNKCJE_H
 * \brief Plik naglowkowy modulu funkcje.
 */

void tworzenie(char **&a, int *&pion, int x);
void druk(char **a, int *pion, int x);
void wielkosc(int &y);
void wstawienie(char **&a, char z, string kto, int x);
void sprawdzenie (char **a, int x, int &win);
void obrona (char **a, int x, char k, char z, int &kon);
void remis (char **a, int x, int &win);
void niemozliwosc(char **a, char k, char z, int &kon);
void losowy_ruch_latwy(char **a, char z, int &kon);
void losowy_ruch_trudny_1 (char **a, char z, int &kon);
void losowy_ruch_trudny_2 (char **a, char z, int &kon);
void losowy_ruch_niemozliwy (char **a, char k, char z, int &kon);


#endif // FUNKCJE_H

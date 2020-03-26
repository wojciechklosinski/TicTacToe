#include "komputer_trudny.h"

using namespace std;

/** \brief Rozgrywka z komputerem (poziom trudny).
*
* Funkcja umozliwia rozgrywke z komputerem na poziomie trudnym - komputer potrafi wykonac zwycieski ruch, bronic sie, wykonuje rozwniez ruchy prowadzace do zwyciestwa.
* Funkcja tworzy tablice; odsyla do poszczegolnych funkcji w odpowiedniej kolejnosci, co umozliwia rozgrywke; po zakonczeniu rozgrywki usuwa tablice.
*/

void trudny (){

    /// Zmienna rozmiar - przechowuje informacje o rozmiarze planszy
    int rozmiar = 3;

    /// Zmienna zw - przechowuje informacje o tym czy ktos (komp/uzytkownik) zwyciezyl; decyduje o zakonczeniu rozgrywki
    int zw=100;

    /// Zmienna koniec - informuje o tym czy ruch zostal wykonany
    int koniec=0;

    int*mala;
    mala = new int[rozmiar*2];

    char **tab = new char *[rozmiar*2];
    for ( int i = 0; i < rozmiar*2; ++i )
     {
     tab[i] = new char [rozmiar*2-1];}

    cout<<endl;
    tworzenie(tab,mala,rozmiar);
    druk(tab,mala,rozmiar);
    cout << endl;

    /// Zmienna kto - mowi o tym kto wykonuje ruch (kolko/krzyzyk)
    string kto;

    do{
        cout << "Kto zaczyna ty czy komputer? (ja/komp)" << endl;
        cin >> kto;
    } while (!(kto=="ja" || kto=="komp"));

    if (kto=="ja"){
        do{
            wstawienie(tab,'O',"kolko",rozmiar);
            cout << endl;
            druk(tab,mala,rozmiar);
            cout << endl;
            sprawdzenie(tab,rozmiar,zw);
            remis(tab,rozmiar,zw);
            if(zw==1){
                break;
            }
            obrona(tab,rozmiar,'X','X',koniec);
            obrona(tab,rozmiar,'O','X',koniec);
            if(koniec==0){
                losowy_ruch_trudny_1(tab,'X',koniec);
            }
            if(koniec==0){
                losowy_ruch_trudny_2(tab,'X',koniec);
            }
            if(koniec==0){
                losowy_ruch_latwy(tab,'X',koniec);
            }
            koniec=0;
            druk(tab,mala,rozmiar);
            cout << endl;
            sprawdzenie(tab,rozmiar,zw);
            remis(tab,rozmiar,zw);
        } while (zw!=1);
    }

    if (kto=="komp"){
        do{
            obrona(tab,rozmiar,'X','X',koniec);
            obrona(tab,rozmiar,'O','X',koniec);
            if(koniec==0){
                losowy_ruch_trudny_1(tab,'X',koniec);
            }
            if(koniec==0){
                losowy_ruch_trudny_2(tab,'X',koniec);
            }
            if(koniec==0){
                losowy_ruch_latwy(tab,'X',koniec);
            }
            koniec=0;
            druk(tab,mala,rozmiar);
            cout << endl;
            sprawdzenie(tab,rozmiar,zw);
            remis(tab,rozmiar,zw);
            if(zw==1){
                break;
            }
            wstawienie(tab,'O',"kolko",rozmiar);
            cout << endl;
            druk(tab,mala,rozmiar);
            cout << endl;
            sprawdzenie(tab,rozmiar,zw);
            remis(tab,rozmiar,zw);
        } while(zw!=1);
    }

    for ( int i(0); i < rozmiar*2; ++i )
    delete [] tab[i];
    delete [] tab;

    delete[]mala;
}

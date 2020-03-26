#include "funkcje.cpp"

using namespace std;

/** \brief Rozgrywka z graczem.
*
* Funkcja umozliwia rozgrywke z innym graczem na planszy o wczesniej wybranym rozmiarze.
* Tworzy tablice; odsyla do poszczegolnych funkcji w odpowiedniej kolejnosci, co umozliwia rozgrywke; po zakonczeniu rozgrywki usuwa tablice.
*/

void czlowiek(){
    /// Zmienna rozmiar - przechowuje dane o rozmiarze planszy
    int rozmiar;

    wielkosc(rozmiar);

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

    /// Zmienna zw - przechowuje informacje o tym czy ktos zwyciezyl
    int zw=100;

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
        wstawienie(tab,'X',"krzyzyk",rozmiar);
        cout << endl;
        druk(tab,mala,rozmiar);
        cout << endl;
        sprawdzenie(tab,rozmiar,zw);
        remis(tab,rozmiar,zw);
    } while (zw!=1);

    for ( int i(0); i < rozmiar*2; ++i )
    delete [] tab[i];
    delete [] tab;

    delete[]mala;
}

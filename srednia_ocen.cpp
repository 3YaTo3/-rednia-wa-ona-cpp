#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
int ile;
cout << "Obliczam srednia ocen\n" << "Ile masz ocen?" << endl;
cin >> ile;

float oceny[ile], suma = 0, waga, srednia_ocen, suma_wag = 0, srednia_wag;

if(ile > 0)
{
    for(int i = 0; i < ile; i++)
    {
        cout << endl << "Podaj wartosc oceny nr " << i+1 << endl;
        cin >> oceny[i];
        cout << endl << "Podaj wage oceny nr " << i+1 << endl;
        cin >> waga;
        suma += oceny[i] * waga;
        suma_wag += waga;
        
    }

    cout << fixed << setprecision(2);
    cout << "Suma ocen wynosi: " << suma << endl;
    srednia_ocen = suma / suma_wag;

    cout << "Srednia wazona ocen wynosi: " << srednia_ocen << endl;
    system("pause");
}
else
{
    cout << "Dla liczby ocen mniejszej niż jeden obliczanie sredniej jest niemozliwe." << endl;
    system("pause");
}
}
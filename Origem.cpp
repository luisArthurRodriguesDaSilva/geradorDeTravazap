#include <iostream>
#include <locale>
using namespace std;

int x, y, z;
string marca;

int main()
{
    setlocale(LC_ALL, "");
    cout << "  ||||||||||| GERADOR DE TRAVAZAP |||||||||||  " << endl;
    cout << "a força maxima é 4642 então n exagera" << endl<<endl;
    cout << "força:"; cin >> x; cout << endl;
    cout << "marca:"; cin >> marca;



    cout << "~*_ " << marca << "_*~" << endl << endl;

    for (z = 0; z <= x; z++) {

        y = z % 5;

        cout << "~*_ " <<y<<y+1<<y+2<<y+3<<y<<y<<y<<y+1<< "_*~ ";
    }

}
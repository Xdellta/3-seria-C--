//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 14 | Seria: 3 | Lp. 21
//==================================================================================

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    int n = 0;

    cout << "Podaj liczbê: ";
    cin >> n;

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 4 | Seria: 3 | Lp. 21
//==================================================================================

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    int n = 0;

    cout << "Podaj liczbê: ";
    cin >> n;

    if(n < 1)
    {
        cout<<"Nie mo¿na wypisaæ tego ci¹gu"<<endl;
        return 0;
    }
    else
    {
        for(int i = n;i > 0;i--)
        {
            cout<<i<<", ";
        }
    }


    return 0;
}


//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 11 | Seria: 3 | Lp. 21
//==================================================================================

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    float p = 0;
    float k = 0;

    cout << "Podaj pocz¹tek przedzia³u: ";
    cin >> p;

    cout << "Podaj koniec przedzia³u: ";
    cin >> k;

    if(k < p)
    {
        cout<<"To nie jest poprawny przedzia³"<<endl;
        return 0;
    }

    for(float i = p;i<k;i += 0.1)
    {
        cout<<i<<"\t"<<sqrt(i)<<endl;
    }

    return 0;
}

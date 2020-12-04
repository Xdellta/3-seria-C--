//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 6 | Seria: 3 | Lp. 21
//==================================================================================

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    int n = 0;
    int s = 0;

    cout << "Ile bêdzie liczb? ";
    cin >> n;

    if(n < 1)
    {
        cout<<"Nie ma liczb"<<endl;
        return 0;
    }

    for(int i = 0;i<n;i++)
    {
        int t = 0;
        cout<<"Podaj liczbê nr. "<<i+1<<": ";
        cin >>t;

        if(t < 0)
        {
            s++;
        }
    }

    if(s == 0)
    {
        cout<<"\n\t Nie by³o liczb ujemnych"<<endl;
        return 0;
    }

    cout<<"\n\t Liczb ujemnych by³o: "<<s<<endl;


    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
string s, s2, giga, podobna, podobna2, mini;
int najwieksza=0, najmniejsza=210, i=0, a=0, linia, liniam;
fstream liczby;
void najw(string s)
{
    liczby.open("liczby.txt", ios::in);
    while (liczby.good())
    {
        liczby>>s;
        i++;
        int dl=s.size();
        if(dl>najwieksza)
        {
            najwieksza=dl;
            giga=s;
        }
        else if(dl==najwieksza)
        {
            podobna=s;
            if(giga<podobna)
            {
                giga=podobna;
                linia=i;
            }
        }
    }
    liczby.close();
    cout<<"Linia z najwieksza liczba: "<<linia<<endl;
}
void najm(string s2)
{
    liczby.open("liczby.txt", ios::in);
    while (liczby.good())
    {
        liczby>>s2;
        a++;
        int dl=s2.size();
        if(dl<najmniejsza)
        {
            najmniejsza=dl;
            mini=s2;
        }
        else if(dl==najmniejsza)
        {
            podobna2=s2;
            if(mini>podobna2)
            {
                mini=podobna2;
                liniam=a;
            }
        }
    }
    liczby.close();
    cout<<"Linia z najmniejsza liczba: "<<liniam;
}

int main()
{
    najw(s);
    najm(s2);
    return 0;
}

#include <iostream>

using namespace std;
int inmultire_a_la_russe(int a, int b)
{
    int r=0;
    while(a!=0)
    {
        if(a%2==1)
        {
            r=r+b;
        }
        a=a/2;
        b=b*2;
    }
    return r;
}
int main() {
    int a,b;
    cout<<"Dati cele doua numere: ";
    cin>>a>>b;
    cout<<"Produsul celor doua numere folosing inmultirea a la russe este: "<<inmultire_a_la_russe(a,b);
    return 0;
}

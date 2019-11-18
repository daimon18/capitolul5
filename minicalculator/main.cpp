#include <iostream>
#include "operatii.h"
using namespace std;
 enum Operatii {Adunare=1, Scadere, Inmultire, Impartire, Modulo};
 void meniu()
    {
        cout<<"Introdu:\n 1 pentru adunare\n 2 pentru scadere\n 3 pentru inmultire\n 4 pentru impartire\n 5 pentru modulo"<<endl;
    }
int main()
{
 meniu();
    short i;
    double j,k;
 cin>> i;
    while ((i<1) || (i>5)) {
        cout<<"introdu din nou";
        cin>>i;
    }
    cout<<"introdu primul numar:"; cin>>j;
    cout<<"introdu al doilea numar:"; cin>>k;

    switch(i){
    case Adunare: cout << j << " + " << k << " = " << adunare(j, k); break;
    case Scadere: cout << j << " - " << k << " = " << scadere(j, k); break;
    case Inmultire: cout << j << " * " << k << " = " << inmultire(j, k); break;
    case Impartire:
        while(j == 0) {
            cout<<"Impartirea la 0 nu e posibila, introduceti un nou impartitor: ";
            cin>>j;}
        cout << j << " / " << k << " = " << impartire(j, k); break;
    case Modulo:
        while(j == 0) {
            cout<<"Impartirea la 0 nu e posibila, introduceti un nou impartitor: ";
            cin>>j;}
        cout << j << " % " << k << " = " << modulo(j, k); break;
    }
    cout<<endl;
    return 0;
}

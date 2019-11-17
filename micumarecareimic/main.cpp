#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char caractere[20];
    cout << "Introdu sirul de caratere: \n";
    cin >> caractere;
    cout << "[ " << caractere << " ]" << endl;

    for(int i = 0; i < 20; ++i)
    {
        if(islower(caractere[i]))
            caractere[i] = toupper(caractere[i]);
        else if (isupper(caractere[i]))
            caractere[i]  = tolower(caractere[i]);
    }
      cout << "[ " << caractere << " ]" << endl;

    return 0;
}

#include <iostream> // llibreria per fer el int
#include <stdio.h> // llibreria del rand
#include <cstdlib> // llibreria per fer bucles de swtich 
#include <ctime> // llibreria del time

using namespace std; // norma per aplicar el el endl i el 

int main()
{
    int numero1, numero2;
    int resultat;
    int opcio;

    for (int i = 0; i < 5; i++)
    {
        numero1 = rand() % 99 + 1;
        numero2 = rand() % 99 + 1;
        resultat = numero1 + numero2;

        cout << "Quant es " << numero1 << " + " << numero2 << "?" << endl;

        cout << "1. " << resultat << endl;
        cout << "2. " << resultat + 2 << endl;
        cout << "3. " << resultat - 2 << endl;

        cout << "Escull una opcio: ";
        cin >> opcio;

        switch (opcio)
        {
        case 1:
            cout << "Correcte!" << endl;
            break;

        case 2:
            cout << "Incorrecte!" << endl;
            break;

        case 3:
            cout << "Incorrecte!" << endl;
            break;

        default:
            cout << "Opcio incorrecta!" << endl;
        }
    }
    return 0;
}

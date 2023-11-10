#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand (time(NULL));
    int wybor = 1;
    do
    {
        
        cout << "1 - papier\n2 - kamien\n3 - nozyczki\ninna liczba - koniec\n"; cin >> wybor;
        int bot = rand() % 3 + 1;
        if(wybor == bot) cout << "Wybralem to samo! Remis!\n";
        else if(wybor == 1 && bot == 2) cout << "Wybrales papier a ja kamien! Wygrales!\n";
        else if(wybor == 1 && bot == 3) cout << "Wybrales papier a ja nozyczki! Wygralem!\n";
        else if(wybor == 2 && bot == 1) cout << "Wybrales kamien a ja papier! Wygralem!\n";
        else if(wybor == 2 && bot == 3) cout << "Wybrales kamien a ja nozyczki! Wygrales!\n";
        else if(wybor == 3 && bot == 1) cout << "Wybrales nozyczki a ja papier! Wygrales!\n";
        else if(wybor == 3 && bot == 2) cout << "Wybrales nozyczki a ja kamien! Wygralem!\n";
        else 
        {
            cout << "Koniec";
            wybor = 4;
        }
    }while(wybor != 4);
        
        
    return 0;
}

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
        cout << "1 - losuj\n2 - koniec \n"; cin >> wybor;
        system("clear");
        if(wybor == 1)
        {
            int random = rand() % 6 + 1;
            //cout << random;
            switch(random)
            {
                case 1: 
                cout << "################\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#      ##      #\n";
                cout << "#      ##      #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "################\n";
                break;
                case 2:
                cout << "################\n";
                cout << "#              #\n";
                cout << "#  ##          #\n";
                cout << "#  ##          #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#          ##  #\n";
                cout << "#          ##  #\n";
                cout << "#              #\n";
                cout << "################\n";
                break;
                case 3:
                cout << "################\n";
                cout << "#              #\n";
                cout << "#  ##          #\n";
                cout << "#  ##          #\n";
                cout << "#              #\n";
                cout << "#      ##      #\n";
                cout << "#      ##      #\n";
                cout << "#              #\n";
                cout << "#          ##  #\n";
                cout << "#          ##  #\n";
                cout << "#              #\n";
                cout << "################\n";
                break;
                case 4:
                cout << "################\n";
                cout << "#              #\n";
                cout << "#  ##      ##  #\n";
                cout << "#  ##      ##  #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#              #\n";
                cout << "#  ##      ##  #\n";
                cout << "#  ##      ##  #\n";
                cout << "#              #\n";
                cout << "################\n";
                break;
                case 5:
                cout << "################\n";
                cout << "#              #\n";
                cout << "#  ##      ##  #\n";
                cout << "#  ##      ##  #\n";
                cout << "#              #\n";
                cout << "#      ##      #\n";
                cout << "#      ##      #\n";
                cout << "#              #\n";
                cout << "#  ##      ##  #\n";
                cout << "#  ##      ##  #\n";
                cout << "#              #\n";
                cout << "################\n";
                break;
                default:
                cout << "################\n";
                cout << "#              #\n";
                cout << "#  ##      ##  #\n";
                cout << "#  ##      ##  #\n";
                cout << "#              #\n";
                cout << "#  ##      ##  #\n";
                cout << "#  ##      ##  #\n";
                cout << "#              #\n";
                cout << "#  ##      ##  #\n";
                cout << "#  ##      ##  #\n";
                cout << "#              #\n";
                cout << "################\n";
                break;
            }
        } else if(wybor == 2) wybor = 2;
        else cout << "Zly wybor!!!\n";
    }while(wybor != 2);

    return 0;
}

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string zadania[100];
    int wybor = 0, zad;
    
    do
    {
        
        cout << "Co chcesz zrobic?\n1 - dodaj zadanie\n2 - usun zadanie\n3 - wyswietl wszystkie zadania\ninny - koniec: "; cin >> wybor;
        switch(wybor)
        {
            case 1:
            do
            {
                system("clear");
                cout << "W ktore miejsce chcesz dodac zadanie?\n1 - wybrac\n2 - na najblizsze mozwliwe: "; cin >> zad;
                if(zad == 1)
                {
                    string nazwa;
                    int nr;
                        
                    cout << "Podaj numer: "; cin >> nr;
                    if(nr > 99)
                    {
                        system("clear");
                        cout << "Nie ma tyle miejsca na zadania!\n";
                        zad = 0;
                        break;
                    }
                    cin.ignore();
                    cout << "Podaj zadanie: "; 
                    getline(cin, nazwa);
                    if(zadania[nr-1] == "")
                    {
                        system("clear");
                        cout << "Zadanie dodane!\n";
                        zadania[nr-1] = nazwa;
                        zad = 0;
                    }else
                    {
                        system("clear");
                        cout << "Miejsce zajete, co chcesz zrobic?\n1 - podmienic zadanie \ninne - nic: ";
                        int a;
                        cin >> a;
                        if(a == 1)
                        {
                            system("clear");
                            cout << "Zadanie podmienione!\n";
                            zadania[nr-1] = nazwa;
                            zad = 0;
                        }else 
                        {
                            system("clear");
                            zad = 0;
                        }
                    }
                    
                    
                }else if(zad == 2)
                {
                    string nazwa;
                    cin.ignore();
                    cout << "Podaj zadanie: "; getline(cin, nazwa);
                    for(int i = 0; i < 100; i++)
                    {
                        if(zadania[i] == "")
                        {
                            system("clear");
                            cout << "Zadanie dodane!\n";
                            zadania[i] = nazwa;
                            zad = 0;
                            i = 127653;
                        }
                    }
                }else zad = 0;
            }while(zad != 0);
            break;
            case 2:
            int nr;
            cout << "Ktore zadanie chcesz usunac? ";cin >> nr;
            if(nr > 99)
            {
                system("clear");
                cout << "Nie ma tyle miejsca na zadania!\n";
                zad = 0;
                break;
            }
            if(zadania[nr] != "")
            {
                system("clear");
                cout << "Zadanie usuniete!\n";
                zadania[nr] = "";
            }else
            {
                system("clear");
                cout << "Puste miejsce, wybierz inne!\n";
            }
            
            break;
            case 3:
            system("clear");
            cout << "Lista zadan: \n";
            for(int i = 0; i < 100; i++)
            {
                if(zadania[i] != "") cout << i + 1 << ". " << zadania[i] << endl;
            }
            cout << endl;
            break;
            default:
            wybor = 0;
        }
    }while(wybor != 0);
    

    return 0;
}


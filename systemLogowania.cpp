#include <iostream>
#include <string>
using namespace std; 


int main()
{
    int wybor = 1;
    bool dziala = false;
    string login, password, passcheck;
    string database[1000][2] = {{"kk", "ll"}};
    while(wybor == 1 || wybor == 2)
    {
        cout << "Co chcesz zrobic: \n 1 - logowanie \n 2 - rejestracja \n wybor: "; cin >> wybor;
        switch(wybor)
        {
        case 1:
            cout << "LOGOWANIE!!!!\n";
            cout << "Podaj login: "; cin >> login;
            cout << "Podaj haslo: "; cin >> password;
            for(int i = 0; i < 1000; i++)
            {
                if(login == database[i][0])
                {
                    if(password == database[i][1]) cout << "Zalogowano\n";
                    else cout << "Nie zalogowano\n";
                    i = 1001;
                }else
                {
                    if(i == 1001)cout << "Nie ma takiego uzytkownika\n";

                }
                break;
            }


        case 2:
            cout << "REJESTACJA!!!\n";
            int l = 1;
            while(l == 1)
            {
                cout << "Podaj login to rejestracji: "; cin >> login;
                cout << "Podaj haslo to rejestracji: "; cin >> password;
                cout << "Podaj ponownie haslo to rejestracji: "; cin >> passcheck;
                if(login != "" && password == passcheck)
                {
                    for(int i = 0; i < 1000; i++)
                    {
                        if(database [i][0] == "")
                        {
                            database[i][0] = login;
                            database[i][1] = password;
                            i =1000;
                            l = 2;
                            cout << "Zarejetrowano\n";
                            //for(int j = 0; j < 3; j++) cout << j << ", " << database[j][0] << ", " << database[j][1] << "\n";
                        }
                    }
                }else
                {
                    cout << "Hasla nie pasuja do siebie! \n";
                    l = 1;
                }
            }

        }
    }
    return 0;
}

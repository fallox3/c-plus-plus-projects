#include <iostream>
#include <exception>
#include <string>
#include <cstdlib>
using namespace std;

class Santa
{
    int doll, car, candy, brick, game, cd;

public:
    Santa()
    {
        doll = 0;
        car = 0;
        brick = 0;
        game = 0;
        cd = 0;
        candy = 0;
    }
    Santa(int d, int cr, int cn, int b, int g, int c)
    {
        doll = d;
        car = cr;
        candy = cn;
        brick = b;
        game = g;
        cd = c;
    }
    void returnSanta()
    {
        cout << "ZAWARTOSC TWOJEGO PREZENTU\n";
        cout << "lalki: " << doll << "szt.\nsamochody: " << car << "szt.\ncukierki: " << candy << "szt.\nklocki: " << brick << "szt.\ngry: " << game << "szt.\nplyty cd: " << cd << "szt.\n";
    }
    int returnDoll()
    {
        return doll;
    }
    void changeDoll(int a)
    {
        doll += a;
    }
    int returnCar()
    {
        return car;
    }
    void changeCar(int a)
    {
        car += a;
    }
    int returnBrick()
    {
        return brick;
    }
    void changeBrick(int a)
    {
        brick += a;
    }
    int returnCandy()
    {
        return candy;
    }
    void changeCandy(int a)
    {
        candy += a;
    }
    int returnGame()
    {
        return game;
    }
    void changeGame(int a)
    {
        game += a;
    }
    int returnCd()
    {
        return cd;
    }
    void changeCd(int a)
    {
        cd += a;
    }


~Santa()
{
    cout << "\nDostajesz rozge!\n";
}
};

bool isNum(string stringg) {
    for(int i = 0; i < stringg.length(); ++i) {
        if(!isdigit(stringg[i]))return false;
    }
    return true;
}
bool isNumMinus(string stringg) {
    if(stringg[0] == '-')
    {
        for(int i = 1; i < stringg.length(); ++i) {
            if(!isdigit(stringg[i]))return false;
        }return true;
    }else
    {
        for(int i = 0; i < stringg.length(); ++i) {
            if(!isdigit(stringg[i]))return false;
        }
        return true;
    }
}


int main()
{
    bool app = true;
    int doll = -1, car = -1, candy = -1, brick = -1, game = -1, cd = -1;
    cout << "Wprowadz zawartosc prezentu\n";

    //deklaracja argumentow klasy
    while(doll < 0)
    {
        string sDoll;
        cout << "Podaj liczbe lalek: "; cin >> sDoll;
        if(isNum(sDoll)) doll = atoi(sDoll.c_str()); //konwersja stringa na const char* przed użyciem atoi.
        else cout << "Nie poprawna wartosc\n";
    }

    while(car < 0)
    {
        string sCar;
        cout << "Podaj liczbe samochodow: "; cin >> sCar;
        if(isNum(sCar)) car = atoi(sCar.c_str());
        else cout << "Nie poprawna wartosc\n";
    }

    while(candy < 0)
    {
        string sCandy;
        cout << "Podaj liczbe cukierkow: "; cin >> sCandy;
        if(isNum(sCandy)) candy = atoi(sCandy.c_str()); //konwersja stringa na const char* przed użyciem atoi.
        else cout << "Nie poprawna wartosc\n";
    }

    while(brick < 0)
    {
        string sBrick;
        cout << "Podaj liczbe klockow: "; cin >> sBrick;
        if(isNum(sBrick))
        {
            brick = atoi(sBrick.c_str()); //konwersja stringa na const char* przed użyciem atoi.
        }else cout << "Nie poprawna wartosc\n";
    }

    while(game < 0)
    {
        string sGame;
        cout << "Podaj liczbe gier planszowych: "; cin >> sGame;
        if(isNum(sGame)) game = atoi(sGame.c_str()); //konwersja stringa na const char* przed użyciem atoi.
        else cout << "Nie poprawna wartosc\n";
    }

    while(cd < 0)
    {
        string sCd;
        cout << "Podaj liczbe plyt CD: "; cin >> sCd;
        if(isNum(sCd)) cd = atoi(sCd.c_str()); //konwersja stringa na const char* przed użyciem atoi.
        else cout << "Nie poprawna wartosc\n";
    }

    Santa santa(doll, car, candy, brick, game, cd);//deklaracja klasy

    system("cls");
    //cout << "TWORZENIE PREZENTU\n";
    do
    {
        int choice;
        string sChoice;
        do
        {
            cout << "Co chcesz zrobic:\n 1 - pokaz zawartosc prezentu\n 2 - zmien liczbe lalek\n 3 - zmien liczbe samochodow\n 4 - zmien liczbe kolckow\n 5 - zmien liczbe cukierkow\n 6 - zmien liczbe gier planszowych\n 7 - zmien liczbe plyt CD\n 8 - konczy program\ntwoj wybor: ";
            cin >> sChoice;
            try
            {
                if(isNum(sChoice)) throw 1;
                else throw true;
            }
            catch(int exception)
            {
                choice = atoi(sChoice.c_str());
                if(choice == 8)  app = false;
                switch(choice)
                {
                    case 1:
                    {
                        bool returnElements = true;
                        int showElements;
                        string sShowElements;

                        do
                        {
                            system("cls");
                            cout << "Co chcesz zrobic: \n 1 - wyswietl zawartosc calego prezentu\n 2 - wyswietl liczbe lalek\n 3 - wyswietl liczbe samochodow\n 4 - wyswietl liczbe cukierkow\n 5 - wyswietl liczbe klockow\n 6 - wyswietl liczbe gier planszowych\n 7 - wyswietl liczbe plyt CD\ntwoj wybor: ";
                            cin >> sShowElements;
                            try
                            {
                                if(isNum(sShowElements)) throw 1;
                                else throw true;
                            }
                            catch(int exception)
                            {
                                showElements = atoi(sShowElements.c_str());
                                switch(showElements)
                                {
                                    case 1:
                                    {
                                        system("cls");
                                        santa.returnSanta();
                                        returnElements = false;
                                    }
                                    break;
                                    case 2:
                                    {
                                        system("cls");
                                        cout << "lalki: " << santa.returnDoll() << "szt.\n";
                                        returnElements = false;
                                    }
                                    break;
                                    case 3:
                                    {
                                        system("cls");
                                        cout << "samochodzy: " << santa.returnCar() << "szt.\n";
                                        returnElements = false;
                                    }
                                    break;
                                    case 4:
                                    {
                                        system("cls");
                                        cout << "cukierki: " << santa.returnCandy() << "szt.\n";
                                        returnElements = false;
                                    }
                                    break;
                                    case 5:
                                    {
                                        system("cls");
                                        cout << "klocki: " << santa.returnBrick() << "szt.\n";
                                        returnElements = false;
                                    }
                                    break;
                                    case 6:
                                    {
                                        system("cls");
                                        cout << "gry planszowe: " << santa.returnGame() << "szt.\n";
                                        returnElements = false;
                                    }
                                    break;
                                    case 7:
                                    {
                                        system("cls");
                                        cout << "plyty CD: " << santa.returnCd() << "szt.\n";
                                        returnElements = false;
                                    }
                                    break;
                                    default: cout << "Nie poprawna wartosc\n";
                                }



                            }

                            catch(bool exception)
                            {
                                cout << "Nie poprawna wartosc\n";
                            }

                        }while(returnElements);



                    }
                    break;
                    case 2:
                    {
                        system("cls");
                        doll = -1;
                        int x =  santa.returnDoll();
                        bool test = true;
                        while(test)
                        {
                            string sDoll;
                            cout << "Podaj liczbe, o ktora chcesz zmienic liczbe lalek: "; cin >> sDoll;
                            if(isNumMinus(sDoll))
                            {
                                doll = atoi(sDoll.c_str());
                                int a = doll + x;
                                if(a >= 0)
                                {
                                    santa.changeDoll(doll);
                                    test = false;
                                }else cout << "Nie poprawna wartosc\n";

                            }else cout << "Nie poprawna wartosc \n";
                        }
                    }
                    break;
                    case 3:
                    {
                        system("cls");
                        car = -1;
                        int x =  santa.returnCar();
                        bool test = true;
                        while(test)
                        {
                            string sCar;
                            cout << "Podaj liczbe, o ktora chcesz zmienic liczbe samochodow: "; cin >> sCar;
                            if(isNumMinus(sCar))
                            {
                                car = atoi(sCar.c_str());
                                int a = car + x;
                                if(a >= 0)
                                {
                                    santa.changeCar(car);
                                    test = false;
                                }else cout << "Nie poprawna wartosc\n";

                            }else cout << "Nie poprawna wartosc \n";
                        }
                    }
                    break;
                    case 4:
                    {
                        system("cls");
                        candy = -1;
                        int x =  santa.returnCandy();
                        bool test = true;
                        while(test)
                        {
                            string sCandy;
                            cout << "Podaj liczbe, o ktora chcesz zmienic liczbe cukierkow: "; cin >> sCandy;
                            if(isNumMinus(sCandy))
                            {
                                candy = atoi(sCandy.c_str());
                                int a = candy + x;
                                if(a >= 0)
                                {
                                    santa.changeCandy(candy);
                                    test = false;
                                }else cout << "Nie poprawna wartosc\n";

                            }else cout << "Nie poprawna wartosc \n";
                        }
                    }
                    break;
                    case 5:
                    {
                        system("cls");
                        brick = -1;
                        int x =  santa.returnBrick();
                        bool test = true;
                        while(test)
                        {
                            string sBrick;
                            cout << "Podaj liczbe, o ktora chcesz zmienic liczbe klockow: "; cin >> sBrick;
                            if(isNumMinus(sBrick))
                            {
                                brick = atoi(sBrick.c_str());
                                int a = brick + x;
                                if(a >= 0)
                                {
                                    santa.changeBrick(brick);
                                    test = false;
                                }else cout << "Nie poprawna wartosc\n";

                            }else cout << "Nie poprawna wartosc \n";
                        }
                    }
                    break;
                    case 6:
                    {
                        system("cls");
                        game = -1;
                        int x =  santa.returnGame();
                        bool test = true;
                        while(test)
                        {
                            string sGame;
                            cout << "Podaj liczbe, o ktora chcesz zmienic liczbe gier planszowych: "; cin >> sGame;
                            if(isNumMinus(sGame))
                            {
                                game = atoi(sGame.c_str());
                                int a = game + x;
                                if(a >= 0)
                                {
                                    santa.changeGame(game);
                                    test = false;
                                }else cout << "Nie poprawna wartosc\n";

                            }else cout << "Nie poprawna wartosc \n";
                        }
                    }
                    break;
                    case 7:
                    {
                        system("cls");
                        cd = -1;
                        int x =  santa.returnCd();
                        bool test = true;
                        while(test)
                        {
                            string sCd;
                            cout << "Podaj liczbe, o ktora chcesz zmienic liczbe plyt CD: "; cin >> sCd;
                            if(isNumMinus(sCd))
                            {
                                cd = atoi(sCd.c_str());
                                int a = cd + x;
                                if(a >= 0)
                                {
                                    santa.changeCd(cd);
                                    test = false;
                                }else cout << "Nie poprawna wartosc\n";

                            }else cout << "Nie poprawna wartosc \n";
                        }
                    }
                    break;


                }
            }
            catch(bool exception)
            {
               cout << "Nie poprawna wartosc\n";
            }

        }while(choice < 1 && choice > 8);
    }while(app);

    return 0;
}

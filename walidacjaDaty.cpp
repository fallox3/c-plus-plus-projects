#include <iostream>
using namespace std;

class DATA
{
    int day, month, year;
public:
     DATA()
    {
        day = 00;
        month = 00;
        year = 0;
    }
     DATA(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
     wypiszDate()
    {
        cout << (day < 10 ? "0" : "") << day << "." << (month < 10 ? "0" : "")<< month << "." << year << endl;

    }
     podajDate()
    {
        int d, m, y, a;
        do
        {
            //cout << "Podaj dzien: "; cin >> d;
            //cout << "Podaj miesiac: "; cin >> m;
            cout << "Podaj rok: "; cin >> y;
            a = 0;
            if(y >= 0)
            {
                if(y % 4 == 0 && (y % 400 || y % 100))
                {
                    a++;
                    cout << "Podaj miesiac: "; cin >> m;
                    if(m <= 12 && m > 0)
                    {
                        a++;
                        switch(m)
                        {
                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12:
                            cout << "Podaj dzien: "; cin >> d;
                            if(d > 0 && d <= 31)
                            {
                                a++;
                                day = d;
                                month = m;
                                year = y;
                            }else cout << "Zly dzien! Podaj date od nowa\n";
                        break;
                        case 2:
                            cout << "Podaj dzien: "; cin >> d;
                            if(d > 0 && d <= 28)
                            {
                                a++;
                                day = d;
                                month = m;
                                year = y;
                            }else cout << "Zly dzien! Podaj date od nowa\n";
                        break;
                        default:
                            cout << "Podaj dzien: "; cin >> d;
                            if(d > 0 && d <= 30)
                            {
                                a++;
                                day = d;
                                month = m;
                                year = y;
                            }else cout << "Zly dzien! Podaj date od nowa\n";


                        }
                    }else cout << "Zly miesiac! Podaj date od nowa\n";
                }else
                {
                    a++;cout << a;
                    cout << "Podaj miesiac: "; cin >> m;
                    if(m <= 12 && m > 0)
                    {
                        a++;
                        switch(m)
                        {
                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12:
                            cout << "Podaj dzien: "; cin >> d;
                            if(d > 0 && d <= 31)
                            {
                                a++;
                                day = d;
                                month = m;
                                year = y;
                            }else cout << "Zly dzien! Podaj date od nowa\n";
                        break;
                        case 2:
                            cout << "Podaj dzien: "; cin >> d;
                            if(d > 0 && d <= 29)
                            {
                                a++;
                                day = d;
                                month = m;
                                year = y;
                            }else cout << "Zly dzien! Podaj date od nowa\n";
                        break;
                        default:
                            cout << "Podaj dzien: "; cin >> d;
                            if(d > 0 && d <= 30)
                            {
                                a++;
                                day = d;
                                month = m;
                                year = y;
                            }else cout << "Zly dzien! Podaj date od nowa\n";


                        }
                    }else cout << "Zly miesiac! Podaj date od nowa\n";
                }
            }else
            {
                cout << "Zly rok!\n";
            }

        }while(a != 3);
    }
    ~DATA()
    {
        cout << "KONIEC SWIATA \n";
    }
};


int main()
{
    DATA d1(1, 1, 1);
    d1.podajDate();
    d1.wypiszDate();

    return 0;
}


#include<bits/stdc++.h>
#include<windows.h>
using  namespace  std;

int main()
{
    int hour, minute, second;
    cout << "\n\n\n\n\n";
    cout << "\t\t\t\t\t       SET TIME IN YOUR CLOCK"            << '\n';
    cout << "\t\t\t\t\t----------------- o --------------------" << '\n';
    cout << "\t\t\t\t\t Enter hour     : ";  cin >> hour;
    cout << "\t\t\t\t\t Enter minute   : ";  cin >> minute;
    cout << "\t\t\t\t\t Enter second   : ";  cin >> second;

    system("cls");
    while(true)
    {
        second++;
        if(second > 59)
        {
            second = 0;
            minute++;
        }
        if(minute > 59)
        {
            hour++;
            minute = 0;
        }
        if(hour > 23)
        {
            hour = 0;
        }
        cout <<  "\n\n\n\n";
        cout << "\t\t\t\t\t***********************************************" << endl;
        cout << "\t\t\t\t\t*                                             *" << endl;
        cout << "\t\t\t\t\t*            CLOCK : ";
        printf("%02d : %02d : %02d", hour, minute, second);
        cout << "             *" << endl;
        cout << "\t\t\t\t\t*                                             *" << endl;
        cout << "\t\t\t\t\t***********************************************";
        Sleep(1000);
        system("cls");
    }
    return 0;
}


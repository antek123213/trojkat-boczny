#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD kursor;
    kursor.X = x-1;
    kursor.Y = y-1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),kursor);
}

main()
{
    for(int y=0;y<11;y++)
    {
        if(y<=5)
        {
            for(int x=0;x<=y;x++)
            {
                gotoxy(45-x,3+y);
                cout<<'*';
            }
        }

        else
        {
            for(int x=0;x<=10-y;x++)
                {
                    gotoxy(45-x,3+y);
                    cout<<'*';
                }
        }


    }
}

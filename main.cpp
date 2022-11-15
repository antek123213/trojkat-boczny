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

int i=0;
main()
{
    for(int y=5;y<16;y++)
    {

        if(y<=10)
        {

            for(int g=1;g<=2*y-9;g++)
            {

                gotoxy(35+y-g,y);
                cout <<'x';
                Sleep(10);



            }

        }
    }
/*        else
        {

            for(int g=1;g<=9-i;g++)
            {

                gotoxy(55-y-g,y); //44.44,43...35
                cout <<'x';
                Sleep(10);

            }
            i=i+2;
        }
    }*/






}

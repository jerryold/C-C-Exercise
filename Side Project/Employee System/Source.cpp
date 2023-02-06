
#include <iostream>
#include <string>
#include <Windows.h>
#include "admin.h"



using namespace std;
void passwordvertification(void);
void mainMenu(void);


void passwordvertification()
{
    
    system("cls");
    string password;
    //cout << "\n\n\n\n\n\t\t\t\t\t";
    cout << "\n\t\t\t\t\t\t\t(For testing purpose,please enter 'test')";
    cout << "\n\n\n\t\t\t\t\tEnter Password: ";
    
    do
    {
        cin >> password;

        if (password != "test")
        {
            system("cls");
            cout << "\n\n\n\n\n\t\t"
                << "wrong password!, try again or type 'quit' / 'exit' to Quit The program.";
            cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }

        if (password == "Quit" || password == "quit" || password == "exit" || password == "Exit" || password == "QUIT" || password == "EXIT")
        {
            system("cls");
            cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";

            for (int i = 0; i < 4; i++)
            {

                Sleep(1000); // 1 second pause;
                cout << ".";
            }

            exit(0);
        }

    }

    while (password != "test");
    mainMenu();

}
int main() {

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    system("color 3D");
    passwordvertification();
    return 0;

}
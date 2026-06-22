#include <iostream>
#include <windows.h>
using namespace std;

void titleColor(int color);      
void welcomeScreen();

void welcomeScreen()
{
    system("cls");

    cout << "==========================================================\n";
    titleColor(12);
	cout << "  _   _ ______ _______ ______ _      _____ __   __\n";
	cout << " | \\ | |  ____|__   __|  ____| |    |_   _|\\ \\ / /\n";
	cout << " |  \\| | |__     | |  | |__  | |      | |   \\ V / \n";
	cout << " | . ` |  __|    | |  |  __| | |      | |    > <  \n";
	cout << " | |\\  | |____   | |  | |    | |____ _| |_  / . \\ \n";
	cout << " |_| \\_|______|  |_|  |_|    |______|_____||_/ \\_\\\n";
	cout << "\n";
	titleColor(7);
	cout << "                  BY REED HASTINGS\n";
	cout << "===========================================================\n\n";

    cout << " Welcome To Netflix!\n\n";

    cout << " Explore the popular movies.\n";
	cout << " Enjoy browsing!\n\n";

    cout << "--------------------------------------------------------------\n\n";

    cout << " Press ENTER to continue...";
    cin.get();
}

void titleColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void menu()
{
    int choice;

    do
    {
        system("cls");

        cout << "========================================================\n";
        cout << "           NETFLIX POPULAR MOVIE EXPLORER\n";
        cout << "========================================================\n\n";

        cout << "  1. Trending Now\n";
		cout << "  2. Browse Movies by Genre\n";
        cout << "  3. Search Movie\n";
        cout << "  4. Exit\n\n";

        cout << "==============================================================\n";
        cout << " Enter your choice (1-4): ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nTrending Now\n";
                break;

            case 2:
                cout << "\nBrowse Movies by Genre\n";
                break;

            case 3:
                cout << "\nSearch Movie\n";
                break;

            case 4:
                cout << "\nThank you for using Netflix Popular Movie Explorer!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

        if(choice != 4)
        {
            cout << "\n\nPress ENTER to return to Main Menu...";
            cin.ignore();
            cin.get();
        }

    } while(choice != 4);
}

int main()
{
    welcomeScreen();
    menu();

    return 0;
}
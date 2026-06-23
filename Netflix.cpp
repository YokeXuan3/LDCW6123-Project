#include <iostream>
#include <windows.h>
using namespace std;

void titleColor(int color);      
void welcomeScreen();
void trendingNow();
void showMovieDetail(int category, int movie);

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
	cout << "                BY REED HASTINGS\n";
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
        cout << "           NETFLIX MOVIE EXPLORER\n";
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
                trendingNow();
                break;

            case 2:
                cout << "\nBrowse Movies by Genre\n";
                break;

            case 3:
                cout << "\nSearch Movie\n";
                break;

            case 4:
                cout << "\nThank you for using Netflix Movie Explorer!\n";
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

void showMovieDetail(int category, int movie)
{
    if (category == 1) //Action
    {
        if (movie == 1)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Sky Fall 007 2";
            cout << "\nGenre  : Action & Adventure Movies";
            cout << "\nRating : 7.8/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Spider-Man Homecoming";
            cout << "\nGenre  : Action & Adventure Movies";
            cout << "\nRating : 7.4/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : The Lord of The Rings: The Return of The King";
            cout << "\nGenre  : Action & Adventure Movies";
            cout << "\nRating : 9/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : The Lord of The Rings: The Fellowship of The Ring";
            cout << "\nGenre  : Action & Adventure Movies";
            cout << "\nRating : 8.9/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 5)
		{
		    return;
		}
        else
        {
        	cout << "\nInvalid movie selection!\n";
		}
    }
    else if (category == 2) //Drama
    {
        if (movie == 1)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Don't Look up";
            cout << "\nGenre  : Drama Movies";
			cout << "\nRating : 7.1/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Remarkably Bright Creatures";
			cout << "\nGenre  : Drama Movies";
			cout << "\nRating : 7.7/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Love Untangled";
			cout << "\nGenre  : Drama Movies";
			cout << "\nRating : 7.1/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Even If This Love Disappears Tonight";
			cout << "\nGenre  : Drama Movies";
			cout << "\nRating : 7.5/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 5)
		{
		    return;
		}
		else
		{
        	cout << "\nInvalid movie selection!\n";
		}
    }
    else if (category == 3) //Comedy
    {
        if (movie == 1)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Knives Out";
			cout << "\nGenre  : Comedy Movies";
			cout << "\nRating : 7.9/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Class Onion: A Knives Out Mystery";
			cout << "\nGenre  : Comedy Movies";
			cout << "\nRating : 7.1/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Pitch Perfect";
			cout << "\nGenre  : Comedy Movies";
			cout << "\nRating : 7.1/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
			cout << "\nTitle  : Voicemails for Isabelle";
			cout << "\nGenre  : Comedy Movies";
			cout << "\nRating : 7.5/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 5)
		{
		    return;
		}
		else
		{
        	cout << "\nInvalid movie selection!\n";
		}
    }
    else if (category == 4) //Anime
    {
        if (movie == 1)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Howl's Moving Castle";
			cout << "\nGenre  : Action Anime";
			cout << "\nRating : 8.2/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Spirited Away";
			cout << "\nGenre  : Fantasy Anime";
			cout << "\nRating : 8.6/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Haikyu!!: The Dumpster Battle";
			cout << "\nGenre  : Drama Anime";
			cout << "\nRating : 7.8/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : The First Slam Dunk";
			cout << "\nGenre  : Drama Anime";
			cout << "\nRating : 8/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 5)
		{
		    return;
		}
		else
		{
        	cout << "\nInvalid movie selection!\n";
		}
    }
}

void trendingNow()
{
    int category, movie;

    cout << "\n============= TRENDING NOW =============\n";
    cout << "1. Action & Adventure Movies\n";
    cout << "2. Drama Movies\n";
    cout << "3. Comedy Movies\n";
    cout << "4. Anime Movies\n";
	cout << "5. Back to Main Menu\n";
    cout << "\nEnter category: ";
    cin >> category;

    if (category == 1)
    {
    	cout << "\n===============================================================\n";
        cout << "              ACTION & ADVENTURE TRENDING MOVIES\n";
    	cout << "===============================================================\n";
        cout << "1. Sky Fall 007\n";
		cout << "2. Spider-Man Homecoming\n";
		cout << "3. The Lord of The Rings: The Return of The King\n";
		cout << "4. The Lord of The Rings: The Fellowship of The Ring\n";
		cout << "5. Back to Main Menu\n";
    }
    else if (category == 2)
    {
    	cout << "\n===============================================================\n";
        cout << "                     DRAMA TRENDING MOVIES\n";
    	cout << "===============================================================\n";
        cout << "1. Don't Look up\n";
		cout << "2. Remarkably Bright Creatures\n";
		cout << "3. Love Untangled\n";
		cout << "4. Even If This Love Disappears Tonight\n";
		cout << "5. Back to Main Menu\n";
    }
    else if (category == 3)
    {
    	cout << "\n===============================================================\n";
        cout << "                    COMEDY TRENDING MOVIES\n";
    	cout << "===============================================================\n";
        cout << "1. Knives Out\n";
		cout << "2. Class Onion: A Knives Out Mystery\n";
		cout << "3. Pitch Perfect\n";
		cout << "4. Voicemails for Isabelle\n";
		cout << "5. Back to Main Menu\n";
    }
    else if (category == 4)
    {
    	cout << "\n===============================================================\n";
        cout << "                     ANIME TRENDING MOVIES\n";
    	cout << "===============================================================\n";
        cout << "1. Howl's Moving Castle\n";
		cout << "2. Spirited Away\n";
		cout << "3. Haikyu!!: The Dumpster Battle\n";
		cout << "4. The First Slam Dunk\n";
		cout << "5. Back to Main Menu\n";
    }
    else if (category == 5)
    {
        return;
    }    
	else
    {
        cout << "Invalid category!\n";
        return;
    }

    cout << "\nSelect movie number: ";
    cin >> movie;

    showMovieDetail(category, movie);
}

int main()
{
    welcomeScreen();
    menu();

    return 0;
}

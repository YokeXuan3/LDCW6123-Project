#include <iostream>
#include <windows.h>
using namespace std;

void titleColor(int color);      
void welcomeScreen();
void trendingNow();
void showMovieDetail(int category, int movie);
void browseMoviesByGenre();


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
                browseMoviesByGenre();
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
            cout << "\nPress ENTER to return to Main Menu...";
            cin.ignore();
            cin.get();
        }

    } while(choice != 4);
}

void showMovieDetail(int category, int movie)
{
    if (category == 1) //English
    {
        if (movie == 1)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : KPOP Demon Hunters";
            cout << "\nGenre  : Music, Family Movies, Kids & Family Movies";
            cout << "\nRating : 7.4/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Red Notice";
            cout << "\nGenre  : US, Crime Movies, Comedy Movies";
            cout << "\nRating : 6.3/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Carry-On";
            cout << "\nGenre  : US, Thriller Movies";
            cout << "\nRating : 6.5/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Don't Look up";
            cout << "\nGenre  : Drama Movies";
			cout << "\nRating : 7.1/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 5)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : The Adam Project";
            cout << "\nGenre  : Family Movies, US, Sci-Fi Movies";
            cout << "\nRating : 6.7/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 6)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Bird Box";
            cout << "\nGenre  : US, Horror Movies, Thriller Movies";
            cout << "\nRating : 6.6/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 7)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Back in Action";
            cout << "\nGenre  : US, Comedy Movies, Action & Adventure Movies";
            cout << "\nRating : 5.9/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 8)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Leave The World Behind";
            cout << "\nGenre  : US, Drama Movies, Thriller Movies";
            cout << "\nRating : 6.4/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 9)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : War Machine";
            cout << "\nGenre  : US, Sci-Fi Movies, Military Movies";
            cout << "\nRating : 6.3/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 10)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : The Gray Man";
            cout << "\nGenre  : US, Movies Based on Books, Action & Adventure Movies";
            cout << "\nRating : 6.5/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 11)
		{
		    return;
		}
        else
        {
        	cout << "\nInvalid movie selection!\n";
		}
    }
    else if (category == 2) //Non-English
    {
        if (movie == 1)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Troll";
            cout << "\nGenre  : Norwegian, Action & Adventure Movies";
			cout << "\nRating : 5.8/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Under Paris";
			cout << "\nGenre  : French, Horror Movies, Thriller Movies";
			cout << "\nRating : 5.2/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Society of The Snow";
			cout << "\nGenre  : Spanish, Drama Movies, Movies Based on Books";
			cout << "\nRating : 7.8/10\n";
            cout << "===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Exterritorial";
			cout << "\nGenre  : German, Action & Adventure Movies";
			cout << "\nRating : 5.8/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 5)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : The Great Flood";
			cout << "\nGenre  : Korean, Sci-Fi Movies, Drama Movies";
			cout << "\nRating : 5.4/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 6)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Nowhere";
			cout << "\nGenre  : Spanish, Drama Movies, Thriller Movies";
			cout << "\nRating : 6.3/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 7)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : The Platform";
			cout << "\nGenre  : Spanish, Thriller Movies";
			cout << "\nRating : 7/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 8)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Counterattack";
			cout << "\nGenre  : Mexican, Military Movies, Action & Adventure Movies";
			cout << "\nRating : 6/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 9)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Ad Vitam";
			cout << "\nGenre  : French, Crime Movies, Drama Movies";
			cout << "\nRating : 5.9/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 10)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle  : Brick";
			cout << "\nGenre  : German, Thriller Movies, Mystery Movies";
			cout << "\nRating : 5.5/10\n";
            cout << "===============================================================\n";
		}
		else if (movie == 11)
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

    cout << "\n===============================================================\n";
    cout << "                        TRENDING NOW MOVIES";
    cout << "\n===============================================================\n";
    cout << "1. Movies | English\n";
    cout << "2. Movies | Non-English\n";
	cout << "3. Back to Main Menu\n";
    cout << "\nEnter category: ";
    cin >> category;

    if (category == 1)
    {
    	cout << "\n===============================================================\n";
        cout << "                     TOP 10 ENGLISH MOVIES\n";
    	cout << "===============================================================\n";
        cout << "1.  KPOP Demon Hunters\n";
		cout << "2.  Red Notice\n";
		cout << "3.  Carry-On\n";
        cout << "4.  Don't Look up\n";
        cout << "5.  The Adam Project\n";
        cout << "6.  Bird Box\n";
        cout << "7.  Back in Action\n";
        cout << "8.  Leave The World Behind\n";
        cout << "9.  War Machine\n";
        cout << "10. The Gray Man\n";
		cout << "\n11. Back to Main Menu\n";
    }
    else if (category == 2)
    {
    	cout << "\n===============================================================\n";
        cout << "                   TOP 10 NON-ENGLISH MOVIES\n";
    	cout << "===============================================================\n";
        cout << "1.  Troll\n";
        cout << "2.  Under Paris\n";
        cout << "3.  Society of The Snow\n";
        cout << "4.  Exterritorial\n";
        cout << "5.  The Great Flood\n";
        cout << "6.  Nowhere\n";
        cout << "7.  The Platform\n";
        cout << "8.  Counterattack\n";
        cout << "9.  Ad Vitam\n";
        cout << "10. Brick\n";
		cout << "\n11. Back to Main Menu\n";
    }
    else if (category == 3)
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

void browseMoviesByGenre()
{
    system("cls");

    int genre, movie;

    cout << "\n===============================================================\n";
    cout << "                    BROWSE MOVIES BY GENRE";
    cout << "\n===============================================================\n";
    cout << "Choose a genre to explore Netflix movies.\n\n";
    cout << "1. Action\n";
    cout << "2. Comedy\n";
    cout << "3. Drama\n";
    cout << "4. Horror\n";
    cout << "5. Sci-Fi\n";
    cout << "6. Thriller\n";
    cout << "7. Back to Main Menu\n";
    cout << "\nEnter genre: ";
    cin >> genre;

    if (genre == 1)
    {
        system("cls");

        cout << "\n====================== ACTION MOVIES ======================\n";
        cout << "1. Red Notice\n";
        cout << "2. The Gray Man\n";
        cout << "3. Troll\n";
        cout << "4. Exterritorial\n";
        cout << "5. Counterattack\n";
        cout << "6. Back to Main Menu\n";
        cout << "\nSelect movie number: ";
        cin >> movie;

        if (movie == 1)
        {
            showMovieDetail(1, 2);
        } 
        else if (movie == 2)
        {
            showMovieDetail(1, 10);
        } 
        else if (movie == 3)
        {
            showMovieDetail(2, 1);
        } 
        else if (movie == 4)
        {
            showMovieDetail(2, 4);
        } 
        else if (movie == 5)
        {
            showMovieDetail(2, 8);
        }
        else if (movie == 6)
        {
            return;
        } 
        else
        {
            cout << "\nInvalid movie selection!\n";
        } 
    }
    else if (genre == 2)
    {
        system("cls");

        cout << "\n====================== COMEDY MOVIES ======================\n";
        cout << "1. Red Notice\n";
        cout << "2. Back in Action\n";
        cout << "3. Back to Main Menu\n";
        cout << "\nSelect movie number: ";
        cin >> movie;

        if (movie == 1)
        {
            showMovieDetail(1, 2);
        } 
        else if (movie == 2)
        {
            showMovieDetail(1, 7);
        }
        else if (movie == 3)
        {
            return;
        }
        else
        {
            cout << "\nInvalid movie selection!\n";
        }
    }
    else if (genre == 3)
    {
        system("cls");

        cout << "\n====================== DRAMA MOVIES ======================\n";
        cout << "1. Don't Look Up\n";
        cout << "2. Leave The World Behind\n";
        cout << "3. Society of The Snow\n";
        cout << "4. Nowhere\n";
        cout << "5. Ad Vitam\n";
        cout << "6. Back to Main Menu\n";
        cout << "\nSelect movie number: ";
        cin >> movie;

        if (movie == 1)
        {
            showMovieDetail(1, 4);
        }
        else if (movie == 2)
        {
            showMovieDetail(1, 8);
        }
        else if (movie == 3)
        {
            showMovieDetail(2, 3);
        }
        else if (movie == 4)
        {
            showMovieDetail(2, 6);
        }
        else if (movie == 5)
        {
            showMovieDetail(2, 9);
        }
        else if (movie == 6)
        {
            return;
        }
        else
        {
            cout << "\nInvalid movie selection!\n";
        }
    }
    else if (genre == 4)
    {
        system("cls");

        cout << "\n====================== HORROR MOVIES ======================\n";
        cout << "1. Bird Box\n";
        cout << "2. Under Paris\n";
        cout << "3. Back to Main Menu\n";
        cout << "\nSelect movie number: ";
        cin >> movie;

        if (movie == 1)
        {
            showMovieDetail(1, 6);
        }
        else if (movie == 2)
        {
            showMovieDetail(2, 2);
        }
        else if (movie == 3)
        {
            return;
        }
        else
        {
            cout << "\nInvalid movie selection!\n";
        }
    }
    else if (genre == 5)
    {
        system("cls");

        cout << "\n====================== SCI-FI MOVIES ======================\n";
        cout << "1. The Adam Project\n";
        cout << "2. War Machine\n";
        cout << "3. The Great Flood\n";
        cout << "4. Back to Main Menu\n";
        cout << "\nSelect movie number: ";
        cin >> movie;

        if (movie == 1)
        {
            showMovieDetail(1, 5);
        }
        else if (movie == 2)
        {
            showMovieDetail(1, 9);
        }
        else if (movie == 3)
        {
            showMovieDetail(2, 5);
        }
        else if (movie == 4)
        {
            return;
        }
        else
        {
            cout << "\nInvalid movie selection!\n";
        }
    }
    else if (genre == 6)
    {
        system("cls");

        cout << "\n====================== THRILLER MOVIES ======================\n";
        cout << "1. Carry-On\n";
        cout << "2. Bird Box\n";
        cout << "3. Leave The World Behind\n";
        cout << "4. Under Paris\n";
        cout << "5. Nowhere\n";
        cout << "6. The Platform\n";
        cout << "7. Brick\n";
        cout << "8. Back to Main Menu\n";
        cout << "\nSelect movie number: ";
        cin >> movie;

        if (movie == 1)
        {
            showMovieDetail(1, 3);
        }
        else if (movie == 2)
        {
            showMovieDetail(1, 6);
        }
        else if (movie == 3)
        {
            showMovieDetail(1, 8);
        }
        else if (movie == 4)
        {
            showMovieDetail(2, 2);
        }
        else if (movie == 5)
        {
            showMovieDetail(2, 6);
        }
        else if (movie == 6)
        {
            showMovieDetail(2, 7);
        }
        else if (movie == 7)
        {
            showMovieDetail(2, 10);
        }
        else if (movie == 8)
        {
            return;
        }
        else
        {
            cout << "\nInvalid movie selection!\n";
        }
    }
    else if (genre == 7)
    {
        return;
    }
    else
    {
        cout << "\nInvalid genre selection!\n";
    }
}

int main()
{
    welcomeScreen();
    menu();
	
    return 0;
}

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void titleColor(int color);      
void welcomeScreen();
void trendingNow();
void showMovieDetail(int category, int movie);
void browseMoviesByGenre();
void searchMovie();

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

        cout << "  [1] Trending Now\n";
		cout << "  [2] Browse Movies by Genre\n";
        cout << "  [3] Search Movie\n";
        cout << "  [4] Exit\n\n";

        cout << "========================================================\n";
        do
        {
            cout << " Enter your choice (1-4): ";
            cin >> choice;

            if(choice < 1 || choice > 4)
            {
                cout << "\nInvalid choice! Please try again.\n";
            }

        }while(choice < 1 || choice > 4);

        switch(choice)
        {
            case 1:
                trendingNow();
                break;

            case 2:
                browseMoviesByGenre();
                break;

            case 3:
                searchMovie();
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
        	cout << "\nTitle         : KPOP Demon Hunters";
            cout << "\nGenre         : Music, Family Movies, Kids & Family Movies";
            cout << "\nRating        : 7.4/10\n";
            cout << "\nSynopsis      : A world-renowned K-pop girl group balances";
            cout << "\n                their lives in the spotlight while secretly";
            cout << "\n                fighting demons to protect humanity.\n";
            cout << "\n===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "=================================================================";
        	cout << "\nTitle    : Red Notice";
            cout << "\nGenre    : US, Crime Movies, Comedy Movies";
            cout << "\nRating   : 6.3/10\n";
            cout << "\nSynopsis : An Interpol agent teams up with a rival";
            cout << "\n           art thief to capture the world's most";
            cout << "\n           wanted criminal. However, unexpected";
            cout << "\n           betrayals change everything.";
            cout << "\n=================================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Carry-On";
            cout << "\nGenre    : US, Thriller Movies";
            cout << "\nRating   : 6.5/10\n";
            cout << "\nSynopsis : A mysterious traveler blackmails a TSA";
            cout << "\n           agent into allowing a dangerous package";
            cout << "\n           onto a Christmas Eve flight.";
            cout << "\n===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Don't Look up";
            cout << "\nGenre    : Drama Movies";
			cout << "\nRating   : 7.1/10\n";
            cout << "\nSynopsis : Two low-level astronomers must go on a";
            cout << "\n           giant media tour to warn humankind of";
            cout << "\n           an approaching comet that will destroy";
            cout << "\n           planet Earth.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 5)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : The Adam Project";
            cout << "\nGenre    : Family Movies, US, Sci-Fi Movies";
            cout << "\nRating   : 6.7/10\n";
            cout << "\nSynopsis : After accidentally crash-landing in";
            cout << "\n           2022, time-traveling fighter pilot";
            cout << "\n           Adam Reed teams up with his 12-year-";
            cout << "\n           old self for a mission to save the";
            cout << "\n           future.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 6)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Bird Box";
            cout << "\nGenre    : US, Horror Movies, Thriller Movies";
            cout << "\nRating   : 6.6/10\n";
            cout << "\nSynopsis : Five years after an ominous unseen";
            cout << "\n           presence drives most of society to";
            cout << "\n           suicide, a mother and her two";
            cout << "\n           children make a desperate bid to";
            cout << "\n           reach safety.";        
            cout << "\n===============================================================\n";
		}
		else if (movie == 7)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Back in Action";
            cout << "\nGenre    : US, Comedy Movies, Action & Adventure Movies";
            cout << "\nRating   : 5.9/10\n";
            cout << "\nSynopsis : Former CIA spies Emily and Matt are";
            cout << "\n           pulled back into espionage after";
            cout << "\n           their secret identities are exposed.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 8)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Leave The World Behind";
            cout << "\nGenre    : US, Drama Movies, Thriller Movies";
            cout << "\nRating   : 6.4/10\n";
            cout << "\nSynopsis : A family's getaway to a luxurious";
            cout << "\n           rental home takes an ominous turn";
            cout << "\n           when a cyberattack knocks out";
            cout << "\n           their devices, and two strangers";
            cout << "\n           appear at their door.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 9)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : War Machine";
            cout << "\nGenre    : US, Sci-Fi Movies, Military Movies";
            cout << "\nRating   : 6.3/10\n";
            cout << "\nSynopsis : Follow the final recruits of a";
            cout << "\n           grueling special ops boot camp";
            cout << "\n           who encounter a mysterious";
            cout << "\n           deadly force.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 10)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : The Gray Man";
            cout << "\nGenre    : US, Movies Based on Books, Action & Adventure Movies";
            cout << "\nRating   : 6.5/10\n";
            cout << "\nSynopsis : When the CIA's most skilled operative,";
            cout << "\n           whose true identity is known to none,";
            cout << "\n           accidentally uncovers dark agency secrets, a";
            cout << "\n           psychopathic former colleague puts a bounty";
            cout << "\n           on his head, setting off a global manhunt by";
            cout << "\n           international assassins.";
            cout << "\n===============================================================\n";
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
        	cout << "\nTitle    : Troll";
            cout << "\nGenre    : Norwegian, Action & Adventure Movies";
			cout << "\nRating   : 5.8/10\n";
            cout << "\nSynopsis : Deep in the Dovre mountain, something";
            cout << "\n           gigantic wakes up after a thousand";
            cout << "\n           years in captivity. The creature";
            cout << "\n           destroys everything in its path and";
            cout << "\n           quickly approaches Oslo.";
            cout << "\n===============================================================\n";
		}
        else if (movie == 2)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Under Paris";
			cout << "\nGenre    : French, Horror Movies, Thriller Movies";
			cout << "\nRating   : 5.2/10\n";
            cout << "\nSynopsis : To save Paris from a bloodbath, a";
            cout << "\n           grieving scientist is forced to";
            cout << "\n           face her tragic past when a giant";
            cout << "\n           shark appears in the Seine.";
            cout << "\n===============================================================\n";
		}
        else if (movie == 3)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Society of The Snow";
			cout << "\nGenre    : Spanish, Drama Movies, Movies Based on Books";
			cout << "\nRating   : 7.8/10\n";
            cout << "\nSynopsis : The flight of a rugby team crashes";
            cout << "\n           on a glacier in the Andes. The few";
            cout << "\n           passengers who survive the crash";
            cout << "\n           find themselves in one of the";
            cout << "\n           world's toughest environments to";
            cout << "\n           survive.";
            cout << "\n===============================================================\n";
		}
        else if (movie == 4)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Exterritorial";
			cout << "\nGenre    : German, Action & Adventure Movies";
			cout << "\nRating   : 5.8/10\n";
            cout << "\nSynopsis : When a soldier's son vanishes at a";
            cout << "\n           US consulate, she illegally remains";
            cout << "\n           on the premises to search for him,";
            cout << "\n           unknowingly entangling herself in a";
            cout << "\n           dangerous conspiracy.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 5)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : The Great Flood";
			cout << "\nGenre    : Korean, Sci-Fi Movies, Drama Movies";
			cout << "\nRating   : 5.4/10\n";
            cout << "\nSynopsis : A disastrous great flood sweeps the";
            cout << "\n           planet. On what may be the last day";
            cout << "\n           on Earth, a desperate fight ensues";
            cout << "\n           to save a child from a flooding";
            cout << "\n           apartment.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 6)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Nowhere";
			cout << "\nGenre    : Spanish, Drama Movies, Thriller Movies";
			cout << "\nRating   : 6.3/10\n";
            cout << "\nSynopsis : A young pregnant woman named Mia";
            cout << "\n           escapes from a country at war by";
            cout << "\n           hiding in a maritime container";
            cout << "\n           aboard a cargo ship. After a";
            cout << "\n           violent storm, Mia gives birth to";
            cout << "\n           her child while lost at sea, where";
            cout << "\n           she must fight to survive.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 7)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : The Platform";
			cout << "\nGenre    : Spanish, Thriller Movies";
			cout << "\nRating   : 7/10\n";
            cout << "\nSynopsis : In a prison where inmates are fed";
            cout << "\n           on a descending platform, those";
            cout << "\n           on the upper levels take more";
            cout << "\n           than their fair share while";
            cout << "\n           those below are left to starve";
            cout << "\n           on scraps and one man decides";
            cout << "\n           to change the system.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 8)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Contraataque";
			cout << "\nGenre    : Mexican, Military Movies, Action & Adventure Movies";
			cout << "\nRating   : 6/10\n";
            cout << "\nSynopsis : Five friends shopping at the";
            cout << "\n           US/Mexico border face sicario";
            cout << "\n           hitmen, but the targets are";
            cout << "\n           actually MurciÃ©lagos.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 9)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Ad Vitam";
			cout << "\nGenre    : French, Crime Movies, Drama Movies";
			cout << "\nRating   : 5.9/10\n";
            cout << "\nSynopsis : After escaping an attempted";
            cout << "\n           murder, Franck Lazareff must";
            cout << "\n           find his wife Leo, who has";
            cout << "\n           been kidnapped by a mysterious";
            cout << "\n           group of armed men. He is";
            cout << "\n           caught up by his past and";
            cout << "\n           plunged into a state affair";
            cout << "\n           that is beyond him.";
            cout << "\n===============================================================\n";
		}
		else if (movie == 10)
        {
        	cout << "\n===============================================================\n";
        	cout << "                         MOVIE DETAILS\n";
        	cout << "===============================================================";
        	cout << "\nTitle    : Brick";
            cout << "\nYear     : 2025";
			cout << "\nGenre    : German, Thriller Movies, Mystery Movies";
			cout << "\nRating   : 5.5/10\n";
            cout << "\nSynopsis : A couple whose apartment building";
            cout << "\n           is suddenly surrounded by a";
            cout << "\n           mysterious brick wall must work";
            cout << "\n           with their neighbors to find";
            cout << "\n           a way out.";
            cout << "\n===============================================================\n";
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

    system("cls");

    cout << "Loading Netflix";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);

    system("cls");

    cout << "---------------------------------------------\n";
    titleColor(12);
    cout << "               TRENDING NOW \n";
    titleColor(7);
    cout << "---------------------------------------------\n";
    cout << "[1] English Movies\n";
    cout << "[2] Non-English Movies\n";
	cout << "[3] Back to Main Menu\n";
    do
    {
        cout << "\nEnter category (1-3): ";
        cin >> category;

        if(category < 1 || category > 3)
        {
            cout << "\nInvalid category! Please try again.\n";
        }

    }while(category < 1 || category > 3);

    if (category == 1)
    {
    	cout << "\n===============================================================\n";
        cout << "                     TOP 10 ENGLISH MOVIES\n";
    	cout << "===============================================================\n";
        cout << "[1]  KPOP Demon Hunters\n";
		cout << "[2]  Red Notice\n";
		cout << "[3]  Carry-On\n";
        cout << "[4]  Don't Look up\n";
        cout << "[5]  The Adam Project\n";
        cout << "[6]  Bird Box\n";
        cout << "[7]  Back in Action\n";
        cout << "[8]  Leave The World Behind\n";
        cout << "[9]  War Machine\n";
        cout << "[10] The Gray Man\n";
		cout << "\n[11] Back to Main Menu\n";
    }
    else if (category == 2)
    {
    	cout << "\n===============================================================\n";
        cout << "                   TOP 10 NON-ENGLISH MOVIES\n";
    	cout << "===============================================================\n";
        cout << "[1]  Troll\n";
        cout << "[2]  Under Paris\n";
        cout << "[3]  Society of The Snow\n";
        cout << "[4]  Exterritorial\n";
        cout << "[5]  The Great Flood\n";
        cout << "[6]  Nowhere\n";
        cout << "[7]  The Platform\n";
        cout << "[8]  Counterattack\n";
        cout << "[9]  Ad Vitam\n";
        cout << "[10] Brick\n";
		cout << "\n[11] Back to Main Menu\n";
    }
    else if (category == 3)
    {
        return;
    }
	else
    {
        cout << "\nInvalid category!\n";

        cout << "\nPress ENTER to try again...";
        cin.ignore();
        cin.get();

        trendingNow();
        return;
    }

    int maxMovie;

    if(category == 1 || category == 2)
    {
        maxMovie = 11;
    }

    do
    {
        cout << "\nSelect movie number: ";
        cin >> movie;

        if(movie < 1 || movie > maxMovie)
        {
            cout << "\nInvalid movie selection! Please try again.\n";
        }

    }while(movie < 1 || movie > maxMovie);

        showMovieDetail(category, movie);

       int option;

        while (true)
        {
            cout << "\n";
            cout << "1. Back to Trending Now\n";
            cout << "2. Back to Main Menu\n";

            cout << "Enter your choice (1-2): ";

            cin >> option;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nInvalid choice! Please enter a number.\n";
                continue;
            }

            if (option == 1)
            {
                trendingNow();
                return;
            }
            else if (option == 2)
            {
                return;
            }
            else
            {
                cout << "\nInvalid choice! Please enter 1 or 2.\n";
            }
        }
}

void browseMoviesByGenre()
{
    system("cls");

    cout << "Loading Netflix";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);

    system("cls");

    int genre, movie;

    cout << "\n---------------------------------------------------------\n";
    cout << "                 BROWSE MOVIES BY GENRE";
    cout << "\n---------------------------------------------------------\n";
    cout << "Choose a genre to explore Netflix movies.\n\n";
    cout << "[1] Action\n";
    cout << "[2] Comedy\n";
    cout << "[3] Drama\n";
    cout << "[4] Horror\n";
    cout << "[5] Sci-Fi\n";
    cout << "[6] Thriller\n";
    cout << "[7] Back to Main Menu\n";
    do
    {
        cout << "\nEnter genre (1-7): ";
        cin >> genre;

        if(genre < 1 || genre > 7)
        {
            cout << "\nInvalid genre selection! Please try again.\n";
        }

    }while(genre < 1 || genre > 7);

    if (genre == 1)
    {
        system("cls");

        cout << "\n====================== ACTION MOVIES ======================\n";
        cout << "[1] Red Notice\n";
        cout << "[2] The Gray Man\n";
        cout << "[3] Troll\n";
        cout << "[4] Exterritorial\n";
        cout << "[5] Counterattack\n";
        cout << "[6] Back to Main Menu\n";
        do
        {
            cout << "\nSelect movie number (1-6): ";
            cin >> movie;

            if(movie < 1 || movie > 6)
            {
                cout << "\nInvalid movie selection! Please try again.\n";
            }

        }while(movie < 1 || movie > 6);

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
        cout << "[1] Red Notice\n";
        cout << "[2] Back in Action\n";
        cout << "[3] Back to Main Menu\n";
        do
        {
            cout << "\nSelect movie number (1-3): ";
            cin >> movie;

            if(movie < 1 || movie > 3)
            {
                cout << "\nInvalid movie selection! Please try again.\n";
            }

        }while(movie < 1 || movie > 3);

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
        cout << "[1] Don't Look Up\n";
        cout << "[2] Leave The World Behind\n";
        cout << "[3] Society of The Snow\n";
        cout << "[4] Nowhere\n";
        cout << "[5] Ad Vitam\n";
        cout << "[6] Back to Main Menu\n";
        do
        {
            cout << "\nSelect movie number (1-6): ";
            cin >> movie;

            if(movie < 1 || movie > 3)
            {
                cout << "\nInvalid movie selection! Please try again.\n";
            }

        }while(movie < 1 || movie > 6);

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
        cout << "[1] Bird Box\n";
        cout << "[2] Under Paris\n";
        cout << "[3] Back to Main Menu\n";
        do
        {
            cout << "\nSelect movie number (1-3): ";
            cin >> movie;

            if(movie < 1 || movie > 3)
            {
                cout << "\nInvalid movie selection! Please try again.\n";
            }

        }while(movie < 1 || movie > 3);

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
        cout << "[1] The Adam Project\n";
        cout << "[2] War Machine\n";
        cout << "[3] The Great Flood\n";
        cout << "[4] Back to Main Menu\n";
        do
        {
            cout << "\nSelect movie number (1-4): ";
            cin >> movie;

            if(movie < 1 || movie > 4)
            {
                cout << "\nInvalid movie selection! Please try again.\n";
            }

        }while(movie < 1 || movie > 4);

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
        cout << "[1] Carry-On\n";
        cout << "[2] Bird Box\n";
        cout << "[3] Leave The World Behind\n";
        cout << "[4] Under Paris\n";
        cout << "[5] Nowhere\n";
        cout << "[6] The Platform\n";
        cout << "[7] Brick\n";
        cout << "[8] Back to Main Menu\n";
        do
        {
            cout << "\nSelect movie number (1-8): ";
            cin >> movie;

            if(movie < 1 || movie > 8)
            {
                cout << "\nInvalid movie selection! Please try again.\n";
            }

        }while(movie < 1 || movie > 8);

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

        cout << "\nPress ENTER to try again...";
        cin.ignore();
        cin.get();

        browseMoviesByGenre();
        return;
    }
}

void searchMovie()
{
    system("cls");
    
    cout << "Loading Netflix";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    cout << ".";
    Sleep(300);
    
    system("cls");
    
    cout << "\n---------------------------------------------------------\n";
    cout << "                      SEARCH MOVIE";
    cout << "\n---------------------------------------------------------\n";
    
    cin.ignore();
    
    string searchTitle;
    cout << " Enter movie title to search: ";
    getline(cin, searchTitle);
    
    bool isEmpty = true;
    
    for (char c : searchTitle) 
    {
        if (c != ' ' && c != '\t' && c != '\n' && c != '\r') 
        {
            isEmpty = false;
            break;
        }
    }
    
    if (isEmpty) 
    {
        cout << "\n===============================================================\n";
        cout << "                     SEARCH RESULT\n";
        cout << "===============================================================\n";
        cout << " No search term entered. Please enter a movie title.\n";
        cout << "===============================================================\n";
        
        int option;
        bool validInput = false;
        
        while (!validInput) 
        {
            cout << "\n";
            cout << "1. Search Again\n";
            cout << "2. Back to Main Menu\n";
            cout << "Enter your choice: ";
            
            cin >> option;
            
            if (cin.fail()) 
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nInvalid choice! Please enter 1 or 2.\n";
            } 
            else if (option == 1) 
            {
                validInput = true;
                searchMovie();
                return;
            } 
            else if (option == 2) 
            {
                validInput = true;
                return;
            } 
            else 
            {
                cout << "\nInvalid choice! Please enter 1 or 2.\n";
            }
        }
        return;
    }
    
    string searchLower = searchTitle;
    
    for (char &c : searchLower) 
    {
        c = tolower(c);
    }
    
    int foundCategories[20];
    int foundMovies[20];
    string foundTitles[20];
    int foundCount = 0;
    
    string englishMovies[10] = 
    {
        "KPOP Demon Hunters",
        "Red Notice",
        "Carry-On",
        "Don't Look up",
        "The Adam Project",
        "Bird Box",
        "Back in Action",
        "Leave The World Behind",
        "War Machine",
        "The Gray Man"
    };
    
    for (int i = 0; i < 10; i++) 
    {
        string movieLower = englishMovies[i];
        
        for (char &c : movieLower) 
        {
            c = tolower(c);
        }
        
        if (movieLower.find(searchLower) != string::npos) 
        {
            foundCategories[foundCount] = 1;
            foundMovies[foundCount] = i + 1;
            foundTitles[foundCount] = englishMovies[i];
            foundCount++;
        }
    }
    
    string nonEnglishMovies[10] = 
    {
        "Troll",
        "Under Paris",
        "Society of The Snow",
        "Exterritorial",
        "The Great Flood",
        "Nowhere",
        "The Platform",
        "Counterattack",
        "Ad Vitam",
        "Brick"
    };
    
    for (int i = 0; i < 10; i++) 
    {
        string movieLower = nonEnglishMovies[i];
        
        for (char &c : movieLower) 
        {
            c = tolower(c);
        }
        
        if (movieLower.find(searchLower) != string::npos) 
        {
            foundCategories[foundCount] = 2;
            foundMovies[foundCount] = i + 1;
            foundTitles[foundCount] = nonEnglishMovies[i];
            foundCount++;
        }
    }
    
    if (foundCount > 0) 
    {
        cout << "\n===============================================================\n";
        cout << "                     SEARCH RESULTS\n";
        cout << "===============================================================\n";
        cout << " Found " << foundCount << " movie(s) matching \"" << searchTitle << "\"\n";
        cout << "===============================================================\n\n";
        
        for (int i = 0; i < foundCount; i++) 
        {
            cout << " [" << (i + 1) << "] " << foundTitles[i] << endl;
        }
        
        int choice;
        bool validInput = false;
        
        while (!validInput) 
        {
            cout << "\n===============================================================\n";
            cout << " Enter the number of the movie to view details (1-" << foundCount << ")\n";
            cout << " Enter 0 to go back to main menu\n";
            cout << " Enter " << (foundCount + 1) << " to Search Again\n";
            cout << "===============================================================\n";
            cout << " Your choice: ";
            
            cin >> choice;
            
            if (cin.fail()) 
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nInvalid choice! Please enter a number.\n";
            } 
            else if (choice >= 1 && choice <= foundCount) 
            {
                validInput = true;
                showMovieDetail(foundCategories[choice - 1], foundMovies[choice - 1]);
                
                int option;
                bool validOption = false;
                
                while (!validOption) 
                {
                    cout << "\n";
                    cout << "1. Search Again\n";
                    cout << "2. Back to Main Menu\n";
                    cout << "Enter your choice: ";
                    
                    cin >> option;
                    
                    if (cin.fail()) 
                    {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "\nInvalid choice! Please enter 1 or 2.\n";
                    } 
                    else if (option == 1) 
                    {
                        validOption = true;
                        searchMovie();
                        return;
                    } 
                    else if (option == 2) 
                    {
                        validOption = true;
                        return;
                    } 
                    else 
                    {
                        cout << "\nInvalid choice! Please enter 1 or 2.\n";
                    }
                }
                return;
            } 
            else if (choice == 0) 
            {
                validInput = true;
                return;
            } 
            else if (choice == (foundCount + 1)) 
            {
                validInput = true;
                searchMovie();
                return;
            } 
            else 
            {
                cout << "\nInvalid choice! Please enter a valid number.\n";
            }
        }
    } 
    else 
    {
        cout << "\n===============================================================\n";
        cout << "                     SEARCH RESULT\n";
        cout << "===============================================================\n";
        cout << " No movies found matching \"" << searchTitle << "\"\n";
        cout << " Please check the spelling and try again.\n";
        cout << "===============================================================\n";
        
        int option;
        bool validInput = false;
        
        while (!validInput) 
        {
            cout << "\n";
            cout << "1. Search Again\n";
            cout << "2. Back to Main Menu\n";
            cout << "Enter your choice: ";
            
            cin >> option;
            
            if (cin.fail()) 
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nInvalid choice! Please enter 1 or 2.\n";
            } 
            else if (option == 1) 
            {
                validInput = true;
                searchMovie();
                return;
            } 
            else if (option == 2) 
            {
                validInput = true;
                return;
            } 
            else 
            {
                cout << "\nInvalid choice! Please enter 1 or 2.\n";
            }
        }
        return;
    }
}

int main()
{
    welcomeScreen();
    menu();
	
    return 0;
}

#ifndef APPMANAGER_H
#define APPMANAGER_H

#include "wild.h"
#include "user.h"

class AppManager
{
private:
    UserLogin userlogin;
    Wildrift game;

public:
    void displayHeader()
    {
        cout << R"(
           ______ _     _       _           _   _            _    
          |  ____| |   (_)     (_)         | | (_)          | |   
          | |__  | |__  _ _ __  _  ___  ___| |_ _  ___ _ __| | __
          |  __| | '_ \| | '_ \| |/ _ \/ __| __| |/ _ \ '__| |/ /
          | |____| | | | | | | | |  __/ (__| |_| |  __/ |  |   < 
          |______|_| |_|_|_| |_| |\___|\___|\__|_|\___|_|  |_|\_\
                              _/ |      Welcome to          
                                 |__/          Wildrift By Rayclear      
                           )" << endl;
    }

    void displayMainMenu()
    {  
        int choice;

        

             do {
            displayHeader();
            cout << "                             1. Sign Up" << endl;
            cout << "                             2. Sign In" << endl;
            cout << "                             3. Wildrift Menu" << endl;
            cout << "                             4. Exit" << endl;
            cout << "                             Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    userlogin.signUp();
                    break;
                case 2:
                    if (userlogin.signIn()) {
                        displayWildriftMenu();
                    }
                    break;
                case 3:
                    displayWildriftMenu();
                    break;
                case 4:
                    cout << "                       Exiting..." << endl;
                    break;
                default:
                    cout << "                          Invalid choice. Please try again." << endl;
            }
        } while (choice != 4);
    }

            
        
    
    void displayWildriftMenu() {
        int choice;
        do {
            cout << "                   Wildrift Menu" << endl;
            cout << "                       1. Add Champion" << endl;
            cout << "                       2. Add Skin" << endl;
            cout << "                       3. Display Champions" << endl;
            cout << "                       4. Display Skins" << endl;
            cout << "                       5. Search Champion" << endl;
            cout << "                       6. Search Skin" << endl;
            cout << "                       7. Delete Champion" << endl;
            cout << "                       8. Delete Skin" << endl;
            cout << "                       9. Back to Main Menu" << endl;
            cout << "                          Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    game.addChampion();
                    break;
                case 2:
                    game.addSkin();
                    break;
                case 3:
                    game.displayChampionInfo();
                    break;
                case 4:
                    game.displaySkinsInfo();
                    break;
                case 5:
                    game.searchChampionByName();
                    break;
                case 6:
                    game.searchSkinByName();
                    break;
                case 7:
                    game.deleteChampoin();
                    break;
                case 8:
                    game.deleteSkin();
                    break;
                case 9:
                    cout << "                 Returning to Main Menu..." << endl;
                    break;
                default:
                    cout << "                    Invalid choice. Please try again." << endl;
            }
        } while (choice != 9);
    }

};

#endif


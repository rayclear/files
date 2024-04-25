#ifndef WILD_H
#define WILD_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Wildrift
{
private:

    struct Champion
    {
        string champion_Name;
        int blue_Price;
        string role;
        string skills[4];
    };
    vector <Champion> champions;

    struct Skin
    {
        string skin_Name;
        string skin_Category;
        double skin_Price;
        
    };

    vector <Skin> skins;



    public:
        void addChampion()
        {
            Champion newChampion;
            cout << "Add champion new champion's information :" << endl;
            cout << " Enter champion's name : ";
            cin >> newChampion.champion_Name;
            cout << "Enter blue price : ";
            cin >>newChampion.blue_Price;
            cout << "Enter the role of the champion : ";
            cin >> newChampion.role;
            
            for(int i = 1; i <= 4; i++)
            {
                cout << "Enter the skill " << i << " : ";
                cin >> newChampion.skills[i];
            }
            champions.push_back(newChampion);
            cout << "Champion added succes " << endl;
        }

        void addSkin()
        {
            Skin newSkin;

            cout << "Add new skin " << endl;
            cout << "Skin name : ";
            cin >>newSkin.skin_Name;
            cout << "Skin's price : ";
            cin >>newSkin.skin_Price;
            cout << "skin's category : ";
            cin >>newSkin.skin_Category;


            skins.push_back(newSkin);
            cout << "Skin added succes " << endl;
    
        }

        void displayChampionInfo()
        {
            for(const auto &champion : champions)
            {
                cout << champion.champion_Name << " ----->   | " << champion.blue_Price << "  | " <<champion.role << "  |" << endl;
            }
        }




};

#endif
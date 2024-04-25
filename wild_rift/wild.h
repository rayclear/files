#ifndef WILD_H
#define WILD_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    vector<Champion> champions;

    struct Skin
    {
        string skin_Name;
        string skin_Category;
        double skin_Price;
    };

    vector<Skin> skins;

public:
    void addChampion()
    {
        Champion newChampion;
        cout << "Add champion new champion's information :" << endl;
        cout << " Enter champion's name : ";
        cin >> newChampion.champion_Name;
        cout << "Enter blue price : ";
        cin >> newChampion.blue_Price;
        cout << "Enter the role of the champion : ";
        cin >> newChampion.role;

        for (int i = 1; i <= 4; i++)
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
        cin >> newSkin.skin_Name;
        cout << "Skin's price : ";
        cin >> newSkin.skin_Price;
        cout << "skin's category : ";
        cin >> newSkin.skin_Category;

        skins.push_back(newSkin);
        cout << "Skin added succes " << endl;
    }

    void displayChampionInfo()
    {
        for (const auto &champion : champions)
        {
            cout << champion.champion_Name << " ----->   | " << champion.blue_Price << "  | " << champion.role << "  |" << endl;
        }
    }

    void displaySkinsInfo()
    {
        for (const auto &skin : skins)
        {
            cout << skin.skin_Name << " ----->   | " << skin.skin_Price << "  | " << skin.skin_Category << "  |" << endl;
        }
    }

    void searchChampionByName()
    {
        string championSearched;
        bool found = false;
        // read and write
        cout << "Enter the name of the champion : ";
        cin >> championSearched;
        for (const auto &champion : champions)
        {
            if (champion.champion_Name == championSearched)
            {
                cout << "Champion found. \n";
                cout << champion.champion_Name << " ----->   | " << champion.blue_Price << "  | " << champion.role << "  |" << endl;

                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Champion not found, try again. " << endl;
        }
    }

    void searchSkinByName()
    {
        string skinSearched;
        bool isset = false;

        // write and read skinSearched
        cout << "Enter the name of skin : ";
        cin >> skinSearched;
        for (const auto &skin : skins)
        {
            if (skin.skin_Name == skinSearched)
            {
                cout << skin.skin_Name << " ----->   | " << skin.skin_Price << "  | " << skin.skin_Category << "  |" << endl;
                isset = true;
                break;
            }
        }
        if (!isset)
        {
            cout << "Skin not found, try again. " << endl;
        }
    }

    void deleteChampoin()
    {
        string championDeleted;
        // write and read
        cout << "what's the name of champion you want to delete ? ";
        cin >> championDeleted;

        auto it = remove_if(champions.begin(), champions.end(), [&](const Champion &champion)
                            { return champion.champion_Name == championDeleted; });

        if (it != champions.end())
        {
            champions.erase(it, champions.end());
            cout << "Champion deleted " << endl;
        }
        else
        {
            cout << "Champion not found " << endl;
        }
    }

    void deleteSkin()
    {
        string skinDeleted;
        cout << "what's the name of skin you want to delete ? ";
        cin >> skinDeleted;

        auto it = remove_if(skins.begin(), skins.end(), [&](const Skin &skin)
                            { return skin.skin_Name == skinDeleted; });

        if (it != skins.end())
        {
            skins.erase(it, skins.end());
            cout << "Skin deleted success " << endl;
        }
        else
        {
            cout << "Skin not found " << endl;
        }
    }

    
};

#endif
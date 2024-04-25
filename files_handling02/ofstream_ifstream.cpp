#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ofstream file;
    string line;

    file.open("saved_data.txt");

    while(file)
    {
        getline(cin,line);

        if(line == "-1")
        break;

        file << line << endl;
    }

    file.close();



    ifstream fin;

    fin.open("saved_data.txt");

    while(getline(fin, line))
    {
        cout << line << endl;
    }


    fin.close();

    
    return 0;
}
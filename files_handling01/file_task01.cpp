#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream myFile;
    myFile.open("data.txt", ios::out); // write

    if(myFile.is_open())
    {
        myFile << "data is in   \n";
        myFile.close();

    }


    myFile.open("data.txt", ios::app); // append to what we did have preveoius

    if(myFile.is_open())
    {
        myFile << "data is in second  \n";
        myFile.close();

    }
   
   




    return 0;
}
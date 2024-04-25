#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{   
    fstream my_file;
    string line;

    my_file.open("data.txt" , ios:: in);

    if(my_file.is_open())
    {
        while(getline(my_file, line))
        {
            cout << line << "\n";
        }

        my_file.close();
    }


     return 0;
}
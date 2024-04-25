#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <string>
#include <vector>
using namespace std;

class UserLogin
{

private:
    struct User
    {

        string username;
        string password;
        string birthday;
        string email;
        string cpassword;
    };

    vector<User> users;

public:
    void signUp()
    {
        User newUser;

        cout << "EMAIL : ";
        cin >> newUser.email;
        cout << "BIRTHDAY : ";
        cin >> newUser.birthday;
        cout << "USERNAME : ";
        cin >> newUser.username;
        cout << "PASSWORD : ";
        cin >> newUser.password;
        do
        {
            cout << "CONFIRM PASSWORD : ";
            cin >> newUser.cpassword;

            if (newUser.cpassword != newUser.password)
            {
                cout << "PASSWORDS NOT MATCH PLEASE TRY AGAIN !" << endl;
            }
        } while (newUser.cpassword != newUser.password);

        users.push_back(newUser);
        cout << "WELCOME " << newUser.username << endl;
    }

    bool signIn()
    {
        string username_inputed;
        string password_inputed;
        cout << "USERNAME : ";
        cin >> username_inputed;
        cout << "PASSWORD : ";
        cin >> password_inputed;

        for (const auto &user : users)
        {

            if (user.username == username_inputed && user.password == password_inputed)
            {
                cout << " Welcome to wild rift space " << username_inputed << endl;
                return true;
            }
            
            
            
        }
        cout << "Invalid password or username try again " << username_inputed << endl; 
        return false;
    }
};

#endif
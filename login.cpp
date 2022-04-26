#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
m:
    int c;
    system("cls");
    system("color 2");
    cout << "\t\t\t-------------------------------------------------------" << endl;
    cout << "\t\t\t|                                                     |" << endl;
    cout << "\t\t\t|                      MENU                           |" << endl;
    cout << "\t\t\t|   1 LOGIN                                           |" << endl;
    cout << "\t\t\t|                                                     |" << endl;
    cout << "\t\t\t|   2 REGISTER                                        |" << endl;
    cout << "\t\t\t|                                                     |" << endl;
    cout << "\t\t\t|   3 FORGOT PASSWORD                                 |" << endl;
    cout << "\t\t\t|                                                     |" << endl;
    cout << "\t\t\t|   4 EXIT                                            |" << endl;
    cout << "\t\t\t|                                                     |" << endl;
    cout << "\t\t\t|                                                     |" << endl;
    cout << "\t\t\t-------------------------------------------------------" << endl;

    cout << "\n\n\t\t\t Select from the given options : ";
    cin >> c;

    switch (c)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        break;

    default:
        system("cls");
        system("color 4");
        cout << "\t\t\t\t\tINVALID INPUT\n\n\n\n\n\n\n\n\n\n\n\n";
    };
}

void login()
{
    int count;
    string userID, password, id, pass;
    system("cls");

    cout << "\t\t\t Please enter the username and password : ";
    cout << "\nUSERNAME : ";
    cin >> userID;

    cout << "PASSWORD : ";
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == userID and pass == password)
        {
            count = 1;
            system("cls");
        }
    }
    input.close();

    if (count == 1)
    {
        cout << "Username = " << userID;
        cout << "\nYour Login is Succesful";
        cout << "\nThankyou";
        main();
    }
    else
    {
        cout << "\n\n\nYour username or password is invalid or already registered!!";
    }
}
void registration()
{
    string ruserID, rpassword, rID, rpass;
    system("cls");

    cout << "\n Enter the Username : ";
    cin >> ruserID;
    cout << "\n Enter the Password : ";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruserID << ' ' << rpassword << endl;
    system("cls");

    cout << "Registration is succesful";
    main();
}
void forgot()
{
    int option;
    system("cls");

    cout << "\t\t\t You forgot the password ? No worries\n ";
    cout << "\nPress 1 to search your id by username\n";
    cout << "\nPress 2 to go back to the menu\n ";
    cout << "\t\t\t Enter Your choice : ";
    cin >> option;

    int count = 0;
    string sUserId, sID, sPass;
    ifstream f2("records.txt");

    switch (option)
    {

    case 1:
        cout << "\n\t\t Enter the Username You Remember : ";
        cin >> sUserId;

        while (f2 >> sID >> sPass)
        {
            if (sID == sUserId)
            {
                count == 1;
            }
            f2.close();
            if (count == 1)
            {
                cout << "\n\n\n Your Account is found !! ";
                cout << "\n Your Password is : " << sPass;
                main();
            }
            else
            {
                system("cls");
                cout << "Sorry Your Account is not found";
                main();
            }
        }
        break;

    case 2:
        main();
        break;

    default:
        system("cls");
        cout << "Wrong Choice !! Try Again ";
        forgot();
        break;
    }
}
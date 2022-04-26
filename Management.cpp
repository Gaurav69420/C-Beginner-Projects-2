#include <iostream>
using namespace std;

int main()
{
    system("cls");
    cout << "*******************************************" << endl;
    cout << "*                                         *" << endl;
    cout << "*          HOTEL                          *" << endl;
    cout << "*                                         *" << endl;
    cout << "*          MANAGEMENT                     *" << endl;
    cout << "*                                         *" << endl;
    cout << "*          SYSTEM                         *" << endl;
    cout << "*                                         *" << endl;
    cout << "*                0         0              *" << endl;
    cout << "*                                         *" << endl;
    cout << "*                   -----                 *" << endl;
    cout << "*                                         *" << endl;
    cout << "*                                         *" << endl;
    cout << "*******************************************" << endl;
    // Quantity
    int quant, choice;

    int Qrooms = 0;
    int QPasta = 0;
    int Qburger = 0;
    int Qnoodles = 0;
    int Qshake = 0;
    int Qchicken = 0;

    // Sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // Total Available
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken = 0;

    system("color 3 ");

    cout << "\n\t\t Quantity of Items We Have in our Hotel ";
    cout << "\n\n Rooms Available: ";
    cin >> Qrooms;

    cout << "\n Quantity of Pasta : ";
    cin >> QPasta;

    cout << "\n Quantity of Burger : ";
    cin >> Qburger;

    cout << "\n Quantity of Noodles : ";
    cin >> Qnoodles;

    cout << "\n Quantity of Shake : ";
    cin >> Qshake;

    cout << "\n Quantity of Chicken-Roll : ";
    cin >> Qchicken;

    system("cls");
    system("color 2");

m:
    
    cout << "\n\n\t\t\t Please select from the given menu options : ";

    cout << "\n\n 1) Rooms\n";
    cout << "\n 2) Pasta\n";
    cout << "\n 3) Burger\n";
    cout << "\n 4) Noodles\n";
    cout << "\n 5) Shake\n";
    cout << "\n 6) Chicken-Roll\n";
    cout << "\n 7) Information regarding the sales and collection\n";
    cout << "\n 8) Exit\n";

    cout << "\n\n Please enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");
        system("color 3");

        cout << "Enter the number of rooms you want\n->";
        cin >> quant;

        if (Qrooms - Srooms >= quant)
        {
            system("cls");
            system("color 2");
            Srooms += quant;
            total_rooms = total_rooms + quant * 1200;
            cout << "\t\t\t\t" << quant << " room/rooms have been allocated to you  ";
        }
        else
        {
            system("cls");
            system("color 4");
            cout << "\t\t\t\t Only " << Qrooms - Srooms << " are the remaining room/rooms.";
        }
        break;

    case 2:
        system("cls");
        system("color 3");

        cout << "Enter amount of Pasta you want\n->";
        cin >> quant;

        if (QPasta - Spasta >= quant)
        {
            system("cls");
            system("color 2");
            Spasta += quant;
            total_pasta = total_pasta + quant * 1200;
            cout << "\t\t\t\t" << quant << " pasta is the order !   ";
        }
        else
        {
            system("cls");
            system("color 4");
            cout << "\t\t\t\t Only " << QPasta - Spasta << " is remaining in the hotel ";
        }
        break;

    case 3:
        system("cls");
        system("color 3");

        cout << "Enter amount of burger you want\n->";
        cin >> quant;

        if (Qburger - Sburger >= quant)
        {
            system("cls");
            system("color 2");
            Sburger += quant;
            total_burger = total_burger + quant * 1200;
            cout << "\t\t\t\t" << quant << " burger is the order !   ";
        }
        else
        {
            system("cls");
            system("color 4");
            cout << "\t\t\t\t Only " << Qburger - Sburger << " is remaining in the hotel ";
        }
        break;

    case 4:
        system("cls");
        system("color 3");

        cout << "Enter amount of noodles you want\n->";
        cin >> quant;

        if (Qnoodles - Snoodles >= quant)
        {
            system("cls");
            system("color 2");
            Snoodles += quant;
            total_noodles = total_noodles + quant * 1200;
            cout << "\t\t\t\t" << quant << " noodles is the order !   ";
        }
        else
        {
            system("cls");
            system("color 4");
            cout << "\t\t\t\t Only " << Qnoodles - Snoodles << " is remaining in the hotel ";
        }
        break;

    case 5:
        system("cls");
        system("color 3");

        cout << "Enter number of Shake's you want\n->";
        cin >> quant;

        if (Qshake - Sshake >= quant)
        {
            system("cls");
            system("color 2");
            Sshake += quant;
            total_shake = total_shake + quant * 1200;
            cout << "\t\t\t\t" << quant << " shake is the order !   ";
        }
        else
        {
            system("cls");
            system("color 4");
            cout << "\t\t\t\t Only " << Qshake - Sshake << " is remaining in the hotel ";
        }
        break;

    case 6:
        system("cls");
        system("color 3");

        cout << "Enter amount of chicken-roll you want\n->";
        cin >> quant;

        if (Qchicken - Schicken >= quant)
        {
            system("cls");
            system("color 2");
            Schicken += quant;
            total_chicken = total_chicken + quant * 1200;
            cout << "\t\t\t\t" << quant << " chicken-roll is the order !   ";
        }
        else
        {
            system("cls");
            system("color 4");
            cout << "\t\t\t\t Only " << Qchicken - Schicken << " is remaining in the hotel ";
        }
        break;

    case 7:
        system("cls");
        system("color 2");

        cout << "\t\t\t\tDetails of Sales and collection ";
        cout << "\n\n Number of Rooms we had : " << Qrooms;
        cout << "\n\n Number of Rooms we gave for rent : " << Srooms;
        cout << "\n\n Remaining Rooms : " << Qrooms - Srooms;
        cout << "\n\n Total Rooms Collection for the day : " << total_rooms;
        cout << "\n\n";

        cout << "\n\n Number of Pasta we had : " << QPasta;
        cout << "\n\n Number of Pasta we sold : " << Spasta;
        cout << "\n\n Remaining Pasta : " << QPasta - Spasta;
        cout << "\n\n Total Pasta Collection for the day : " << total_pasta;
        cout << "\n\n";

        cout << "\n\n Number of burger we had : " << Qburger;
        cout << "\n\n Number of burger we sold : " << Sburger;
        cout << "\n\n Remaining burger : " << Qburger - Sburger;
        cout << "\n\n Total burger Collection for the day : " << total_burger;
        cout << "\n\n";

        cout << "\n\n Number of noodles we had : " << Qnoodles;
        cout << "\n\n Number of noodles we sold : " << Snoodles;
        cout << "\n\n Remaining noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total noodles Collection for the day : " << total_noodles;
        cout << "\n\n";

        cout << "\n\n Number of shake we had : " << Qshake;
        cout << "\n\n Number of shake we sold : " << Sshake;
        cout << "\n\n Remaining shake : " << Qshake - Sshake;
        cout << "\n\n Total shake Collection for the day : " << total_shake;
        cout << "\n\n";

        cout << "\n\n Number of chicken-roll we had : " << Qchicken;
        cout << "\n\n Number of chicken-roll we sold : " << Schicken;
        cout << "\n\n Remaining chicken-roll : " << Qchicken - Schicken;
        cout << "\n\n Total chicken-roll Collection for the day : " << total_chicken;
        cout << "\n\n";

        cout << "\n\n\n Total collection for the day : " << total_burger + total_chicken + total_noodles + total_pasta + total_rooms + total_shake;

        break;

    case 8:
        exit(0);
        break;

    default:
        system("cls");
        system("color 4");

        cout << "\n\n\n\n\t\t\t WRONG INPUT !!!! TRY AGAIN\n\n\n";
        system("exit");
        break;
    }
    goto m;
}
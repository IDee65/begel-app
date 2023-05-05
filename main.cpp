#include <iostream>

using namespace std;

int main(void)
{
    cout << "Hello, Welcome to the App" << endl;
    cout << "Please create a new account" << endl
         << endl;

    cout << "Choose a username: " << endl;
    string user;
    getline(cin, user);

    cout << "Choose a Password" << endl;
    string pass;
    getline(cin, pass);

get_info:
    cout << "Please enter your information" << endl;

    cout << "Username: " << endl;
    string username;
    getline(cin, username);

    cout << "Password: " << endl;
    string password;
    getline(cin, password);

    while (username != user || password != pass)
    {
        cout << "Invalid username or password" << endl;
        goto get_info;
    }

    cout << "Welcome to the bagel app" << endl;
    double balance = 5.00;

    cout << "Would you like to add money to your balance? y/n" << endl;
    string q1;
    getline(cin, q1);

    if (q1 == "yes"|| q1== "y")
    {
        cout << "Enter how much money you want to add: " << endl;
        double add;
        cin >> add;
        cout << "Your new balance is "
             << "#" << balance + add << endl;
    }
    else
    {
        cout << "Alright" << endl;
    }

    cout << "Would you like a bagel today? y/n" << endl;
    string q2;
    getline(cin, q2);

    if (q2 == "y")
    {
        cout << "Please select what bagel you want:" << endl;
        string bagelType[] = {"nature bagel", "cheese bagel", "egg bagel"};
        double bagelPrice[] = {3.00, 4.00, 5.00};

        cout << "1. " << bagelType[0] << "---#" << bagelPrice[0] << endl;
        cout << "2. " << bagelType[1] << "---#" << bagelPrice[1] << endl;
        cout << "3. " << bagelType[2] << "---#" << bagelPrice[2] << endl;

        cout << "Your choice: " << endl;
        int q3;
        cin >> q3;

        while (q3 > 3 || q3 < 1)
        {
            cout << "This is not a valid input please try again: " << endl;
            cin >> q3;
        }
        cout<<"Log 3"<<endl;
        switch (q3)
        {
        case 1:
            cout << "You have ordered a " << bagelType[0] << endl;
            cout << "The total of your order is #" << bagelPrice[0] << endl;
            cout << "You have #" << balance - bagelPrice[0] << " left on your balance" << endl;
            break;
        case 2:
            cout << "You have ordered a " << bagelType[1] << endl;
            cout << "The total of your order is #" << bagelPrice[1] << endl;
            cout << "You have #" << balance - bagelPrice[1] << " left on your balance" << endl;
            break;
        case 3:
            cout << "You have ordered a " << bagelType[2] << endl;
            cout << "The total of your order is #" << bagelPrice[2] << endl;
            cout << "You have #" << balance - bagelPrice[2] << " left on your balance" << endl;
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "Alright have a good day" << endl;
    }

    return 0;
}

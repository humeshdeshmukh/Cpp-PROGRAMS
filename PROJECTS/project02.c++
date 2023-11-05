#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

char un[20]; // global variable

class Admin
{
private:
    int totitem;
    int price[10];
    string name;
    string fmenu[10];
    string retype;
    string passwd;
    string rpasswd;

protected:
    string mobile;
    string mail;
    string stallid;

public:
    string restid;

public:
    int login()
    {

        if (un == restid)
        {
            cout << "\nEnter the login password: ";
            string inputpasswd;
            cin >> inputpasswd;
            if (passwd == inputpasswd)
                return 1;
            else
                return 0;
        }
        else
        {
            return 0;
        }
    }

    int recover()
    {
        cout << "\nThe input username is " << un;
        if (un == restid)
        {
            cout << "\nEnter the unique keyword (provided by admin): ";
            string key;
            cin >> key;
            if (key == rpasswd)
            {
                cout << "\nYou are a valid user.";
                cout << "\nYour password is " << passwd;
                cout << "\nPlease exit to login again.";
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }

    void getredata()
    {
        cout << "\nEnter the food stall name: ";
        cin >> name;
        cout << "\nEnter the food stall ID: ";
        cin >> restid;
        cout << "\nEnter the mobile number: ";
        cin >> mobile;
        cout << "\nEnter the E-mail ID: ";
        cin >> mail;
        cout << "\nEnter the stall Unique id: ";
        cin >> stallid;
        cout << "\nFood stall Food options Possible are:\n1. South-Indian\n2. Continental\n3. Chinese\n4. Thailand\n5. Multiple";
        cout << "\nEnter Food stall Food options type (Unique Number): ";
        cin >> retype;
        cout << "\nEnter the total food menu items: ";
        cin >> totitem;
        for (int i = 0; i < totitem; i++)
        {
            cout << "\nEnter the food item " << i + 1 << " Name: ";
            cin >> fmenu[i];
            cout << "\nEnter the price of food " << i + 1 << " (INR): ";
            cin >> price[i];
        }
        cout << "\nCreate your Login password: ";
        cin >> passwd;
        cout << "\nEnter the Unique Keyword to recover Password: ";
        cin >> rpasswd;
        cout << "Please note your userName is ID, i.e. " << restid << "\n";
    }

    void redisplay()
    {
        cout << "\nFood Stall Name: " << name;
        cout << "\nFood Stall ID: " << restid;
        cout << "\nFood Stall Mobile No.: " << mobile;
        cout << "\nFood Stall E-Mail ID: " << mail;
        cout << "\nFood Stall Food Menu Total Items: " << totitem;
        for (int i = 0; i < totitem; i++)
        {
            cout << "\nFood Item " << i + 1 << ": " << fmenu[i] << " :: Price: " << price[i] << " INR";
        }
        if (totitem == 0)
            cout << "\n(None Food Item Specified ...)";
    }

    int reprofile()
    {
        if (un == restid)
        {
            cout << "\nFood Stall Name: " << name;
            cout << "\nFood Stall Mobile: " << mobile;
            cout << "\nFood Stall Food item type: " << retype;
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int knowremenu()
    {
        if (un == restid)
        {
            cout << "\nFood Stall Items Type: " << retype;
            cout << "\nFood Stall Total food menus: " << totitem;
            for (int i = 0; i < totitem; i++)
            {
                cout << "\nFood Item " << i + 1 << ": " << fmenu[i] << " :: Price: " << price[i] << " INR";
            }
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void addremenu()
    {
    }
    void delremenu() {}
    void modreprofile() {}
    void knowremenutocustomer() {}
    void redisplaytocustomer() {}
    void searchrebyfoodtype() {}
    void invalid_input() {}

} a, f;
class MainMenu
{
public:
    void Admin_Call()
    {
    }
    void r_call()
    {
    }
    void customer_call()
    {
    }
    void invalid_user_input()
    {
    }
};

int main()
{
    Admin admin;
    cout << "Enter your username: ";
    cin >> un;
}

// You can add logic here to call the appropriate functions based on user actions.
// For example, you can call admin.login(), admin.getredata(), admin.redisplay(), etc.
// based on the user's input.

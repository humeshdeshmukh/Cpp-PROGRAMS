#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

class Admin
{
private:
    int totitem;
    int price[10];
    string name;
    string fmenu{10};
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
    int login();
    int recover();
    void getredata();
    void redisplay();
    int reprofile();
    int knowremenu();
    void addremenu();
    void delremenu();
    void modreprofile();
    void knowremenutocustomer();
    void redisplaytocustomer();
    int searchrebyfoodtype();

public:
    void admin_call();
    void r_call();
    void customer_call();
    void invalid_user_input();
};

int main()
{
    int ch;
    cout << "\n\n\n\t\t\t Welcome to Food court Management systeam";
    cout << "\n\n\n\t\t\t Enter to countinue ";
    cout << "\n \n\t\t Press 1 for Admin portal";
    cout << "\n \n\t\t Press 2 for Food stall portal";
    cout << "\n \n\t\t Press 3 for customer  portal";
    cout << "\n \n\t\t Enter your choice :";
    cin >> ch;
    if (ch == 1)
    {
        admin_call();
    }            // closing admine login
    if (ch == 2) // beginning of food stall view portal
    {
        r_call();
    } // end of food stall view portal
    if (ch == 3)
    {
        customer_call();
    }
    if (ch < 1 || ch > 3)
    {
        invalid_user_input();
    }
}
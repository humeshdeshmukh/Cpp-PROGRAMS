#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

char un[20];
char ft[20];
int i;

class Admin
{
private:
    int totitem;
    int price[10];
    string name;
    string  fmenu{10};
    string  retype;
    string passwd;
    string rpasswd;

protected:
    string mobile;
    string mail ;
    string stallid;

public:
    string  restid ;

public:
    // this  fuction authenticate the login the both admin and food stall portal  ussers
    int login()
    {
        if ((strcmp(::un, restid)) == 0)
        {
            cout << "\n enter the login password:";
            int len = 0;
            len = strlen(passwd);
            char inputpasswd[20];
            for (int i = 0; i < len; i++)
            {
                inputpasswd[i] = getch();
                cout << "#";
            }
            inputpasswd[i] = NULL;
            if ((strcmp(::un, restid) == 0) && (strcmp(passwd, inputpasswd) == 0))
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }

    /*this fuction helps n password recovery with the help of unique keyword provided by admin*/

    int recover()
    {
        cout << "\n the input username is " << ::un;
        char key[20];
        if (strcmp(::un, restid) == 0)
        {
            cout << "\n enter the uniqe keyword (provided by admin) :";
            cin >> key;
            if ((strcmp(key, rpasswd) == 0))
            {
                cout << "\n you are a valid user";
                cout << "\n your passwd is " << passwd;
                cout << "\n please exite to login again";
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    void getredata()
    {
        cout << "\n enter the food stall name :";
        gets(name);
        cout << "\n enter the food stall ID :";
        cin >> restid;
        cout << "\n enter the mobile number :";
        gets(mobile);
        cout << "\n enter the E-mail ID :";
        gets(mail);
        cout << "\n enter the stall Unique id :";
        gets(stallid);
        cout << "\n Food stall Food options Possible are \n1.South-Indian\n2.coutinental\n3.chinese\n4.Thailand\n5.Multiple";
        int foodtype;
        cout << "\n Enter Food stall Food options type (Unique Number )";
        cin >> foodtype;
        if (foodtype == 1)
            strcpy("South Indian ", retype);
        else if (foodtype == 2)
            strcpy("Countinental", retype);
        else if (foodtype == 3)
            strcpy("chinese ", retype);
        else if (foodtype == 4)
            strcpy(" Thailand ", retype);
        else
            strcpy("Multiple", retype);
        cout << "\n enter the total food menu items :";
        cin >> totitem;
        for (int i = 0; i < totitem; i++)
        {
            cout << "\n enter the food item " << i + 1 << "Name :";
            cin >> fmenu[i];
            cout << "\n enter the price of food:" << i + 1 << "INR :";
            cin >> price[i];
        }
        cout << "\n create your Login passwd :";
        cin >> passwd;
        cout << "\n Enter the Unique Keyword to recovery Password :";
        cin >> rpasswd;
        cout << "]\n please note your userName is ID,i.e." << restid << "\n";
    }
    void redisplay()
    {
        cout << "\n Food Stall Name                       :" << name;
        cout << "\n Fodd Stall Id                         :" << restid;
        cout << "\n Food Stall Mobile No.                 :" << mobile;
        cout << "\n Food Stall  E-Mail ID                 :" << mail;
        cout << "\n Food Stall Food Menu Total Items      :" << totitem;
        for (int i = 0; i < totitem; i++)
        {
            cout << "\n \tFood Item :" << i + 1 << ": " << fmenu[i] << ":: price :" << price[i];
        }
        if (totitem == 0)
            cout << "\n( None Food Item Specified ...)";
    }
    int reprofile()
    {
        if ((strcmp(::un, restid) == 0))
        {
            cout << "\n Food Stall Name                    :" << name;
            cout << "\n Food stall Mobile                  :" << mobile;
            cout << "\n Food stall food item type          :-" << retype;
            return 1;
        }
        else
            return 0;
    }
    int knowremenu()
    {
        if ((strcmp(::un, restid) == 0))
        {
            cout << "\n Food Stall Items Type  :-" << retype;
            cout << "\n Food Stall Total fmenus :-" << totitem;
            for (int i = 0; i < totitem; i++)
            {
                cout << "\n Food Item :" << i + 1 << ":" << fmenu << ":: price :" << price[1];
            }
            return 1;
        }
        else
            return 0;
    }
}m;
int main()
{
    void ch ,tmp;
    cout <<"\n\n\n\n\t\t\t Welcome to food cout Management system ";
    cout <<"\n\n\n\t\t\t Enter to continue ";
    
}
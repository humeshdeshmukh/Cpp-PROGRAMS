/* write a c++ program in  text file*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("out.txt");

    if(!fin)
    {
        cerr<<"error opening file !"<<endl;
        return 1;
    }

    char ch;
    while (fin.get(ch))
    {
        cout <<ch;

    }
    fin.close();

    return 0;
}

/*program to write in a text file*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("out.txt"); // Open the file for writing

    if (!fout)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    char str[300] = "time is a great teacher but unfortunately 
    it kills all its pupils - Louis Hector Berlioz";
    fout << str;
    fout.close(); // Close the file

    return 0;
}

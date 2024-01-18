/*program to count number of words*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("count.txt"); // Open the file for reading

    if (!fin)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    char word[30];
    int count = 0;

    while (fin >> word)
    {
        count++;
    }

    cout << "Number of words in the file is: " << count << endl;

    fin.close(); // Close the file

    return 0;
}

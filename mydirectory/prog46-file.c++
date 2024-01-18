/*profram to read from the  file and display it */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("out.txt"); // Open the file for reading

    if (!fin)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    char ch;
    while (fin.get(ch))
    {
        cout << ch;
    }

    fin.close(); // Close the files

    return 0;
}

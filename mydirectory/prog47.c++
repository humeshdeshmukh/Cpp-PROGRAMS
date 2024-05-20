/*program to count number of characters*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("out.txt");     // Open the file for reading
    if (!fin)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    char ch;
    int count = 0;
    while (fin.get(ch))
    {
        count++;
    }
    cout << "Number of characters in the file is: " << count << endl;
    fin.close(); // Close the file
    return 0;
}

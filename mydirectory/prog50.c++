/*program to count number of line*/

#include <fstream>
#include <iostream> // Include the necessary header for cout
using namespace std;

int main()
{
    ifstream fin;
    fin.open("anagha.txt"); // Correct the open function syntax
    char ftr[80];
    int count = 0; // Correct the variable name 'cout' to 'count'

    while (!fin.eof())
    {
        fin.getline(ftr, 80); // Read a line from the file into the ftr array
        count++;
    }

    cout << "Number of lines in the file is " << count << endl; // Correct the output syntax
    fin.close();                                                // Correct the close function name
    return 0;
}

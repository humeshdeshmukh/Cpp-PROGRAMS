/*program to copy contexts of file file to another file*/
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("out.txt");     // Correct the open function syntax
    ofstream fout;           // Correct the ofstream declaration
    fout.open("sample.txt"); // Correct the open function syntax
    char ch;
    while (!fin.eof()) // Correct the stream name and remove unnecessary semicolon
    {
        fin.get(ch);
        fout << ch;
    }
    fin.close();
    fout.close(); // Close the output file
    return 0;
}

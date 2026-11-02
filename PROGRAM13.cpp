#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    ifstream fs;
    ofstream ft;
    string str;
    char sourcefile[50], destinationfile[50];
    cout << "Enter Source File with Extension: ";
    cin.getline(sourcefile, 50);
    fs.open(sourcefile);
    if (!fs)
    {
        cout << "Error in Opening Source File...!!!";
        exit(1);
    }
    cout << "Enter Destination File with Extension: ";
    cin.getline(destinationfile, 50);
    ft.open(destinationfile);
    if (!ft)
    {
        cout << "Error in Opening Destination File...!!!";
        fs.close();
        exit(2);
    }
    while (getline(fs, str))
    {
        ft << str << "\n";
    }
    cout << "\n\nSource File Data Successfully Copied to Destination File...!!!";
    cout << "\n\nOpen Destination File and Check!!!\n";
    fs.close();
    ft.close();
    return 0;
}

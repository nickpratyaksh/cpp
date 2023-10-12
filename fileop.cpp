#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main(){
    string str="";
    cout << "Enter your name: ";
    cin >> str;
    ofstream file("name.txt");
    // ifstream fle("filename.txt");
    file << "Your name is " << str;
    // getline(fle,str);
    // cout << str;
    file.close();
    cout << "The file has been created" << endl << "Press enter to continue...";
    getch();
}
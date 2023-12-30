#include <iostream>
#include "HashTables.hpp"
#include <fstream>

int main() {
    fstream inFile;
    string input;
    HashTable labTable;
    cout << "Enter a file name: ";
    cin >> input;
    cout << "HashTable contents: " << endl;

    inFile.open(input);
    if(!inFile) {
        cout << "Cannot open the file" << endl;
        exit(1);
    }

    if(inFile.is_open()) {
        while(!inFile.eof()) {
            inFile >> input;
            labTable.InsertItem(input);
        }

        cout << labTable;
        inFile.close();
    }
//    cout << "Hello, World!" << endl;
//    HashTable myTable;
//    myTable.InsertItem("Hello");
//    myTable.InsertItem("Ollie");
//    myTable.InsertItem("Apple");
//    myTable.display();
    return 0;
}

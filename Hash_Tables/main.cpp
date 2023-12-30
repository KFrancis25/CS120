#include <iostream>
using namespace std;
#include <vector>
#include <string>

void insertInTable(string s, vector<string>& t){
    string alphabet = " abcdefghijklmnopqrstuvwxyz ";

    int sum = 0;
    for(size_t i=0; i<s.length(); i++){
        sum = sum + alphabet.find(s.at)
    }
    cout << "sum: "<< sum <<endl;
//    int hashValue(){
//
//    }
    //cout<< "This hash table"
    vector<string>::iterator position = t.begin() + hashValue();
    cout << "This is what is in the hash table" << *position <<endl;
    //vector<string::iterator it = t.insert(position, s);

    string word = *position;
    while( !word.empty()){
        cout << "collision! This location already has students, try next position";
        position++;
        *position = s+to_string(hashValue);
    }


}


int main() {
    vector<string> table(17);

    insertInTable("marry jhonson", table);
    insertInTable("laith bee", table);
    insertInTable("bob smith", table);
    insertInTable("ana dee", table);
    insertInTable("laith bee", table);

    int i=0;// index in vector starts at 0
    for (vector<string>::iterator it = table.begin() ; it != table.end(); ++it) {
        cout << i<< ") "<<*it << endl;
        i++;
    }

    cout << "All done!" << endl;
    return 0;
}

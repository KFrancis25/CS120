//
// Created by kaial on 11/17/2022.
//

#ifndef HASHTABLES_HASHTABLES_HPP
#define HASHTABLES_HASHTABLES_HPP

#include <string>
#include <iostream>
#include <list>
#include <vector>
#define TABLE_SIZE 13

using namespace std;

class HashTable{
public:
    // constructor
    HashTable();
    // destructor
    ~HashTable();
    //Inserts a dataItem into the hashTable
    void InsertItem(const string & item);
    //Displays the contents of the hash table
//    void display();
    //Overloaded output operator
    friend ostream& operator << (ostream & out, const HashTable & hashtable);

private:
    vector<list<string>> table;


};

//Constructor
//pre: none
//post: instantiates the hash table
HashTable::HashTable():table(TABLE_SIZE){


}

//Destructor
//pre: none
//post: clears the hash table
HashTable::~HashTable(){

}
//void HashTable::InsertItem(string myItem){
//
//    table[0].push_back(myItem);
//
//}

//Displays the contents of the hash table
//void HashTable::display(){
//    for (int i = 0; i < table.size(); ++i) {
//        cout << "List " << i << ": ";
////        for (auto &j : table[i]) {
////            cout << j << "   ";
////        }
//        for (list<string>::iterator it=table[i].begin(); it != table[i].end(); ++it)
//            cout << ' ' << *it;
//            cout << endl;
//
//    }
//}
//Inserts a dataItem into the hashTable
//pre: none
void HashTable::InsertItem(const string & item) {
    int index = 0;

    if(item.length() == 1) {
        index = ((int)item[0]) % TABLE_SIZE;
    }

    else if (item.length() == 2) {
        index = ((int)item[0] + (int)item[1]) % TABLE_SIZE;
    }

    else {
        index = ((int)item[0] + (int)item[1] + (int)item[2]) % TABLE_SIZE;
    }

    table[index].push_front(item);
}

//Overloaded output operator
//pre: none
//post: displays the contents of the hash table
ostream& operator << (ostream& out, const HashTable & hashtable) {
    int index = 0;
    for(vector<list<string>>::const_iterator it_vector = hashtable.table.begin();
        it_vector != hashtable.table.end(); it_vector++) {
        cout << "Index " << index << ":";
        for(list<string>::const_iterator it_list = it_vector->begin(); it_list != it_vector->end(); it_list++) {
            cout << " " << *it_list;
        }
        cout << endl;
        index ++;
    }
    return out;
}

#endif //HASHTABLES_HASHTABLES_HPP

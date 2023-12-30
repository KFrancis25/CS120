#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

//int myrandom(int i) { return rand()%i;}
//
//int main() {
//    vector<int> myvector;
//
//    for (int i=1; i<=10; i++) myvector.push_back(i);
//    //sort(myvector.begin(), myvector.end());
//
//    cout << "myvector contains: ";
//    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
//        cout << ' ' << *it;
//    cout << '\n';
//
//    random_shuffle( myvector.begin(), myvector.end());
//
//    cout << "myvector contains: ";
//    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
//        cout << ' ' << *it;
//    cout << '\n';
//
//    vector<int>::iterator m = max_element(myvector.begin(), myvector.end());
//            cout << "Max: " << *m << endl;
//
//    int sum = accumulate(myvector.begin(), myvector.end(),0);
//    cout <<"Average: "<< sum/myvector.size();


//    vector<int> myvector;
//    for(int i=1; i<=10;i++)
//        myvector.push_back(i);
//
//    vector< vector<int> > table;
//    table.push_back(myvector);
//    table.push_back(vector<int>(3, 0));
//    table.push_back(vector<int>(5, 44));
//
//    vector<int> v;
//    for(int i = 0; i < table.size(); i++) {
//        v = table[i];
//        for(vector<int>::iterator it = v.begin();it != v.end(); ++it)
//            cout << ' '<< *it;
//        cout << endl;
//    }
//
//    return 0;
//}

#include<stack>
#include<queue>

bool isPalindrome(const string &s){
    stack<char>stackChar;
    queue<char>queueChar;
    bool isPal = true;

    for(int i = 0; i<s.length(); i++){
    stackChar.push(s[i]);
    queueChar.push(s[i]);
    }
    while (isPal && !stackChar.empty()){
        if(stackChar.top() != queueChar.front())
            return false;
        stackChar.pop();
        queueChar.pop();

    }
    return isPal;
}

int main(){
    string = s "abcba";
    cout << "Is Palindrome? "<< isPalindrome <<endl;
}
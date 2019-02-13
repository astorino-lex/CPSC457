//#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm> //needed for sort function

using namespace std;

/*
 * This function should always return bool
 * The parameters should be in the type "const T &",
 * where T is the type of the things you want to compare.
 * It should return true if the first parameter should appear before the second one
 * So, we are sorting in decreasing lengths of the strings
 */

bool comp_veg(const string &veg1, const string &veg2) {
    return veg1.size() >= veg2.size();
}

int main() {

    vector<string> fruits = {"apple", "banana", "grape", "pear", "cherry", "orange"};

    sort(fruits.begin(), fruits.end()); //This is alphabetical sort

    cout<<"FRUITS:"<<endl;
    for(string &fruit: fruits) {
        cout<<fruit<<" ";
    }
    cout<<endl<<endl;

    vector<string> vegetables = {"carrot", "potato", "onion", "broccoli", "cauliflower", "lettuce"};
    sort(vegetables.begin(), vegetables.end(), comp_veg); //Sorts using the comparison function

    cout<<"VEGETABLES"<<endl;
    for(string &veg: vegetables) {
        cout<<veg<<" ";
    }
    cout<<endl;

    return 0;
}

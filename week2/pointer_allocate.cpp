#include <iostream>

using namespace std;

#define STR_ARR_LEN 7

int main() {
    //A pointer for one integer
    int *p = new int;

    //Change the value inside the address
    *p = 10;
    cout<<"*p: "<<*p<<endl;


    //String pointer for 7 strings
    string *arr = new string[STR_ARR_LEN];

    //Basic assignment, just like arays
    arr[0] = "Show";
    arr[1] = "must";
    arr[2] = "go";
    arr[3] = "on";

    for(int i=0; i<4; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"--------------------------\n";
    //Another way of traversing
    string *curr = arr; //Create new variable in order not to lose the beginning 
    int cnt = 0;
    while(cnt < 4) {
        cout<<*curr<<" ";
        curr++;
        cnt++;
    }

    cout<<endl;

    return 0;
}

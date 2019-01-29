#include <iostream>

using namespace std;

int main() {
    //Statically allocated variable
    int x = 3;
    //Create a pointer showing the address of x
    int *p = &x;

    //Print different values
    cout<<"x: "<<x<<endl; 
    cout<<"*p: "<<*p<<endl; //Dereferencing a pointer: getting the value from the address
    cout<<"p: "<<p<<endl; //This is the physical address

    //Change the value in the address p is pointing to
    *p = 7;
    cout<<"--------------------------------"<<endl;
    
    //See the differences
    cout<<"x: "<<x<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"p: "<<p<<endl;
}

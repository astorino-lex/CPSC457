#include <iostream>
#include "Student.h"

using namespace std;

Student :: Student() {
    cout<<"Student is created 1"<<endl;
}

Student :: Student(string f, string l, int a) {
    firstName = f;
    lastName = l;
    age = a;
    cout<<"Student is created 2"<<endl;
}

Student :: Student(const Student &s) {
    firstName = s.getFirstName();
    lastName = "COPIED";
    age = s.getAge();
    cout<<"Copy constructor ended"<<endl;
}

Student :: ~Student() {
    cout<<"Student is destroyed"<<endl;
}

string Student :: getFirstName() const{
    return firstName;
}

void Student :: setFirstName(string fName) {
    firstName = fName;
}

string Student :: getLastName() const{
    return lastName;
}

void Student :: setLastName(string lName) {
    lastName = lName;
}

int Student :: getAge() const{
    return age;
}

void Student :: setAge(int a) {
    age = a;
}

ostream& operator<<(ostream& os, const Student& student) {
    os<<"Student "<<student.firstName<<" "<<student.lastName;
    os<<" is at the age of "<<student.age;
    return os;
}


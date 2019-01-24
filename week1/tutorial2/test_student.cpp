#include <iostream>
#include "Student.h"

using namespace std;

void printStudent(Student s) {
    cout<<s<<endl;
}

int main() {
    Student student1;
    student1.setAge(15);
    cout<<student1<<endl;
	
    Student student2("Fred", "Conroy", 43);
    cout<<student2<<endl;

    printStudent(student2);
    cout<<"Function call finished"<<endl;
    
    return 0;
}

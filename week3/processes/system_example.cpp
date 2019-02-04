#include <iostream>
#include <cstdlib> //Needed for system()

using namespace std;

int main() {
    cout<<"Hi!"<<endl;

    //The commands are platform specific
    
    system("ps aux | grep firefox");
    system("ls -l");

    cout<<"Bye!"<<endl;

    return 0;
}

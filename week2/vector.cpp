#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> vs;
    vs.push_back("Show");
    vs.push_back("must");
    vs.push_back("go");
    vs.push_back("on");

    for(int i=0; i<vs.size(); i++) {
        cout<<vs[i]<<" ";
    }
    cout<<endl;
    return 0;
}

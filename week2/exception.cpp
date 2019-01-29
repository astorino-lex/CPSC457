#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class FileReadError{
    string message; //private by default
    
    public:
        FileReadError(string message) {
            this->message = message;
        }

        string getMessage() {
            return message;
        }
};

void readData(vector<int> &vi, const char* fName) {
    ifstream f;
    f.open(fName);
    if(!f.is_open()) {
        throw FileReadError("File cannot be opened!");
    }

    int num;
    while(f>>num) {
        vi.push_back(num);
    }
}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        cerr<<"Usage : ./a.out [filename]"<<endl;
        exit(1);
    }

    vector<int> data;
    try{
       readData(data, argv[1]);      
    } catch(FileReadError err) {
        cerr<<"Exception caught while reading the file : "<<err.getMessage()<<endl;
        exit(2);
    }

    int tot = 0;
    for(int i=0; i<data.size(); i++) {
        tot += data[i];
    }

    cout<<"Sum of the numbers in the file is: "<<tot<<endl;

    return 0;
}

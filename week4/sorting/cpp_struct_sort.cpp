//#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>

using namespace std;

//Create a structure to store name and size of the files
typedef struct {
    string file_name;
    int file_size;
} file_info;

//Compare the files in decreasing order of their sizes
bool comp_files(const file_info &f1, const file_info &f2) {
    return f1.file_size > f2.file_size;
}

int main() {
    //Read the data from the file
    ifstream inp;
    inp.open("file_data.txt");

    if(!inp.is_open()) {
        cout<<"You should download file_data.txt file, too!"<<endl;
        exit(1);
    }

    string name;
    int size;
    vector<file_info> v_file;

    //Until there is a string and an integer in the file, read them and create file_info
    while(inp>>name>>size) {
        file_info f_info;
        f_info.file_name = name;
        f_info.file_size = size;
        v_file.push_back(f_info);
    }
    
    //Sort the files using the comparison function
    sort(v_file.begin(), v_file.end(), comp_files);

    for(file_info &f: v_file) {
        cout<<f.file_name<<" "<<f.file_size<<endl;
    }

    return 0;
}

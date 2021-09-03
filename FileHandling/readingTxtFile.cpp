#include <iostream>
#include <fstream> 
using namespace std; 

int main() {
    string inFileName = "test.txt";

    ifstream infile; 

    infile.open(inFileName);

    if(infile.is_open()) {

        string line;

        while(infile) {
            getline(infile, line);
            cout << line << endl; 
        }
        
        infile.close();
    } else {
        cout << "Cannot open file: " << inFileName << endl; 
    }
    return 0;
}
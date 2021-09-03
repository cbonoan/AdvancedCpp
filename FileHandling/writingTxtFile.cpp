#include <iostream>
#include <fstream>
using namespace std; 

int main() {
    
    ofstream outFile; 
    // fstream outFile; 

    string outFileName = "text.txt";
    outFile.open(outFileName);
    // outfile.open(outFileName, ios::out);

    if(outFile.is_open()) {
        outFile << "Hello there" << endl;
        outFile << "Hello again" << endl;
        outFile.close();
    } else {
        cout << "Could not create file: " << outFileName << endl; 
    }

    return 0;
}
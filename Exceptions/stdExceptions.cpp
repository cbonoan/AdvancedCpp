#include<iostream>
using namespace std; 

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[9999999999999999];
    }    
};

int main() {
    try{
        CanGoWrong wrong;
    } catch(bad_alloc &e) {
        cout << "Caught Exception: " << e.what() << endl;
    }

    cout << "Still running" << endl;

    return 0;
}
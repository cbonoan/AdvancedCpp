#include <iostream>
#include <exception>

using namespace std; 

void goesWrong() {
    bool error1Detected = false; 
    bool error2Detected = true;

    if(error1Detected) {
        throw bad_alloc();
    }
    if(error2Detected) {
        throw exception();
    }
}

int main() {

    try {
        goesWrong();
    } catch(bad_alloc &e) {
        cout << "Catching bad_alloc: " << e.what() << endl; 
    } catch(exception &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
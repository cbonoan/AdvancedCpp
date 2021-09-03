#include<iostream>
using namespace std;

void mightGoWrong() {

    bool error = true; 

    if(error) {
        throw "Something went wrong";
    }
}

int main() {

    try {
        mightGoWrong();
    } catch(int e) {
        cout << "Error code: " << e << endl;
    }

    return 0;
}
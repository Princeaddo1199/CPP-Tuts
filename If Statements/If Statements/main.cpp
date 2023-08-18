#include <iostream>

using namespace std;

int main (){
    int age;
    
    cout << "Hello, welcome to school. Please enter your age"<< endl;
    cin >> age;
    
    if (age >= 15) {
        cout << "You are welcome to school"<<endl;
    } else {
        cout << "You are not a student of this school"<< endl;
    }
    
}

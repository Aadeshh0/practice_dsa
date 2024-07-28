#include <iostream>

using namespace std;
int main(){
    int age;
    cin >> age;
    if (age<18){
        cout<<"you are a minor";
    }
    else{
        cout<<"you are an adult";
    }
    return 0;
}
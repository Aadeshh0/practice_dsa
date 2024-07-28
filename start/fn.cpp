#include <iostream>
using namespace std;

void printName(string name){
    cout << "hey, " << name << endl;
}

int sum(int num1, int num2){
    int num3 = num1 + num2;
    cout << "the sum of " << num1 << " and " <<num2 << " is " << num3<< endl;
    return num3;

}
int main(){
    // functions types - void, return, para, non para
    string name;
    cin >> name;
    printName(name);

    sum(5,6);

    return 0;

}
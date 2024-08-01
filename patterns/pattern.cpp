#include <iostream>
using namespace std;

void pattern1(){
    for (int i =0; i< 5; i++){
        //space
        for (int j = 0; j<5-i+1; j++){
            cout<< "_";
        }
        //star
        for (int j = 0; j<2*i+1; j++){
            cout<< "*";
        }

        //space
        for (int j = 0; j<5-i+1; j++){
            cout<< "_";
        }

        cout << endl;
    }
}
void pattern2(){
    for (int i =0; i<5; i++){
        for(int j=0; j<i; j++){
            cout << "_";
        }
        for(int j=0; j<((2*5)-((2*i)+1)); j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << "_";
        }
        cout << endl;
    }
}
int main(){
    pattern1();
    // pattern2();
    return 0;
}
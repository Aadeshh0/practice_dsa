#include<iostream>
using namespace std;

void pattern10(int n){
    for (int i=1; i<=2*n-1; i++){
        int stars = i;
        if (i>n) stars = 2*n-i;
        for (int j=1; j<=stars; j++){
            cout<<"x";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int start = 0;
    for(int i=0; i<n; i++){
        if (i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1- start;
        }
        cout << endl;
    }
}

void pattern12(int n){
    int space = 2*(n-1);
    for (int i=1; i<=n; i++){
        //nos
        for(int j=1; j<=i; j++){
            cout<< j;
            // cant declare the value of space inside the loop
            // it will remain same

        }
        //space
        for (int j=1;j<=space; j++){
            cout<<"_";
        }
        //nos
        for(int j=i; j>=1; j--){
            cout<< j;
        }
        cout<<endl;
        space = space - 2;
        //need to reduce the space value outside of nested for loop 
        // for next line otherwise same loop iteration will happen
        // 
    }
}

void print13(int n){
    int count;
    for( int i=1; i<=n; i++){
        count = 1;
        for(int j=1; j<n; j++){
            cout << count << " " ;
            count++;
        }
        cout << endl;
    }
}
int main(){
    int ip;
    cin >> ip;
    print13(ip);
    return 0;
}
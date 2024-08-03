#include<iostream>
using namespace std;

void explainPairs(){
    // explaining pairs:
    // to declare pairs or store 2 values in a variable 
    // a tuple of numbers - 2 nos

    pair<int, int> p = {2,3}
    cout << p.first << " " << p.second << endl;

    // nested pairs:
    pair<int, pair<int, int>>  p = {1, {2,3}};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    pair<int, int> arr[] = {{1,2}, {4,3}, {5,7}};
    cout << arr[1].second << endl;

    // to print 

    // we can store a 
}

void vectors(){
    // vectors arre dynamic in nature in terms of size
    // used for questions or prob where we are uncertain about the data size

    

}

int main(){
    return  0;
}







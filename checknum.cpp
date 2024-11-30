#include <iostream>
using namespace std;
    int main() {
        int a;
        cout<<"Enter your num..."<<endl;
        cin>>a;
        if (a>0){
            cout<<"Num is positive";
        }
        else if (a<0){
            cout<<"Num is negative";
        }
        else{
            cout<<"Num is zero like you";
        }
        return 0;
    }
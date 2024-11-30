#include <iostream>
using namespace std;
    int main() {
        char a;
        cout<<"Enter your capital character,,,"<<a<<endl;
        cin>>a;
        if(a=='A' || a=='a'){ 
           cout<<"Vowel is A"<<endl; 
        }
       else if(a=='E'||a=='e'){
        cout<<"Vowel is E"<<endl;
       }
       else if(a=='I'||a=='i'){
        cout<<"Vowel is I"<<endl;
       }
        else if(a=='O'||a=='o'){
        cout<<"Vowel is O"<<endl;
       }
        else if(a=='U'||a=='u'){
        cout<<"Vowel is U"<<endl;
       }
       else{
        cout<<"Character is consonent"<<endl;
       }
    return 0;

    }
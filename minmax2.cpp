#include <iostream>
using namespace std;
int main()  {
int a,b;
cout<<"Enter your values..."<<endl;
cin>>a>>b;
if(a>b){
    cout<<"Greater is="<<a<<endl;
    cout<<"Smaller is="<<b<<endl;
}
else{
     cout<<"Greater is="<<b<<endl;
    cout<<"Smaller is="<<a<<endl;
}
return 0;
}
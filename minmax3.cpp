#include <iostream>
using namespace std;
int main()  {
int a,b,c;
cout<<"Enter your values..."<<endl;
cin>>a>>b>>c;
if(a>b){
   if(a>c){
   cout<<"Greater is="<<a<<endl; 
}
}
if(b>a){
   if(b>c){
   cout<<"Greater is="<<b<<endl; 
}
}
if(c>a){
   if(c>b){
    cout<<"Greater is="<<c<<endl; 
}
}
if(a<b){
   if(a<c){
   cout<<"Smaller is="<<a<<endl; 
}
}
if(b<a){
   if(b<c){
   cout<<"Smaller is="<<b<<endl; 
}
}
if(c<a){
   if(c<b){
    cout<<"Smaller is="<<c<<endl; 
}
}
return 0;
}
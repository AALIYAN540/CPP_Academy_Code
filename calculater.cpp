#include <iostream>
using namespace std;
    int main() {
        int a,b;
        float r;
        char x;
        cout<<"Enter yuor num,,"<<endl;
        cin>>a>>b;
        cout<<"Enter your operater="<<endl;
        cin>>x;
        if(x=='+'){
            r = a+b;
            cout<<"Sum of num="<<r;
        }
        else if(x=='-'){
            r = a-b;
            cout<<"sub of num="<<r;
        }
        else if(x=='*'){
            r = a*b;
            cout<<"Mul of num="<<r;
        }
        else if(x=='/'){
            r = a/b;
            cout<<"Div of num="<<r;
        }
        else if(x=='%'){
            r = a%b;
            cout<<"Mod of num="<<r;
        }
        else{
            cout<<"Ap ka dia gya oprater hmari pahnch sa bahir ha"<<endl;
        }
        return 0;
    }
#include <iostream>
using namespace std;
int main()  {
    int salary,gigs,investments,other,totalincome;
    cout<<"Enter your monthly salary="<<endl;
    cin>>salary;
    cout<<"Enter your income from freelance gigs="<<endl;
    cin>>gigs;
    cout<<"Enter your income from investments="<<endl;
    cin>>investments;
    cout<<"Enter your other income="<<endl;
    cin>>other;
    totalincome= salary+gigs+investments+other;
    cout<<"your total monthly income is:"<<totalincome<<endl;

    int Rent,Groceries,Transportation,Entertainment,Othars,totalexpenses;
    cout<<"Enter your rent/mortgage expenses:"<<endl;
    cin>>Rent;
    cout<<"Enter your groceries expenses:"<<endl;
    cin>>Groceries;
    cout<<"Enter your transportation expenses:"<<endl;
    cin>>Transportation;
    cout<<"Enter your entertainment expenses:"<<endl;
    cin>>Entertainment;
    cout<<"Enter any other expensesL:"<<endl;
    cin>>Othars;
    totalexpenses=Rent+Groceries+Transportation+Entertainment+Othars;
    cout<<"Your total monthly expenses are:"<<totalexpenses<<endl;
    float x;
    x= totalincome-totalexpenses;
    if(x>0){
        cout<<"Your monthly income:"<<totalincome<<endl;
        cout<<"Your monthly expenses:"<<totalexpenses<<endl;
        cout<<"You are saving "<<x<<" this month.Good Gob!"<<endl;
    }   
    else{
        cout<<"Your monthly income:"<<totalincome<<endl;
        cout<<"Your monthly expenses:"<<totalexpenses<<endl;
        cout<<"Warning: You are overspending! Consider reducing your entertainment or other non-essential expenses."<<endl;
    }
    char gv;
    int goal, save;
    cout<<"Enter your financial goal (v = vacation, c = car,e = emergency fund,o = others):"<<endl;
    cin>>gv;
    if(gv=='v'){
    cout<<"Enter the target amount you want to save:"<<endl;
    cin>>goal;
    cout<<"Enter how much you can save per month:"<<endl;
    cin>>save;
    float val = goal/save;
    if(val>0){
        cout<<"It will take you "<<val<<" months to reach your vacation goal!"<<endl;
    }
    else{
        cout<<"you al ready acheive the goal."<<endl;
    }
    }
     if(gv=='c'){
    cout<<"Enter the target amount you want to save:"<<endl;
    cin>>goal;
    cout<<"Enter how much you can save per month:"<<endl;
    cin>>save;
    float val = goal/save;
    if(val>0){
        cout<<"It will take you "<<val<<" months to reach your vacation goal!"<<endl;
    }
    else{
        cout<<"you al ready acheive the goal."<<endl;
    }
    }
     if(gv=='e'){
    cout<<"Enter the target amount you want to save:"<<endl;
    cin>>goal;
    cout<<"Enter how much you can save per month:"<<endl;
    cin>>save;
    float val = goal/save;
    if(val>0){
        cout<<"It will take you "<<val<<" months to reach your vacation goal!"<<endl;
    }
    else{
        cout<<"you al ready acheive the goal."<<endl;
    }
    }
     if(gv=='o'){
    cout<<"Enter the target amount you want to save:"<<endl;
    cin>>goal;
    cout<<"Enter how much you can save per month:"<<endl;
    cin>>save;
    float val = goal/save;
    if(val>0){
        cout<<"It will take you "<<val<<" months to reach your vacation goal!"<<endl;
    }
    else{
        cout<<"you al ready acheive the goal."<<endl;
    }
    }
    float rper = Rent*100/totalincome;
    float gper = Groceries*100/totalincome;
    float tper = Transportation*100/totalincome;
    float eper = Entertainment*100/totalincome;
    if(rper>40){
        cout<<"Consider finding a more affordable place."<<endl;
    }
    else{
        cout<<"Your rent/mortgage is "<<rper <<"%"<<" of your income. You're doing well with your housing budget!"<<endl;
    }
    if(gper>20){
        cout<<"Try meal planning to reduce costs."<<endl;
    }
    else{
        cout<<"Your groceries are "<<gper<<"%"<<" percentage of your income. Good job on controlling food expenses."<<endl;
    }
    if(tper>10){
        cout<<"Look into public transportation."<<endl;
    }
    else{
        cout<<"Your transportation is "<<tper<<"%"<<" percentage of your income. Keep up the good work!"<<endl;
    }
    if(eper>10){
        cout<<"Cut down on entertainment spending."<<endl;
    }
    else{
        cout<<"Your entertainment is "<<eper<<"%"<<" percentage of your income. Consider reducing your entertainment spending."<<endl;
    }
    float per = totalexpenses*100/totalincome;
    if(per<50){
        cout<<"Conservative spender."<<endl;
    }
    if(50<per<80){
        cout<<"Moderate spender."<<endl;
    }
    if(per>80){
       cout<<"Extravagant spender."<<endl;
    }
    else{
        cout<<"Good savings."<<endl;
    }
    int in , out;
    cout <<"Enter how much you save per month:"<<endl;
    cin>>in;
    cout<<"Enter the number of months you want to calculate savings for:"<<endl;
    cin>>out;
    cout<<"Your total savings after 12 months will be: "<<in*out;
    return 0;
}
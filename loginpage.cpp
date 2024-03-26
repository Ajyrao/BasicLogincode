#include<iostream>
using namespace std;
int main(){
    string username;
    string password;
    int loginattempt=0;
    while(loginattempt<5){
        cout<<"enter the user name"<<endl;
        cin>>username;
        cout<<"enter the password"<<endl;
        cin>>password;
        if(username=="ajay" && password=="12345"){
            cout<<"welcome";
            break;
        }
        else{
            cout<<"invalid username and password"<<endl;
        }


    }
if(loginattempt==5){
    cout<<"Too many attempt ";
    return 0;
}
cout<<"Thankyou for login"<<endl;


}
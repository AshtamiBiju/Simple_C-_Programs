#include <iostream>
#include<cstdlib>
using namespace std;

//Function to create an account
double create(){
    string username,password;
    cout<<"Enter your desired username:";
    cin>>username;
    cout<<"Enter  a Strong password:";
    cin>>password;
    cout<<"Your account has been created!!"<<endl;
    double balance =0.0;
    return balance;
}

//Function to deposit money
double deposit(double bal){
    double amount;
    cout<<"Enter the amount to deposit:";
    cin>>amount;
    if(amount<=0){
        cout<<"Invalid deposit Amount!"<<endl;
    }
    else{
        bal+=amount;
        cout<<"Amount deposited successfully! Your balance is:"<<bal<<endl;
    }
    return bal;
}

//Function to withdraw money
double withdraw(double bal){
    double amount;
    cout<<"Enter the amount to withdraw:";
    cin>>amount;
    if(amount<=0){
        cout<<"Invalid Withdrawal Amount!"<<endl;
    }
    else if(amount>bal){
        cout<<"Insufficient amount!"<<endl;
    }
    else{
        bal-=amount;
        cout<<"Amount withdrawn successfully! Your balance is :"<<bal<<endl;
    }
    return bal;
}

//Function to check balance
void check(double bal){
    cout<<"Your current balance is:"<<bal<<endl;
}
//Main Function
int main(){
    char choice;
    double balance;
    balance=create();
    int n;
    while(true){
        cout<<"Do you want to\n1)Deposit\n2)Withdraw\n3)Check Balance\n4)Exit";
        cin>>n;
        if(n==1){
            balance=deposit(balance);
        }
        else if(n==2){
            balance=withdraw(balance);
        }
        else if(n==3){
            check(balance);
        }
        else if(n==4){
            cout<<"Thank you"<<endl;
            exit(0);
        }
        else{
            cout<<"Invalid choice!!"<<endl;
        }
    }
    return 0;
}
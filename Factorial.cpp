//Write a program to find factorial using recursion

#include<iostream>
using namespace std;

long fact(long n){
    if(n==1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}


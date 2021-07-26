//Write a program to print Armstrong number between a given range

#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int sum=0;
    int temp=n;
    while(n>0){
        int r= n % 10;
        sum+=(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a,b;
    cout<<"Enter the upper & lower range"<<endl;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isArmstrong(i)){
            cout<<i<<" is Armstrong"<<endl;
        }
    }
    return 0;
}
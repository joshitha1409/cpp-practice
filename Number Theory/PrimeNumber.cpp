// Program to check whether a number is prime
// Language: C++

// for(int i=2;i*i<=num;i++) -> we can use this loop as well since we check from 2 to underroot n.. so instead of underroot we square on both sides :o

#include<iostream>
using namespace std;

int main(){
    int num;
    bool isPrime=true;
    cout<<"enter the number: ";
    cin>>num;

    if(num<=1){
            cout<<"not prime"; 
            return 0;
        }
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            isPrime=false;
            break;
        }
        else{
            isPrime=true;
        }
    }
    if(isPrime==true){
        cout<<"Prime";
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}

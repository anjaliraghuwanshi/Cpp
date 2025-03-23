#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr an integer n :";
    cin>>n;
    bool flag = true;//if true is means it is a prime
    for(int i=2; i<n/2; i++){
        if(n%i==0){
            flag =false;//false means it is not a prime
        }
    }
    if(flag==true)cout<<"it is a prime";
    else{
        cout<<"composite";
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Integer Number : ";
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"yes it is divisible by 5 and 3 : ";
    }
    else{
        cout<<"no it is not divisible by 5 and 3 : ";
    }
}
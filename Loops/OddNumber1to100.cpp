#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer n :";
    for(int i=2; i<=100; i++){
        if (n%2!=0){
            cout<<i<<" ";
        }
    }
}
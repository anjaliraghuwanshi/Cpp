#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter a number : ";
    cin>>r;
    int rev = 0;
    while(r!=0){
        int ld = r%10;
        r*=10;
        r+=ld;
        r/=10;
    }
    cout<<r;
}
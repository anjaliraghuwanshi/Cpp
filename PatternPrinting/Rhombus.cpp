#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        
        }
        for(int k=1; k<=n-i; k++){
            cout<<"-";
        }
        cout<<endl;
    }

}
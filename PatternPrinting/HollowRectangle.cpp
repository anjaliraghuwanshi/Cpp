#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    int m;
    cout<<"Enter the number of column :";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==5 || j==6)cout<<"*";
            else{
                cout<<"#";
            }
            cout<<endl;
        }
    }
}
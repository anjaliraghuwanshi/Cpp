#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter The First Side Of Triangle :";
    cin>>a;
    cout<<"Enter The Second Side Of Triangle :";
    cin>>b;
    cout<<"Enter The Third Side Of Triangle :";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"valid triangle : ";
    }
    else{
        cout<<"it is not valid triangle : ";
        
    }
    
}
#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price :";
    cin>>sp;
    if(sp>cp){//profit
        cout<<"Profit is : "<<endl;
 }
    else if(sp<cp){//loss
        cout<<"loss is : "<<endl;

    }
    else{//no loss no profit
        cout<<"no loss no profit :";

    }
}
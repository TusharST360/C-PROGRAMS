#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter last 5 digits of your PRN";
    cin>>a;
    while(a>6)
    {
        b=a%10;
        a=a/10;
        cout<<b<<endl;
    }
    cout<<a;
    return 0;
}
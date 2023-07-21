/*  PRN - 22070123125
    Experiment 3(a)
*/    
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
/* OUTPUT
Enter last 5 digits of your PRN:23125
5
2
1
3
2
*/

/*  PRN - 22070123125
    Experiment 3(b)
*/    
#include<iostream>
using namespace std;
int main(){
    float m1,m2,m3,m4,m5,sum,avg;
    cout<<"Enter the marks of subject 1:";
    cin>>m1;
    cout<<"Enter the marks of subjct 2:";
    cin>>m2;
    cout<<"Enter the marls of subject 3:";
    cin>>m3;
    cout<<"Enter the marks of subject 4:";
    cin>>m4;
    cout<<"Enter the marks of subject 5:";
    cin>>m5;
    avg=(m1+m2+m3+m4+m5)/5;
    if (avg<100 && avg>=90){
        cout<<"O GRADE";
    }
    else if (avg<=89 && avg>=80){
        cout<<"A+ GRADE";
    }
    else if (avg<=79 && avg>=70){
        cout<<"A GRADE";
    }
    else if (avg<=69 && avg>=60){
    cout<<"B GRADE";
    }
    else if(avg<=59 && avg>=50){
        cout<<"C GRADE";
    }
    else {
        cout<<"FAIL";
    }
    return 0;  
}
/*  OUTPUT
Enter the marks of subject 1:50
Enter the marks of subjct 2:60
Enter the marls of subject 3:40
Enter the marks of subject 4:50
Enter the marks of subject 5:66
C GRADE
*/

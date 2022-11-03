#include <iostream>
using namespace std;

int main()
{
    int num,digit,sum=0,temp,i,f=1;

    cout<<"Enter A Number To Check Whether It Is A Strong Number Or Not"<<endl;
    cin>>num;

    temp=num;

    while(num!=0)
    {
        digit=num%10;
        for(i=1;i<=digit;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        num=num/10;
        f=1;
    }

    if(temp==sum)
        cout<<temp<<" Is A Strong Number"<<endl;
    else
        cout<<temp<<" Isn't A Strong Number"<<endl;
}
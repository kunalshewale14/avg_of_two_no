#include <iostream>
using namespace std;

int main() 
{
    int num,n,sum=0,avg;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<"Enter the number:"<<endl;
        cin>>num;
        sum=sum+num;
        i++;
    }
    avg=sum/n;
    cout<<"Average is = "<<avg<<endl;
    return 0;
}

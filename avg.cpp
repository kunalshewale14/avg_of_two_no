#include <iostream>

using namespace std;

int main()
{
    int n,sum = 0,avg;
    cout<<"Enter the no of elements:"<<endl;
    cin>>n;
    int a[n],i;
    cout<<"Enter the elements:"<<endl;
    for(i = 0 ; i < n ; i++)
    {
      cin>>a[i];
    }
    
    for(i = 0 ; i < n ; i++)
    {
      sum = sum + a[i];
    }
    avg = sum/n;
    cout<<"Average is = "<<avg<<endl;
    return 0;
}

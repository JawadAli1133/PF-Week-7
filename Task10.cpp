#include<iostream>
using namespace std;
main()
{
    int sum=0;
    for(int i=1;i<=100;i=i+1)
    {
       sum = sum+i;
    }
    cout<<"Sum of first 100 natural numbers is: "<<sum;
}
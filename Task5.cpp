#include<iostream>
using namespace std;
int Sum(int num);
main()
{
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   int result = Sum(num);
   cout<<"Sum of digits in number "<<num<<" is: "<<result<<endl;
}
   int Sum(int num)
   {
      int sum =0;
      int counter=0;
      while(num>0)
      {   
        int rem = num%10; 
        num = num/10;
        sum = sum+rem;
      }
      return sum;
   }
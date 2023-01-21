#include<iostream>
using namespace std;
int Great1(int num2);
int Great2(int num1);
main()
{
   int num1,num2;
   cout<<"Enter first number: ";
   cin>>num1;
   cout<<"Enter second number: ";
   cin>>num2;
   int result1 = Great1(num1);
   int result2 = Great2(num2);
   int lcm1 = (num1*num2)/result1;
}

   int Great1(int num1)
   {
       int result;
       for(int i=1;i<=num1;i++)
       {
           if(num1%i==0)
           {
              result = i;
           }                 
       }
       return result;
   }

    int Great2(int num2)
   {
       int result1;
       for(int i=1;i<=num2;i++)
       {
           if(num2%i==0)
           {
              result1 = i;
           }                 
       }
       return result1;
   }

   

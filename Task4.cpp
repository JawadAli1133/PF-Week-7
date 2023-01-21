#include<iostream>
using namespace std;
void getDigit(int num,int digit);
main()
{
   int num,digit;
   cout<<"Enter a number: ";
   cin>>num;
   cout<<"Enter the digit: ";
   cin>>digit;
   getDigit(num,digit);
}
   void getDigit(int num,int digit)
   {
      int result;
      int counter=0;
      while(num>0)
      {  
        int rem = num%10; 
        num = num/10;
        if(rem==digit)
        {
           counter = counter+1;   
        }     
      }
        cout<<"Total number of "<<digit<<"s are: "<<counter;       
    }
   
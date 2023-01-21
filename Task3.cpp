#include<iostream>
using namespace std;
void digit(int num);
main()
{
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   digit(num);
}
   void digit(int num)
   {
      int result;
      int counter=0;
      while(num>0)
      {   
        num = num/10;
        counter = counter+1;
      }
      cout<<"Total digits are: "<<counter;
   }
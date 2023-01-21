#include<iostream>
using namespace std;
void printFiboNacchi(int);
main()
{
    int range;
    cout<<"Enter range: ";
    cin>>range;
    printFiboNacchi(range);
}
   void printFiboNacchi(int range)
   {
      int num1=0;
      int num2=1;
      int sum=0;
      cout<<num1<<endl;
      cout<<num2<<endl;
      for(int i=1;i<=range-2;i++) 
      {
        sum = num1+num2;        
        cout<<sum<<" "<<endl;
        num1 = num2;
        num2 = sum;    
      } 
   }
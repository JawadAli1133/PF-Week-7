#include<iostream>
using namespace std;
float GCD1(float num1,float num2);
float GCD2(float num1,float num2);
main()
{
     float num1,num2;
     cout<<"Enter first number: ";
     cin>>num1;
     cout<<"Enter second number: ";
     cin>>num2;
     float result1 = GCD1(num1,num2);
     float result2 = GCD2(num1,num2);
     float LCM;
     if(num1>num2)
     {
        LCM = (num1*num2)/result1;
        cout<<"LCM is: "<<LCM;
     }

     if(num1<num2)
     {
        LCM = (num1*num2)/result2;
        cout<<"LCM is: "<<LCM;
     }
}

    float GCD1(float num1,float num2)
    {
        while(num1>num2)
        {    
            num1 = num1-num2;        
        }
        return num1;
            
    }

    float GCD2(float num1,float num2)
    {
        while(num2>num1)
        {
            num2 = num2-num1;
        }
        return num2;
            
    }
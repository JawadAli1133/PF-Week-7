#include<iostream>
using namespace std;
float calculateMoney(float money,float year);
main()
{
   float money,year;
   cout<<"Enter the inherited money: ";
   cin>>money;
   cout<<"Enter the year ";
   cin>>year;
   float result = calculateMoney(money,year);
   float diff = result-money;
   if(diff<0)
   {
      cout<<"Yes he will survive with $"<<(-1)*diff<<" left"<<endl;
   }
   
   else
   {
      cout<<"No Ivan need $"<<diff<<" more to survive";
   }
}

     float calculateMoney(float money,float year)
     {
        float count1,count2;
        float evenPrice,oddPrice; 
        float result=0;                                                 
        for(int i=1800;i<=year;i=i+1)
        {
            if(i%2==0)
            {
                count1 = count1+1;
                evenPrice = (count1)*12000;
            }

            else
            {
                count2 = count2+1;
                oddPrice = (count2)*(12000+(50*(18+(count2))));
            }
        }     
        result = evenPrice+oddPrice;
        return result;
     }
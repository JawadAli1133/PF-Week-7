#include<iostream>
using namespace std;
float calculateMoney(float age, float macPrice, float unitPrice);
main()
{
    float age;
    float macPrice,unitPrice;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter price of washing machine: ";
    cin>>macPrice;
    cout<<"Enter unit price of toy: ";
    cin>>unitPrice;
    float result= calculateMoney(age,macPrice,unitPrice);
    float diff = result - macPrice;
    if(diff>0)
    {
        cout<<"Yes! $"<<diff<<" dollars left"<<endl;
    }
    if(diff<0)
    {
        cout<<"No! need $"<<(-1)*diff<<endl;
    }

}

    float calculateMoney(float age, float macPrice, float unitPrice)
    {
         float evenDollar,i,count1 =0,sum1=0;
         for( i=2;i<=age;i=i+2)
         {
            evenDollar = (i*5); 
            sum1 = sum1+evenDollar;
            count1 = count1+1; 
         }
         float evenDollar1 = sum1-count1;
         float sum = 0,count=0;
         float oddDollar;
         for(int j=1;j<=age;j=j+2)
         {
            if(j%2!=0)
            {
                count = count+1;
            }     
         }
         oddDollar = count*unitPrice;
         sum = evenDollar1 + oddDollar;
         return sum;     
    }

 
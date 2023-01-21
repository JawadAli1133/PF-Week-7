#include<iostream>
using namespace std;
void printPercentage(float range);
main()
{
    float range;
    cout<<"Enter range: ";
    cin>>range;
    printPercentage(range);

}
 
   void printPercentage(float range)
   {
      float num;
      float count1 =0;
      float count2 =0;
      float count3 =0;
      float count4 =0;
      float count5 =0;
      float p1,p2,p3,p4,p5;
      for(float i=1;i<=range;i++)
      {
         cout<<"Enter number: ";
         cin>>num;

             if(num<200)
             {
                 count1 = count1+1;
             }
             if(num>=200 && num<400)
             {
                 count2 = count2+1;
             }
             if(num>=400 && num<600)
             {
                count3 = count3 +1;
             }
             if(num>=600 && num<800)
             {
                 count4 = count4+1;
             }
             if(num>=800 && num<1000)
             {
                 count5 = count5+1;
             }
             p1 = (count1/range)*100;
             p2 = (count2/range)*100;
             p3 = (count3/range)*100;
             p4 = (count4/range)*100;
             p5 = (count5/range)*100;
             

      }
      cout<<p1<<endl;
      cout<<p2<<endl;
      cout<<p3<<endl;
      cout<<p4<<endl;
      cout<<p5<<endl;
      
   }
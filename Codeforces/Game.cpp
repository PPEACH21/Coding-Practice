#include <iostream>
using namespace std;
int main()
{
   int teams,d=0;
 
   cin >>teams;
   int home[teams],guest[teams];
   for(int i=0;i<teams;i++)
   {
       cin>>home[i]>>guest[i];
   }
   for(int j=0;j<teams;j++)
   {
       for(int h=0;h<teams;h++)
       {
           if(h!=j)
           {
               if (home[j]==guest[h])
                d++;
           }
       }
   }
       cout<<d;
   }
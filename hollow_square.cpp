/* ****
   *  *
   *  *
   ****  */
#include<iostream>
using namespace std;
int main()
{
   int n=4;
   for (int  i = 0; i < 3*n; i=i+3)
   {
      for (int j = 0; j < n; j++)
      {
         if(i==0||i==3*n-3)
         {
            cout<<"*";
         }
         else if(j==0||j==n-1)
         {
            cout<<"*";
         }
         else
         cout<<" ";

      }
      cout<<endl;
      
   }
   return 0;
   
}
/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15  */
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=5; i++)
    {
        static int x=1;
       for (int j = 1; j<=i; j++)
       {
           cout<<x<<" ";
           x++;
       }
       cout<<endl;
    }
    return 0;
}
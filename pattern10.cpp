/* 1      1
   12    21
   123  321
   12344321 */
//difficullt question
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int x=i;
        for(int j=1;j<=8;j++)
        {
            if(j<=4){
                if(j<=i)
                cout<<j;
                else
                cout<<" ";
            }
            else
            {
                if(j>=9-i)
                {
                  cout<<x;
                  x--;
                }
                else
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
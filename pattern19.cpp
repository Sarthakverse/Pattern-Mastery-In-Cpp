/* **********
   ****  ****
   ***    ***
   **      **
   *        *
   *        *
   **      **
   ***    ***
   ****  ****
   **********  */
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(i<=5)
            {
                if(j<=6-i||j>=5+i)
                {
                    cout<<"*";
                }
                else
                cout<<" ";
            }
            if(i>5)
            {
                if(j<=i-5||j>=16-i)
                {
                    cout<<"*";
                }
                else
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
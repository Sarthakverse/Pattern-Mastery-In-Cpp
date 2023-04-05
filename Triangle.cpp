/*    *
     ***
    *****
   *******
  *********  */
#include<iostream>
 using namespace std;
 int main()
 {
    for (int i = 5; i <=9; i++)
    {
        for (int j = 1; j <=10; j++)
        {
           if(j>=10-i&&j<=i)
           cout<<"*";
           else
           cout<<" ";
        }
        cout<<endl;
    }
    return 0;
 }
/* 12345
   1234
   123
   12
   1
    */
   #include<iostream>
   using namespace std;
   int main()
   {
   
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j<=6-i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
   }
   //time complexity==> O(15)
/* A
   BB
   CCC
   DDDD
   EEEEE */
   #include<iostream>
   using namespace std;
   int main()
   {
     for (int i = 0; i < 5; i++)
     {
        static int x=65;
        for (int j = 0; j <= i; j++)
        {
            char c=x;
           cout<<c;
        }
        x++;
        cout<<endl;
     }
     return 0;
   }
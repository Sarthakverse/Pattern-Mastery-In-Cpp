/* A B C D E
   A B C D 
   A B C
   A B
   A         */
   #include<iostream>
   using namespace std;
   int main()
   {
      for (int i =1; i <= 5; i++)
      {
        int x=65;
        for(int j=1;j<=5;j++)
        {
            
            char c=x;
            if(j<=6-i)
            {
              cout<<c;
              x++;  
            }
        }
        cout<<endl;
        
      }
    return 0;  
   }
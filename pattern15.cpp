/*  A
   ABA
  ABCBA
 ABCDCBA  */
 #include<iostream>
 using namespace std;
 int main()
 {

   int left=3,right=3,mid=3;
   for(int i=0;i<=3;i++){
      char c='A';
      for(int j=0;j<7;j++){
         if(j>=left && j<=right){
            if(j<mid){
               
               cout<<(char)(c);
               c=(char)(c+1);
            }else{
               
                cout<<(char)(c);
                c=(char)(c-1);
            }
            
         }else{
            cout<<" ";
         }

      }
      left=left-1;
      right=right+1;
      cout<<endl;
   }
   return 0;
   

 }
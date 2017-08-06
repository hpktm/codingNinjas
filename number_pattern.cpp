/*
Print the following pattern for the given number of rows.
Pattern for N = 3
333
233
123
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
5
Sample Output :
55555
45555
34555
23455
12345

*/


#include<iostream>
using namespace std;


int main(){

      int i,j,a;
      cin>>a;
       for(i=a;i>0;i--)
      {
          for(j=i;j<=a;j++)
          {
              cout<<j;
          }
          for(j=1;j<i;j++)
          {
              cout<<a;
          }
          cout<<endl;
      }
  
}



/*
Print the following pattern for the given number of rows.
Pattern for N = 4
1111
000
11
0
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
5
Sample Output :
11111
0000
111
00
1

*/

void printPatt(int n)
{
   int i,j;
   for(i=0;i<n;i++)
   {
       if((i%2)==0)
       {
           for(j=n;j>i;j--)
           {
               cout<<"1";
           }
       }
       else
       {
           for(j=n;j>i;j--)
           {
               cout<<"0";
           }
       }
       cout<<endl;
   }
}

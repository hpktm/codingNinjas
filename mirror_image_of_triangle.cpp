/*

Print the following pattern for the given number of rows.
Pattern for N = 2
  0
 101
21012
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
6
Sample Output :
      0
     101
    21012
   3210123
  432101234
 54321012345
6543210123456

*/


void printPatt(int n)
{
   int i,j;
   for(i=0;i<=n;i++)
    {
       for(j=n-1;j>=i;j--)
       {
           cout<<" ";
       }
       // cout<<"*";/*
        for(j=i;j>=0;j--)
        {
         cout<<j;
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }

        cout<<endl;
    }

   
}

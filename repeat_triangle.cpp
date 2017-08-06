/*

Print the following pattern for the given number of rows.
Pattern for N = 3
ABCCBA
 ABBA
  AA
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
4
Sample Output :
ABCDDCBA
 ABCCBA
  ABBA
   AA
*/

void space(int n,int i)
{
    int j;
    for(j=n;j>i;j--)
          {
              cout<<" ";
          }
        
}
void printPatt(int n)
{
    int i,j,k=0,l;
    for(i=n;i>0;i--)
    {
        space(n,i);
      for(j=1;j<=i;j++)
        {
         cout<<char(64+j);
        }
        for(j=i;j>0;j--)
        {
            cout<<char(64+j);
        }
         // cout<<".";
        cout<<endl;
    }
}

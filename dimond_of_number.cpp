/*

Print the following pattern for the given number of rows.
Pattern for N = 7
    1
   123
  12345
 1234567
  12345
   123
    1
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
5
Sample Output :
   1
  123
 12345
  123
   1


*/

void printPatt(int n)
{
    int i,j,k=1;
    //cin>>n;
    int d=(n/2)+1;
    for(i=0;i<d;i++)
    {
        for(j=d;j>i+1;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=k;j++)
        {
            cout<<j;
        }
        k+=2;
        cout<<endl;
    }
    k-=2;
    for(i=0;i<d;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" ";
        }
        k-=2;
        for(j=1;j<=k;j++)
        {
            cout<<j;
        }
        cout<<endl;

    }
}

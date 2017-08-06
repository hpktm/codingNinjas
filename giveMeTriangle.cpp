/*
Print the following pattern for the given number of rows.
Pattern for N = 4
****void printPatt(int n)
{
    int i,j,k=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=k;j>0;j--)
        {
            cout<<"*";
        }
        k--;
        cout<<"\n";
    }
}

 ***     
  **
   *
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
5
Sample Output :
 *****
  ****
   ***     
    **
     *
*/

void printPatt(int n)
{
    int i,j,k=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=k;j>0;j--)
        {
            cout<<"*";
        }
        k--;
        cout<<"\n";
    }
}

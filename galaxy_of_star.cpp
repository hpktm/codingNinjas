/*
Print the following pattern for the given number of rows.
Pattern for N = 7
*
**
***
****
***
**
*
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
5
Sample Output :
 *
 **
 ***
 **
 *


*/


void printPatt(int n)
{
    int n1=n/2+1;
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<'*';
            
        }cout<<endl;
        
    }
    for(int i=n1-1;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<'*';
            
        }
        cout<<endl;
        
    }
    
}

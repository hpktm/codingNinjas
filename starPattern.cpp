/*
Print the following pattern for the given number of rows.
Pattern for N = 4
****
***
**
*
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
   5
Sample Output :
* * * * *
* * * *  
* * *
* *
*
*/
void printPatt(int n)
{
    int i=1,j=1,k=n;
    for(i=1;i<=n;i++)
    {
        for(j=k;j>0;j--)
        {
            cout<<"*";
        }
        k--;
        cout<<"\n";
    }
}
int main()
{
int n;
cin>>n;
printPatt(n);
reutrn 0;
}

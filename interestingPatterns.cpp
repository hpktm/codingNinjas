/*

Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
8
Sample Output :
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/
void printPatt(int n)
{
    int i,j;
    for(i=n;i>0;i--)
    {
        for(j=i;j<=n;j++)
        {
            cout<<char(64+j);
        }
        cout<<endl;
    }
}

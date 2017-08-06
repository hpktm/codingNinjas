
/*
Print the following pattern for the given number of rows.
Pattern for N = 3
1
23
4567
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
5
Sample Output :
1
23 
4567
89123456
7891234567891234
*/


void printPatt(int n)
{
   int i,j,k,b,c;
    k=c=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=c;j++)
        {
            if(k>9)
            {
                k=1;
            }
            cout<<k;k++;
        }
        c=c*2;
        cout<<endl;
    }
}

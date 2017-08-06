/*
Print the following pattern for the given number of rows.
Pattern for N = 5
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15
Input format : N (Total no. of rows)
Output format : Pattern in N lines
Sample Input :
7
Sample Output :
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
21 20 19 18 17 16
22 23 24 25 26 27 28
*/

void printPatt(int n)
{
    int temp=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(int j=1;j<=i;j++)
            cout<<temp++<<' ';
            temp=temp+i;
            }
            else
            {
                for(int j=1;j<=i;j++)
                cout<<temp--<<' ';
                temp+=i+1;
                }
                cout<<endl; 
                }
    }

/*

Print the following pattern for the given number of rows.
Assume, N is always odd.
Pattern for N = 7
   *
  ***
 *****
*******
 *****
  ***
   *
Input format : N (Total no. of rows and can only be odd)
Output format : Pattern in N lines
Sample Input :
5
Sample Output :
  *
 ***
*****
 ***
  *

*/




 void printPatt(int n)
{
	int n1=n/2+1;
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n1-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	int n2=n-n1;
	for(int i=n2;i>=1;i--)
	{
		for(int j=1;j<=n1-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=2*i-1;j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
}

/*
Given an integer n, find and print the factorial of given integer
*/

#define MAX 1000000
int mul(int x,int res[],int n)
{
    int carry=0;
    for(int i=0;i<n;i++)
    {
        int p=res[i]*x+carry;
        res[i]=p%10;
        carry=p/10;
    }
    while(carry)
    {
        res[n]=carry%10;
        carry=carry/10;
        n++;
    }
    return n;
}
void fact(int n)
{
	int res[MAX];
	res[0]=1;
	
	int res_size=1;
	for(int x=2;x<=n;x++)
	{
	    res_size=mul(x,res,res_size);
	}
	for(int i=res_size-1;i>=0;i--)
	{
	    cout<<res[i];
	}
}

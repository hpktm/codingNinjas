/*
palindrom in a range of 1 to n . n be defined by the user
*/

int check(int n)
{
    int rev=0;
    for(int i=n;i>0;i/=10)
    {
        rev=rev*10+i%10;
    }
    return(n==rev);
}
void palinGenerator(int n)
{
	for(int i=1;i<n;i++)
	{
	    if(check(i))
	    cout<<i<<endl;
	}
}


/*

Print the following pattern for the given number of rows.
Assume N is always odd.
Pattern for N = 7
*
 * *
   * * *
     * * * *
   * * *
 * *
*
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
11
Sample Output :
*
 * *
   * * *
     * * * *
       * * * * *
         * * * * * *
       * * * * *
     * * * *
   * * *
 * *
*
*/



#include<iostream>
using namespace std;


int main(){

    int i,j,n;
    cin>>n;
    int d=(n/2)+1;
    for(i=0;i<d;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=0;i<d-1;i++)
    {
        for(j=d-1;j>i+1;j--)
        {
            cout<<" ";
        }
        for(j=d-1;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}



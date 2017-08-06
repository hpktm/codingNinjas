/*
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Sample Input :
7
Sample Output :
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
*/

#include<iostream>
using namespace std;


int main(){
    
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<char(64+i);
        }
        cout<<endl;
    }
    
}


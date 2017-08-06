/*
Print the following pattern for the given number of rows.
Pattern for N = 3
  1
 232
34543
Input format :
Integer N (Total no. of rows)
Output format :
:wPattern in N lines
Sample Input :
5
Sample Output :
       1
      232
     34543
    4567654
   567898765


*/



#include <iostream>
using namespace std;

int main() {
    int i, space, rows, k=0, count = 0, count1 = 0;
    cin>>rows;
     for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                cout<<i+k;
                ++count;
            }
            else
            {
                ++count1;
                cout<<(i+k-2*count1);
            }
            ++k;
        }
        count1 = count = k = 0;

        cout<<endl;
    }
    
}

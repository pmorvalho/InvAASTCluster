/*numPass=0, numTotal=5
Verdict:WRONG_ANSWER, Visibility:1, Input:"4
34 13 42 14
2", ExpOutput:"47
55
56
", Output:"89
69
"
Verdict:WRONG_ANSWER, Visibility:1, Input:"4
11 2 18 2
2", ExpOutput:"13
20
20
", Output:"31
22
"
Verdict:WRONG_ANSWER, Visibility:1, Input:"6
1 2 3 4 5 6
4", ExpOutput:"10
14
18
", Output:"15
20
"
Verdict:WRONG_ANSWER, Visibility:0, Input:"8
2 4 6 8 10 11 12 14
6", ExpOutput:"41
51
61
", Output:"53
65
"
Verdict:WRONG_ANSWER, Visibility:0, Input:"7
2 4 -1 -5 2 5 6
4", ExpOutput:"0
0
1
8
", Output:"2
5
7
"
*/
#include <stdio.h>

int main() 
{
    int n,k,count;
    int ar[20];

    scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	   scanf("%d",&ar[i]);
	}
	scanf("%d",&k);
   for(int i=0;i<n-k;i=i+1)
    {
        count=0;
        for(int j=i;j<=i+k;j=j+1)
       {
        count=count+ar[j];
         
       } 
    
    printf("%d\n",count);
}
	
	return 0;
}
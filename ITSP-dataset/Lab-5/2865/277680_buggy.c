/*numPass=1, numTotal=5
Verdict:WRONG_ANSWER, Visibility:1, Input:"2", ExpOutput:"2*
*1
", Output:"21
21
"
Verdict:WRONG_ANSWER, Visibility:1, Input:"4", ExpOutput:"432*
43*1
4*21
*321
", Output:"4321
432*
43*1
4*21
"
Verdict:ACCEPTED, Visibility:1, Input:"5", ExpOutput:"5432*
543*1
54*21
5*321
*4321
", Output:"5432*
543*1
54*21
5*321
*4321
"
Verdict:WRONG_ANSWER, Visibility:0, Input:"1", ExpOutput:"*
", Output:"1
"
Verdict:WRONG_ANSWER, Visibility:0, Input:"10", ExpOutput:"1098765432*
109876543*1
10987654*21
1098765*321
109876*4321
10987*54321
1098*654321
109*7654321
10*87654321
*987654321
", Output:"10987*54321
1098*654321
109*7654321
10*87654321
*987654321
10987654321
10987654321
10987654321
10987654321
10987654321
"
*/
#include<stdio.h>

int main(){
    int a,n,N,i,j;//N as an input
    scanf("%d",&N);
    for(j=1;j<=N;j=j+1){
    for(i=1;i<=N;i=i+1){
        if(i+j==6)
        printf("*");
        else{
        a=N+1-i;
        printf("%d",a);
        }
    }
    printf("\n");
    }
	//Enter your code here
	return 0;
}
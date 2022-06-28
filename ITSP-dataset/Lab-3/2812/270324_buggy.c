/*numPass=0, numTotal=7
Verdict:WRONG_ANSWER, Visibility:1, Input:"-12", ExpOutput:"-12.0000 is negative", Output:"-12.0000 is negative."
Verdict:WRONG_ANSWER, Visibility:1, Input:"0", ExpOutput:"input is zero", Output:"input is zero."
Verdict:WRONG_ANSWER, Visibility:1, Input:"1", ExpOutput:"1.0000 is positive", Output:"1.0000 is positive."
Verdict:WRONG_ANSWER, Visibility:1, Input:"0.0000001", ExpOutput:"0.0000 is positive", Output:"0.0000 is positive."
Verdict:WRONG_ANSWER, Visibility:0, Input:"-0.0000001", ExpOutput:"-0.0000 is negative", Output:"-0.0000 is negative."
Verdict:WRONG_ANSWER, Visibility:0, Input:"101", ExpOutput:"101.0000 is positive", Output:"101.0000 is positive."
Verdict:WRONG_ANSWER, Visibility:0, Input:"0000000", ExpOutput:"input is zero", Output:"input is zero."
*/
#include<stdio.h>

int main(){
    float a;              //declaring variable a
	scanf("%f",&a);       //inputting a
	if(a>0)
	printf("%.4f is positive.",a);  //checking and printing for positive
	else
	 if(a<0)
	 printf("%.4f is negative.",a); //checking and printing for negative
	 else
	 printf("input is zero.");      //printing for zero input
	return 0;
}
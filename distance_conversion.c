#include<stdio.h>

int main(){
	double start=0, step=0, stop=0;
do{
	printf("Initial:");
	scanf("%lf",&start);
	if (start<=0){
		printf("Initial value must be >0;");
	}
}while(start<=0);

do{
	printf("Step:");
	scanf("%lf",&step);
	if (step<=0){
	printf("step must be >0;");
	}
}while(step<=0);
	
do{
	printf("Stop:");
	scanf("%lf",&stop);
	if (stop<=0){
		printf("stop must be >0;");
	}
}while(stop<=0);
printf("\n");
printf("METERS	FEET\n");
printf("****************\n");
for(double conv=start;conv<=stop;conv+=step){
printf("%-10.2f%-10.2f\n", conv, conv * 3.28);
}
return 0;	
}

/*this program illustrates the use of the do-while loop, in this 
case, it asks the user for starting value in meters, the number of 
steps and the stop, it then converts the values into feet and prints the output.*/

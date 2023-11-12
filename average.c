#include<stdio.h>

int main(){
    int total,average,count=0,maths,english,science, SST, CRE;
    while(count<5){
        switch(count){
            case 0:
                printf("Enter your maths grade: \n");
                scanf("%d",&maths);
                ++count;
                break;
            case 1:
                printf("Enter your english grade: \n");
                scanf("%d",&english);
                ++count;
                break;
            case 2:
                printf("Enter your science grade: \n");
                scanf("%d",&science);
                ++count;
                break;
            case 3:
                printf("Enter your SST grade: \n");
                scanf("%d",&SST);
                ++count;
            case 4:
                printf("Enter your CRE grade: \n");
                scanf("%d",&CRE);
                ++count;
        }
    }
        total=maths+english+science+SST+CRE;
        average=total/5;
        printf("Your average for this term is; %d\n",average);
    
return 0;
}

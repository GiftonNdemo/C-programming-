#include<stdio.h>
int main(){
    int x, total;
    puts("Enter the number of subjects to find the average for: ");
    scanf("%d",&x);
    int grades[x];
    for(int i=0;i < x;i++){
        printf("subject_%d: ",i+1);
        scanf("%d",&grades[i]);
    }
    total=0;
    for(int i=0;i<x;i++){
        total+=grades[i];
    }
    printf("The average for your grades is: %.2f\n",(double)total/x);
    return 0;
}

#include<stdio.h>

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=5;j++){
            if(j>=5-i){
            printf("*");
            }else{printf(" ");}
        }
        printf("\n");
    }

    for(int i=0;i<5;i++){
        for(int j=5;j>=0;j--){
            if(j<=i%5){
            printf("%d",j);
            }else{printf(" ");}
        }
        printf("\n");
    }
return 0;
}

#include <stdio.h>                                                          
#include <string.h>
void main()
{
    int i,j,n,pal;
    char str[80];
    printf("Enter the string to check:"); //asks user to enter the word to check
    scanf("%s",str); // recieves the input from the user
    n=strlen(str);
    i=0;
    j=n-1;
    while((i<n-1)&&(j>0))
    {
        pal =1;
        i++;
        j--;
        if(str[i]!=str[j])
        {
            pal=0;
            break;
        }
    }
    if(pal)
    {
        printf("%s is a palindrome!\n",str); 
    }
    else
    {
       printf("%s is not a palindrome\n",str );
    }
}
// program to convert input sentence from lowercase to uppercase

#include <stdio.h>
void main()
{
	int i;
	char str[100];
	printf("Enter a sentence to convert\n");
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0')
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
		i++;
	}
	printf("%s",str);
}

//converts vowels in an input sentence from lowercase to uppercase

#include <stdio.h>
void main()
{
    int i;
    char str[100];
    printf("Enter a sentence to convert\n");
    fgets(str,sizeof(str),stdin);
    i=0;
    while(str[i]!='\0')
    {   
        if(str[i]>=97 && str[i]<=122)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                str[i]-=32;
            }
        }
        i++;
    }
    printf("%s",str);
}






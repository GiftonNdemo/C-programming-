#include <stdio.h>
  2 #include <string.h>
  3 
  4 int main() {
  5     char str[30];
  6     int count[128] = {0};  // Initialize count array with 0s
  7 
  8     printf("Enter a string: ");
  9     scanf("%s", str);
 10 
 11     // Traverse the string and increment count of each character
 12     int n = strlen(str);
 13     for(int i = 0; i < n; i++) {
 14         count[(int)str[i]]++;
 15     }
 16 
 17     // Print count of each character
 18     printf("Character\tCount\n");
 19     for(int i = 0; i < 128; i++) {
 20         if(count[i] != 0) {
 21             printf("%c has a count of %d\n", i, count[i]);
 22         }
 23     }
 24 
 25     return 0;
 26 }

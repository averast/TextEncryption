#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SZ 1096 // Size of char array

int main()
{
   int i, x;
   
   char *text = malloc(MAX_SZ);
   if (text == NULL) {
        printf("No memory\n");
        return 1;
    }

   printf("\nPlease enter a string:\t");
   fgets(text, MAX_SZ, stdin); // Use fgets to prevent any overflows

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);

   //using switch case statements
   switch(x) {
   case 1:
      for(i = 0; (i < 100 && text[i] != '\0'); i++) {
        text[i] = text[i] + 3; //the key for encryption is 3 that is added to ASCII value
      }
      printf("\nEncrypted string: %s\n", text);
      break;

   case 2:
      for(i = 0; (i < 100 && text[i] != '\0'); i++) {
        text[i] = text[i] - 3; //the key for encryption is 3 that is subtracted to ASCII value
      }
      printf("\nDecrypted string: %s\n", text);
      break;

   default:
      printf("\nError\n");
   }
   
   free(text);
   return 0;
}

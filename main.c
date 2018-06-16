 #include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
 /*   printf("The maximum value of signed char is %d\n",CHAR_MAX);
    printf("The minimum value of signed char is %d\n\n",CHAR_MIN);

    printf("The maximum value of unsigned char is %d\n",(unsigned)CHAR_MAX);
    printf("The minimum value of unsigned char is %d\n",(unsigned)CHAR_MIN); */

    printf("The maximum value of unsigned char is %d\n",(unsigned)CHAR_MAX);
     printf("Maximum value of type signed char: %d\n", SCHAR_MAX);        /* IV */
  printf("Minimum value of type signed char: %d\n\n", SCHAR_MIN);      /* IV */

  printf("Maximum value of type unsigned char: %u\n\n", (unsigned) UCHAR_MAX);    /* SF */  /* IV */

  printf("Maximum value of type short: %d\n", SHRT_MAX);               /* IV */
  printf("Minimum value of type short: %d\n\n", SHRT_MIN);             /* IV */

  printf("Maximum value of type unsigned short: %u\n\n", (unsigned) USHRT_MAX);   /* SF */  /* IV */


  printf("Maximum value of type int: %d\n", INT_MAX);                  /* IV */
  printf("Minimum value of type int: %d\n\n", INT_MIN);                /* IV */

  printf("Maximum value of type unsigned int: %u\n\n", UINT_MAX);      /* RB */   /* IV */

  printf("Maximum value of type long: %ld\n", LONG_MAX);               /* RB */   /* IV */
  printf("Minimum value of type long: %ld\n\n", LONG_MIN);             /* RB */   /* IV */

  printf("Maximum value of type unsigned long: %lu\n\n", ULONG_MAX);
    return 0;
}

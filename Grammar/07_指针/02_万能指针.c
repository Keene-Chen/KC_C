/**
 * Author     : KeeneChen
 * DateTime   : 2022.07.20-10: 02: 33
 * Description: 02_δΈθ½ζι
 */
#include <stdio.h>

int main(void)
{
    void *p  = NULL;
    int  num = 10;
         p   = &num;

    printf("%d\n", *(int *)p);
    printf("%d\n", sizeof(p));

    return 0;
}
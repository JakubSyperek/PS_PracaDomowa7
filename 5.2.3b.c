#include <stdio.h>
#include <string.h>
#define A "KANAPKA"
#define B "KANAPKA"
int main(void)
{
    porownaj();
    printf("%s\n", A);
    printf("%s\n", B);
    porownaj();
}

void porownaj(void)
{
   wchar_t a[10], b[10];
   if (strcmp(a,b) == 0)
      return 1;
   else
      return 0;
}

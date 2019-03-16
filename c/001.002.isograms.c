#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool IsIsogram(char *str) 
{
    // TRICK
//     while(*str)
//         printf("-%c", *str++);

  int i, len;
  i = len = 0;
  char c;

  int v[128]  = {0};
    
  for(i=0; (c = str[i]) != '\0'; i++)
  {
      v[tolower(str[i])]++;
      if (v[tolower(str[i])] > 1 )
          return false;
  }
  for(i=0; i < 128; i++)
      printf("%i ",v[i] );
  
  return true;
}

void abc()
{
    // 65 = A
    // 122 = z

    char c;
    int i = 0;
    for (; i < 128; i++)
        printf("%i:%c ", i, tolower(i));

    printf("\n %i:%c", 'a'-'A', 'a'-'A');
    printf("\n %i:%c", 'a'-32, 'a'-32);
    printf("\n %i:%c", 'b'-32, 'b'-32);


}

int main()
{
    printf("\n%d", IsIsogram("moose"));
    printf("\n%d", IsIsogram("aba"));
    printf("\n%d", IsIsogram("abc"));
//     abc();
    return 0;
}



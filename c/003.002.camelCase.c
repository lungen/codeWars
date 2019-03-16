#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

char *camel_case(const char *s)
{
    char buf[100];
    int i = 0;
    printf("\n%p ", &s);
    while(*s)
    {
        if(isspace(*s))
        {
            *s++;
//             printf("%c", toupper(*s++));
            printf("%c", buf[i++] = toupper(*s++));
        }
        else
        {
            if (i==0)
                printf("%c", buf[i++] = toupper(*s++));
            else
            printf("%c", buf[i++] = *s++);
//             printf("%c", *s++);
        }
    }

    buf[i] = '\0';
    printf("\n");
    for (int j=0; j<=i;j++)
    {
        printf("%c", buf[j]);
    }

    return (char *) buf;
//     return (char *) s;
}

int main()
{
    char *s;

    s = camel_case("hello case");      /* => "HelloCase" */
    free(s);
    s = camel_case("camel case word"); /* => "CamelCaseWord" */
    free(s);
    return 0;
}

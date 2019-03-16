/*
 * __exctype (isalnum);
 * 111 __exctype (isalpha);
 * 112 __exctype (iscntrl);
 * 113 __exctype (isdigit);
 * 114 __exctype (islower);
 * 115 __exctype (isgraph);
 * 116 __exctype (isprint);
 * 117 __exctype (ispunct);
 * 118 __exctype (isspace);
 * 119 __exctype (isupper);
 * 120 __exctype (isxdigit);*/

#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

char *camel_case(const char *s)
{
    char buf[100];
    int i = 0;
    printf("\n");
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

//     return (char *)buf;
    return *s[0];
}

int main()
{
    camel_case("hello case");      /* => "HelloCase" */
    camel_case("camel case word"); /* => "CamelCaseWord" */
    return 0;
}

#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

char *camel_case(const char *s)
{
    int i = 0;
    printf("\n%p ", &s);
//     return (char *) s;
    return (char *) &s;
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

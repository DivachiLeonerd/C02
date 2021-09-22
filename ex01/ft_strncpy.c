//se count < src length, entao dest fica com todos os abrangidos por count mas n tem null
//se count > src, entao dest = src + todos os nulls necessarios
//undefined se se cruzarem em memória
#include<stdio.h>

char    *ft_strncpy(char    *dest, char *src, unsigned int n)
{
    char    *temp_pointer;
    int     counter;

    counter = 0;
    temp_pointer = dest;

    while (*src != '\0' || counter <= n)
    {
        *dest = *src;
        dest++;
        src++;
        counter++;
    }
    if ((n - counter) > 0)
    {
        while (counter = n)
        {
            *src = '\0';
            src++;
        }
    }
    printf("%s", dest);
    
}
int main()
{
    char    dest[10];
    char    source[9] = {"Ola"};
    ft_strncpy(dest,source,5);
}
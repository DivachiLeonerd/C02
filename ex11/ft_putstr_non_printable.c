#include<unistd.h>

void    ft_putstr_non_printable(char    *str)
{
    while (*str != '\0')
    {
        if (0 < *str < 31 || str == 127)
        {
            write(1, "\\", 1);
            write(1, (*str / 16), 1);
            write(1, *str % 16, 1);
        }
        str++;
    } 
}
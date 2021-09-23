#include<unistd.h>

void    ft_putstr_non_printable(char    *str)
{
    
    while (*str != '\0')
    {
        if (0 < *str < 31 || str == 127)
        {
            write(1, "\\", 1);
            write(1, (*str / 16) + 48, 1);
            if ((*str % 16) >= 10)
            {
                *str = (*str % 16) + 55;
                write(1, *str, 1);
            }
        }
        str++;
    } 
}
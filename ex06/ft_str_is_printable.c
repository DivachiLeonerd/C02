int ft_str_is_printable(char    *str)
{    
    while (*str != '\0')
    {   
        if ((0 < *str < 31 || *str == 127))
        {
            return (0);
        }
        str++;
    }
    return (1);
}
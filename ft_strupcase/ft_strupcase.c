char    *ft_strupcase(char  *str)
{
    while (*str != '\0')
    {
        if (97 < *str < 122)
        {
            *str = *str - 32;
        }
        str++;
    }   
}
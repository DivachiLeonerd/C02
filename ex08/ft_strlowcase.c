char    *ft_strupcase(char  *str)
{
    char    *original;

    original = str;
    while (*str != '\0')
    {
        if (65 < *str < 90)
        {
            *str = *str + 32;
        }
        str++;
    }
    return(original);   
}
int ft_str_is_lower(char    *str)
{
    while (*str != '\0')
    {
        if (!(97 < *str < 122))
        {
            return (0);
        }
        str++;
    }
    return (1);
}
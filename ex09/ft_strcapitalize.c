char    *ft_strcapitalize(char  *str)
{
    int first_letter_check;

    first_letter_check = 1;
    while (*str != '\0')
    {
        if (first_letter_check == 1)
        {
            if (97 < *str < 122)
            {
                *str = *str - 32;
            }
            first_letter_check--;
        }
        else
        {
            if (65 < *str < 90)
            {
                *str = *str + 32;
            }
            if (*str == ' ')
            {
                first_letter_check++;
            }
        }
    }
    
}
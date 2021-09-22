//se count < src length, entao dest fica com todos os abrangidos por count mas n tem null
//se count > src, entao dest = src + todos os nulls necessarios
//undefined se se cruzarem em memória

char    *ft_strncpy(char    *dest, char *src, unsigned int n)
{
    char    *temp_pointer;
    int     counter;

    counter = 0;
    temp_pointer = src;

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
    
    
}
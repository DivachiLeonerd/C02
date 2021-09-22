unsigned int    ft_strlcpy(char *dest, char *src, unsigned int  size)
{
    int counter;

    counter = 0;
    while (counter < size)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (size);
}
//Nao sei se percebi o q a função faz
#include <unistd.h>

int    ft_strlen(char* str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

char* ft_strdup(char* src)
{
    int size;
    int i;

    i = 0;
    size = ft_strlen(src);

    char *new_src = (char*)malloc(size * sizeof(char) + 1);

    while (src[i])
    {
        new_src[i] = src[i];
        i++;
    }
    return (new_src);
}
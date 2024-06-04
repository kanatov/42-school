#include "get_next_line.h"

void str_copy(char *dest, char *src, int l)
{
    int i;

    i = 0;
    while (src[i] && l--)
    {
        dest[i] = src[i];
        i++;
    }
}

char *substring(int start, int length, char *str)
{
    char *substr;

    substr = malloc(sizeof(char) * (length + 1));
    str_copy(substr, str + start, length);
    substr[length] = '\0';
    return substr;
}

int find_new_line(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '\n')
            return i;
        i++;
    }
    return -1;
}

int ft_strlen(char *str)
{
    char *str_l;

    if (!str)
        return 0;
    str_l = str;
    while (*str_l)
        str_l++;
    return (str_l - str);
}

char *concat(char *str, char *buffer)
{
    char *new_str;
    int str_l;
    int buffer_l;
    int i;
    int j;

    str_l = ft_strlen(str);
    buffer_l = ft_strlen(buffer);
    new_str = malloc(sizeof(char) * (str_l + buffer_l + 1));
    if (!new_str)
        return NULL;
    i = 0;
    j = 0;
    if (str)
    {
        while (str[j])
            new_str[i++] = str[j++];
    }
    j = 0;
    while (buffer[j])
        new_str[i++] = buffer[j++];
    free(str);
    return new_str;
}

char *check_new_line(char *str)
{
    int new_line_position;
    int bytes_read;
    char *substr;

    new_line_position = find_new_line(str);
    if (new_line_position >= 0)
    {
        bytes_read = ft_strlen(str) - (bytes_read - new_line_position) + 1;
        substr = substring(0, bytes_read, str);
        free(str);
        buffer = substring(new_line_position + 2, (BUFFER_SIZE - new_line_position), str);
        return str;
    }
    return NULL;
}
char *get_next_line(int fd)
{
    static char *str = NULL;
    char *buffer;
    int bytes_read;
    int new_line_position;
    char *line;

    buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (fd == -1 || !BUFFER_SIZE || !buffer || bytes_read < 1)
        return NULL;
    while (bytes_read > 0)
    {
        buffer[bytes_read] = '\0';
        check_new_line(buffer);
        str = concat(str, buffer);
        if (!str)
            return NULL;
        bytes_read = read(fd, buffer, BUFFER_SIZE);
    }
    free(buffer);
    close(fd);
    return str;
}

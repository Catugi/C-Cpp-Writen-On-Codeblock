#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t strlen_(char *);
char *strcpy_(char *, char *);
int strcmp_(char *, char *);
char* strstr_(char *, char *);

int main(void)
{
    char str[] = "Hello world!",
                 *str1 = (char *)malloc(10),
                  str2[] ="Fernando";
    int res;
    str1 = strcpy_(str1, str);
    printf("Length of \"%s\" = %zu\n", str, strlen_(str));
    printf("Length of \"%s\" = %zu\n", str1, strlen_(str1));
    res = strcmp_(str2, str2);
    if(res == 0)
        printf("The str are equals\n");
    else if(res < 0)
        printf("The str are not equals and first come before\n");
    else
        printf("The str are not equals and first come after\n");

    printf("Searching for one single word: ");
    char* pos = strstr(str, "ld!");
    if(pos != NULL)
    {
        printf("\"ld!\" found\n");
    }
    else
    {
        printf("\"ld!\" not found\n");
    }
    return 0;
}

size_t strlen_(char *str)
{
    size_t len = 0;
    while(str[len]  != '\0')
    {
        len++;
    }
    return len;
}

char * strcpy_(char *dest, char *src)
{
    size_t i = 0;
    /* if(strlen_(dest) < strlen_(src))
         return NULL;*/
    //char *temp = dest;
    while(src[i]  != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int strcmp_(char *first, char *second)
{
    int i = 0,
        flag = 0;
    while(flag == 0)
    {
        if(first[i] < second[i])
        {
            flag = -1;
        }
        else if(second[i] < first[i])
        {
            flag = 1;
        }
        if(first[i] == '\0' || second[i] == '\0')
            break;
        i++;
    }
    return flag;
}


/*int strstr_(char *str1, char *str2)
{
    int res = 0, i = 0, first_pos = -1;
    int len_str1 = (int)strlen_(str1),
        len_str2 = (int)strlen_(str2);
    if(len_str1 < len_str2)
        return -1;

    while(str1[res] != '\0')
    {
        if(str1[res] == str2[0])
        {
            first_pos = res;
            break;
        }
        res++;
    }
    if((len_str1 - first_pos) < len_str2)
        return -1;
    while(str1[res] != '\0' && str2[i] != '\0')
    {
        if(str1[res] != str2[i])
        {
            //first_pos = -1;
            break;
        }
        res++;
        i++;
    }
    return first_pos;
}*/

char* strstr_(char *str1, char *str2)
{
    const size_t len = strlen_ (str2);
    while (*str1)
    {
        if (!memcmp (str1, str2, len))
            return (char *)str1;
        ++str1;
    }
    return (0);
}

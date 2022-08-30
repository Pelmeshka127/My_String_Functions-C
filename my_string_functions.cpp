#include <stdio.h>
#include <stdlib.h>

#include "my_string_functions.h"

void Puts (const char * str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}

int Strlen (const char * str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    
    return i;
}

char * Strcpy (char * dst, const char * src)  //dst
{
    char * start_dst = dst;
    
    while((*dst++ = *src++) != '\0');

    return start_dst;
}

const char * Strchr (const char* str, int ch) 
{
    int i = 0;
    while (str[i] != ch && str[i] != '\0')
    {
        i++;
    }
    if (str[i] == ch)
    {
        return &str[i];
    }
    else
    {
        return NULL;
    }
}

int Strcmp (const char * s1, const char * s2)
{
    int i = 0;
    while (s1[i] == s2[i])
    {
        i++;
    }

    return s1[i] - s2[i];
    /// !! (s1[i] - s2[i]) returnes 1 or 0;
}

char * Strcat (char * s1, const char * s2)
{
    char * start_s1 = s1;

    while (*s1 != '\0')
    {
        s1++;
    }
    
    int i = 0;

    while ((s1[i] = s2[i]) != '\0')
    {
        i++;
    }

    return start_s1; 
}

char * Strncpy (char * dst, const char * src, int n)
{
    if (Strlen(src) < n)
    {
        int i = 0;

        while ((dst[i] = src[i]) != '\0')
        {
            i++;
        }

        while (i < n)
        {
            dst[i] = '\0';
            i++;
        }
    }
    else
    {
        int i = 0;
        while (i < n)
        {
            dst[i] = src[i];
            i++;
        }
    }
    return dst;
}

char * Strncat (char * dst, const char * src, int n)
{
    char * start_dst = dst;

    while (*dst != '\0')
    {
        dst++;
    }

    int i = 0;

    while (i <= n)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return start_dst;
}


char * Fgets (char * str, int n, FILE * fp)
{
    int ch = 0;
    char * start_str = str;

    while (n-- > 0 && (ch = getc(fp)) != EOF)
    {
        if ((*str++ = ch) == '\n')
        {
            break;
        }
    }
    *str = '\0';

    return ch == EOF && str == start_str ? NULL : start_str;
}

char * Strdup (const char * dst)
{
    int len_src = Strlen(dst) + 1;

    char * src;

    src = (char *) calloc (len_src, sizeof(char));

    Strcpy (src, dst);

    return src == NULL ? NULL : src;

}

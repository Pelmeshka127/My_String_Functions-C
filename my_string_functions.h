#ifndef MY_STRING_FUNCTIONS_H_
#define MY_STRING_FUNCTIONS_H_

/// function print string
void Puts (const char * str);

/// function return the len of a string
int Strlen (const char * str);

/// function copies string SRC into string STR and returnes new STR
char * Strcpy (char * dst, const char * src);

/// function returns a pointer to the first cell of the string
/// STR that contains the symbol CH
const char * Strchr (const char * str, int ch);

/// function returnes 1 if ASCII(s1)>ASCII(s2), 
/// -1 if ASCII(s2)>ACSII(s1) and 0 if ASCII(s1)=ASCII(s2)  //
int Strcmp (const char * s1, const char * s2);

/// s2 copies to the end of s1
/// function returnes s1
char * Strcat(char * s1, const char * s2);

/// this function copies to the cell pointed to by dst no more than
/// n symbols from the string pointed to by src. The return value is dst
char * Strncpy(char * dst, const char * src, int n);

/// at most n symbols of the string src are added 
/// to the string dst,  and the first symbol
/// of the string src is copied over the null character of the string dst.
/// Function returnes dst
char * Strncat(char * dst, const char * src, int n);

/// fgets function reads the next line of input 
/// (including the newline symbol) from file fp into the symbol array str,
/// The rewritten string is added with the symbol '\0'
char * Fgets (char * str, int n, FILE * fp);

/// function returnes NULL - if you failed to allocate memory for a new string
/// or copy the string pointed to by the str argument
char * Strdup (const char * dst);

#endif
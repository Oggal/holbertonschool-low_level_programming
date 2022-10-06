#ifndef PHIL_HEAD
#define PHIL_HEAD

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int);
int _isdigit(int);
int _strlen(char *s);
int _strcmp(char *s1,char *s2);

int _atoi(char *s); /*TODO*/

void _puts(char *s);

char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *des, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *a);
char *_strstr(char *s, char *a);

unsigned int _strspn(char *s, char *a);



#endif

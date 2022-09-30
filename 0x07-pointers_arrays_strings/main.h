#ifndef OGGAL
#define OGGAL

int _putchar(char);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *des, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *a);
char *_strstr(char *s, char *a);

unsigned int _strspn(char *s, char *a);

void print_chessboard(char (*grid)[8]);
void print_diagsums(int *a, int size);

#endif

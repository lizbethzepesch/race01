#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
char *mx_strstr(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_counter_range(int n);
int mx_count_dig(int n);
char *mx_replace(char *str, char aim, int counter);
char *mx_strnew_for_last(int n1, int n2, int n3);
char *mx_toresult(int n1, int n2, char op, int n3);
char *mx_int_to_str(int n);
void reverse(char *s);
char*mx_strtrim(const char*str);
char *mx_strncpy(char*dst, const char*src, int len);
char *mx_strcat(char *s1, const char *s2);
char*mx_strjoin(char const*s1, char const*s2);

char mx_operations(char* str);
char *mx_strnew(const int size);
void mx_strdel(char**str);
char *mx_strdup(const char*str);
int mx_count_dig(int n);

int mx_qmark(char *c);
bool mx_isdigit(int c);
bool mx_isspace(char c);
bool mx_isqmark(int c);
bool mx_boolatoi(const char *str);
int mx_howmuchq(char* str);

void mx_printchar(char c);
void mx_printerr(const char*s);
void mx_printint(int n);
void mx_printres(int n1, int n2, char op, int res);
void mx_printstr(const char *s);


#endif

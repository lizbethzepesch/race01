#include "../inc/header.h"

void reverse(char *s){
     int i, j;
     char c;
 
     for (i = 0, j = mx_strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }


char *mx_int_to_str(int n) {
    char *res = mx_strnew(mx_count_dig(n));
    int i, sign;
    if ((sign = n) < 0)  /* записываем знак */
         n = -n;          /* делаем n положительным числом */
     i = 0;
    do {       /* генерируем цифры в обратном порядке */
         res[i++] = n % 10 + '0';   /* берем следующую цифру */
     } while ((n /= 10) > 0);     /* удаляем */
     if (sign < 0)
         res[i++] = '-';
     res[i] = '\0';
     reverse(res);
    return res;
}

char *mx_toresult(int n1, int n2, char op, int n3){
    int size = mx_count_dig(n1) + 3 + mx_count_dig(n2) + 3 + mx_count_dig(n3);

    char *res = mx_strnew(size);
    for (int a = 0; a < size; a++) {
        res[a] = '0';
    }
    char *num1 = mx_strnew(mx_count_dig(n1));
    num1 = mx_int_to_str(n1);
    char *num2 = mx_strnew(mx_count_dig(n2));
    num2 = mx_int_to_str(n2);
    char *num3 = mx_strnew(mx_count_dig(n3));
    num3 = mx_int_to_str(n3);
    int i = 0;
    for (int j = 0; j < mx_strlen(num1); j++) {
        res[i] = num1[j];
        i++;
    }
    res[i] = ' ';
    i++;
    res[i] = op;
    i++;
    res[i] = ' ';
    i++;
    for (int j = 0; j < mx_strlen(num2); j++) {
        res[i] = num2[j];
        i++;
    }
    res[i] = ' ';
    i++;
    res[i] = '=';
    i++;
    res[i] = ' ';
    i++;
    for (int j = 0; j < mx_strlen(num2); j++) {
        res[i] = num3[j];
        i++;
    }
    return res;
}

char *mx_strnew_for_last(int n1, int n2, int n3) {
    int size = mx_count_dig(n1) + 3 + mx_count_dig(n2) + 3 + mx_count_dig(n3);
    char *res = mx_strnew(size);
    return res;
}

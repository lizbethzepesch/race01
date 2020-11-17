#include "../inc/header.h"

void mx_printres(int n1, int n2, char op, int res){
    mx_printint(n1);
    mx_printchar(' ');
    mx_printchar(op);
    mx_printchar(' ');
    mx_printint(n2);
    mx_printchar(' ');
    mx_printchar('=');
    mx_printchar(' ');
    mx_printint(res);
    mx_printchar('\n');
}

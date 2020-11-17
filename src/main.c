#include "../inc/header.h"

int main(int argc, char * argv[]){
    char operator = mx_operations(argv[2]);

    if (argc != 5){
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]");
        exit(EXIT_FAILURE);
    } 

    if(operator == '!'){
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(EXIT_FAILURE);
    }

    if(operator == '/' && mx_strcmp(argv[3], "0") == 0) {
        return -1;
    }

    if (!mx_boolatoi(argv[1])) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[1]);
        mx_printerr("\n");
        exit(EXIT_FAILURE);

    }
    else if (!mx_boolatoi(argv[3])) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[3]);
        mx_printerr("\n");
        exit(EXIT_FAILURE);
    }
    else if (!mx_boolatoi(argv[4])) {
        mx_printerr("Invalid result: ");
        mx_printerr(argv[4]);
        mx_printerr("\n");
        exit(EXIT_FAILURE);
    }


    char *n1 = mx_strdup(argv[1]);
    char *n2 = mx_strdup(argv[3]);
    char *n3 = mx_strdup(argv[4]);

    int n1i, n2i, n3i;

    int r1 = mx_counter_range(mx_howmuchq(argv[1]));
    int r2 = mx_counter_range(mx_howmuchq(argv[3])); 
    int r3 = mx_counter_range(mx_howmuchq(argv[4]));


    char *history;

    if (operator == '?') {
        operator = '+';
        for (int n1_c = 0; n1_c <= r1; n1_c++) {
            n1 = mx_replace(argv[1], '?', n1_c);
            for (int n2_c = 0; n2_c <= r2; n2_c++) {
                n2 = mx_replace(argv[3], '?', n2_c);
                for (int n3_c = 0; n3_c <= r3; n3_c++) {
                    n3 = mx_replace(argv[4], '?', n3_c);
                    n1i = mx_atoi(n1);
                    n2i = mx_atoi(n2);
                    n3i = mx_atoi(n3);
                    char *time = mx_toresult(n1i, n2i, operator, n3i);
                    if (n1i + n2i == n3i && mx_strcmp(time, history) != 0) {
                        history = mx_toresult(n1i, n2i, operator, n3i);
                        mx_printres(n1i, n2i, operator, n3i);
                    }
                    

                }
            }
        }
        operator = '-';
        for (int n1_c = 0; n1_c <= r1; n1_c++) {
            n1 = mx_replace(argv[1], '?', n1_c);
            for (int n2_c = 0; n2_c <= r2; n2_c++) {
                n2 = mx_replace(argv[3], '?', n2_c);
                for (int n3_c = 0; n3_c <= r3; n3_c++) {
                    n3 = mx_replace(argv[4], '?', n3_c);
                    n1i = mx_atoi(n1);
                    n2i = mx_atoi(n2);
                    n3i = mx_atoi(n3);

                    char *time = mx_toresult(n1i, n2i, operator, n3i);

                    if (n1i - n2i == n3i && mx_strcmp(time, history) != 0) {
                        history = mx_toresult(n1i, n2i, operator, n3i);
                        mx_printres(n1i, n2i, operator, n3i);
                    } 

                }
            }
        }
        operator = '*';
        for (int n1_c = 0; n1_c <= r1; n1_c++) {
            n1 = mx_replace(argv[1], '?', n1_c);
            for (int n2_c = 0; n2_c <= r2; n2_c++) {
                n2 = mx_replace(argv[3], '?', n2_c);
                for (int n3_c = 0; n3_c <= r3; n3_c++) {
                    n3 = mx_replace(argv[4], '?', n3_c);
                    n1i = mx_atoi(n1);
                    n2i = mx_atoi(n2);
                    n3i = mx_atoi(n3);
                    char *time = mx_toresult(n1i, n2i, operator, n3i);
                    if (n1i * n2i == n3i && mx_strcmp(time, history) != 0) {
                        history = mx_toresult(n1i, n2i, operator, n3i);
                        mx_printres(n1i, n2i, operator, n3i);
                    }
                }
            }
        }
        operator = '/';
        for (int n1_c = 0; n1_c <= r1; n1_c++) {
            n1 = mx_replace(argv[1], '?', n1_c);
            for (int n2_c = 0; n2_c <= r2; n2_c++) {
                n2 = mx_replace(argv[3], '?', n2_c);
                for (int n3_c = 0; n3_c <= r3; n3_c++) {
                    n3 = mx_replace(argv[4], '?', n3_c);
                    n1i = mx_atoi(n1);
                    n2i = mx_atoi(n2);
                    n3i = mx_atoi(n3);
                    char *time = mx_toresult(n1i, n2i, operator, n3i);
                    if (n1i / n2i == n3i && n2i != 0 && mx_strcmp(time, history) != 0) {
                        history = mx_toresult(n1i, n2i, operator, n3i);
                        mx_printres(n1i, n2i, operator, n3i);
                    }    
                }
            }
        }
    }
    else {
        if (operator == '+') {
            for (int n1_c = 0; n1_c <= r1; n1_c++) {
                n1 = mx_replace(argv[1], '?', n1_c);
                for (int n2_c = 0; n2_c <= r2; n2_c++) {
                    n2 = mx_replace(argv[3], '?', n2_c);
                    for (int n3_c = 0; n3_c <= r3; n3_c++) {
                        n3 = mx_replace(argv[4], '?', n3_c);
                        n1i = mx_atoi(n1);
                        n2i = mx_atoi(n2);
                        n3i = mx_atoi(n3);
                        char *time = mx_toresult(n1i, n2i, operator, n3i);
                        if (n1i + n2i == n3i && mx_strcmp(time, history) != 0) {
                            history = mx_toresult(n1i, n2i, operator, n3i);
                            mx_printres(n1i, n2i, operator, n3i);
                        }

                    }
                }
            }
        }
        else if (operator == '-') {
            for (int n1_c = 0; n1_c <= r1; n1_c++) {
                n1 = mx_replace(argv[1], '?', n1_c);
                for (int n2_c = 0; n2_c <= r2; n2_c++) {
                    n2 = mx_replace(argv[3], '?', n2_c);
                    for (int n3_c = 0; n3_c <= r3; n3_c++) {
                        n3 = mx_replace(argv[4], '?', n3_c);
                        n1i = mx_atoi(n1);
                        n2i = mx_atoi(n2);
                        n3i = mx_atoi(n3);

                        char *time = mx_toresult(n1i, n2i, operator, n3i);

                        if (n1i - n2i == n3i && mx_strcmp(time, history) != 0) {
                            history = mx_toresult(n1i, n2i, operator, n3i);
                            mx_printres(n1i, n2i, operator, n3i);
                        }
                    }
                }
            }
        }
        else if (operator == '*') {
            for (int n1_c = 0; n1_c <= r1; n1_c++) {
                n1 = mx_replace(argv[1], '?', n1_c);
                for (int n2_c = 0; n2_c <= r2; n2_c++) {
                    n2 = mx_replace(argv[3], '?', n2_c);
                    for (int n3_c = 0; n3_c <= r3; n3_c++) {
                        n3 = mx_replace(argv[4], '?', n3_c);
                        n1i = mx_atoi(n1);
                        n2i = mx_atoi(n2);
                        n3i = mx_atoi(n3);

                        char *time = mx_toresult(n1i, n2i, operator, n3i);

                        if (n1i * n2i == n3i && mx_strcmp(time, history) != 0) {
                            history = mx_toresult(n1i, n2i, operator, n3i);
                            mx_printres(n1i, n2i, operator, n3i);
                        }

                    }
                }
            }
        }
        else if (operator == '/') {
            for (int n1_c = 0; n1_c <= r1; n1_c++) {
                
                n1 = mx_replace(argv[1], '?', n1_c);
                for (int n2_c = 0; n2_c <= r2; n2_c++) {
                    n2 = mx_replace(argv[3], '?', n2_c);
                    for (int n3_c = 0; n3_c <= r3; n3_c++) {
                        n3 = mx_replace(argv[4], '?', n3_c);
                        n1i = mx_atoi(n1);
                        n2i = mx_atoi(n2);
                        n3i = mx_atoi(n3);
                        char *time = mx_toresult(n1i, n2i, operator, n3i);
                        if (n1i / n2i == n3i && n2i != 0 && mx_strcmp(time, history) != 0) {
                            history = mx_toresult(n1i, n2i, operator, n3i);
                            mx_printres(n1i, n2i, operator, n3i);
                        }

                    }
                }
            }
        }
    }
    // mx_strdel(&history);    
    // mx_strdel(&n1);   
    // mx_strdel(&n2);   
    // mx_strdel(&n3);   
    return 0;
}

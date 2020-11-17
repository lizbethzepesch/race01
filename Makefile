all: PART

PART:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic src/*.c -o part_of_the_matrix 

clean:
	rm -f part_of_the_matrix
	
reinstall:
	clean PART

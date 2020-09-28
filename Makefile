all: copy PART little_clean

copy:
	mkdir obj
	cp inc/*.h obj
	cp src/*.c obj

PART:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o part_of_the_matrix obj/*.c

little_clean:
	rm -rf obj/

uninstall:
	rm -rf obj
	rm minilibmx.a

clean:
	rm -rf *
	
reinstall:
	make uninstall
	make

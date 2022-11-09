##0x1C-makefiles
###0-Makefile
Create your first Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: none

julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school 
###1-Makefile
Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$

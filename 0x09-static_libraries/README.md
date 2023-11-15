0x09 - Static Libraries:

This directory is about stating libraries.

Here we're going to create a library or archive with the function files listed in main.h file
=======
# 0x09 - Static Libraries

This directory is about static librarie

Here, I compiled with gcc -c to produce the object files from all the .c files
(gcc -c *.c). And I used the ar -rcs to produce the archive file otherwise 
called static library from all the .o files (ar -rcs libmy *.o)

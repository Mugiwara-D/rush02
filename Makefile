gcc -c ft* | ar rc libstr.a *.o | gcc main.c -L. -lstr | ranlib libstr.a

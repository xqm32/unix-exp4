To use `libmethods.so`: `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH` or `gcc -o test -Wl,-rpath=. src/test.c -L. -lmethods`
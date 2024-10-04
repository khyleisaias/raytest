CC = tcc
main: main.c
	$(CC) main.c -o main -g -L./raylib-5.0_win64_mingw-w64/lib/ -I./raylib-5.0_win64_mingw-w64/include/  -lShlwapi -lraylib #-lm -lpthread

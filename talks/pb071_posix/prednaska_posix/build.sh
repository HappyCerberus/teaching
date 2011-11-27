gcc -std=c99 -pedantic -Wall -Wextra 01-signal.c -o signal
gcc -std=c99 -pedantic -Wall -Wextra 02-ls.c -o ls
gcc -std=c99 -pedantic -Wall -Wextra 03-locale.c -o locale
gcc -DLOCALE -std=c99 -pedantic -Wall -Wextra 03-locale.c -o xlocale
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 04-posix.c -o posix
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 05-nice.c -o nice
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 06-dirent.c -o dirent
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 07-stat.c -o stat
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 08-calc.c -o calc
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 09-size.c -o size
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 10-watcher.c -o watcher
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 11-pocet.c -o pocet
gcc -D_XOPEN_SOURCE=700 -std=c99 -pedantic -Wall -Wextra 12-fork.c -o fork

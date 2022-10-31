all: cat date ls mkdir rm shell

date: date.c
	gcc date.c -o date

ls: ls.c
	gcc ls.c -o ls

mkdir: mkdir.c
	gcc mkdir.c -o mkdir

cat: cat.c
	gcc cat.c -o cat

rm: rm.c
	gcc rm.c -o rm

shell: main.c
	gcc main.c -o shell
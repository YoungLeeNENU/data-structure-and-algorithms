# Liner_list
init_llist: init_llist.o
	gcc -o init_llist init_llist.o adt.o -std=gnu99

init_llist.o: init_llist.c adt.c adt.h
	gcc -c init_llist.c adt.c -std=gnu99

clean:
	rm *.o

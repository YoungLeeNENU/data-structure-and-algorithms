insertation_sort: insertion_sort.o
	gcc -o insertion_sort insertion_sort.o adt.o -std=gnu99

insertion_sort.o: insertion_sort.c adt.c adt.h
	gcc -c insertion_sort.c adt.c -std=gnu99

binary_insertion_sort: binary_insertion_sort.o
	gcc -o binary_insertion_sort binary_insertion_sort.o adt.o -std=gnu99

binary_insertion_sort.o: binary_insertion_sort.c adt.c adt.h
	gcc -c binary_insertion_sort.c adt.c -std=gnu99

bubble_sort: bubble_sort.o
	gcc -o bubble_sort bubble_sort.o adt.o -std=gnu99

bubble_sort.o: bubble_sort.c adt.c adt.h
	gcc -c bubble_sort.c adt.c -std=gnu99

selection_sort: selection_sort.o
	gcc -o selection_sort selection_sort.o adt.o -std=gnu99

selection_sort.o: selection_sort.c adt.c adt.h
	gcc -c selection_sort.c adt.c -std=gnu99

merge_sort: merge_sort.o
	gcc -o merge_sort merge_sort.o adt.o -std=gnu99

merge_sort.o: merge_sort.c adt.c adt.h
	gcc -c merge_sort.c adt.c -std=gnu99

shell_sort: shell_sort.o
	gcc -o shell_sort shell_sort.o adt.o -std=gnu99

shell_sort.o: shell_sort.c adt.c adt.h
	gcc -c shell_sort.c adt.c -std=gnu99

clean:
	rm *.o

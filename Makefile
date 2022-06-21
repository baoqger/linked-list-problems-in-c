basiccaller: linked-list.c basiccaller.c
	gcc linked-list.c basiccaller.c -Wall -o $@
count: linked-list.c count.c
	gcc linked-list.c count.c -Wall -g  -o $@
clean:
	rm basiccaller
	

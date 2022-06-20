basiccaller: linked-list.c basiccaller.c
	gcc linked-list.c basiccaller.c -Wall -o $@
clean:
	rm basiccaller
	

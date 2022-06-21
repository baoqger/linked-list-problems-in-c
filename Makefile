basiccaller: linked-list.c basiccaller.c
	gcc linked-list.c basiccaller.c -Wall -o $@
count: linked-list.c count.c
	gcc linked-list.c count.c -Wall -g  -o $@
getnth: linked-list.c getnth.c
	gcc linked-list.c getnth.c -Wall -g -o $@
deletelist: linked-list.c deletelist.c
	gcc linked-list.c deletelist.c -Wall -g -o $@
clean:
	rm basiccaller
	

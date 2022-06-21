basiccaller: linked-list.c basiccaller.c
	gcc linked-list.c basiccaller.c -Wall -o $@
count: linked-list.c count.c
	gcc linked-list.c count.c -Wall -g  -o $@
getnth: linked-list.c getnth.c
	gcc linked-list.c getnth.c -Wall -g -o $@
deletelist: linked-list.c deletelist.c
	gcc linked-list.c deletelist.c -Wall -g -o $@
pop: linked-list.c pop.c
	gcc linked-list.c pop.c -Wall -g -o $@
insertnth: linked-list.c insertnth.c
	gcc linked-list.c insertnth.c -Wall -g -o $@
sortedinsert: linked-list.c sortedinsert.c
	gcc linked-list.c sortedinsert.c -Wall -g -o $@
clean:
	rm basiccaller
	

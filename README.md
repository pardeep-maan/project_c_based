# project_c_based
```
$ make -j4 check
cc -Werror -Wall -Wformat=2   -c -o msg-test.o msg-test.c
cc -Werror -Wall -Wformat=2   -c -o ct/ct.o ct/ct.c
cc -Werror -Wall -Wformat=2   -c -o msg.o msg.c
ct/gen msg-test.o > ct/_ctcheck.c.part
mv ct/_ctcheck.c.part ct/_ctcheck.c
cc -Werror -Wall -Wformat=2   -c -o ct/_ctcheck.o ct/_ctcheck.c
cc   ct/_ctcheck.o ct/ct.o msg.o msg-test.o   -o ct/_ctcheck
ct/_ctcheck
.......

PASS
```

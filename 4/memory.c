#include <stdio.h>
#include <stdlib.h>

void f(void);

int main(void)
{
    f();
}
void f(void)
{
   int *x = malloc(10 * sizeof(int));
   x[10] = 50;
   printf("You put in %i\n", x[10]);
}

// below is an example of how valgrind displays errors, help50 at the end gives a bit of clarification at the end
// ~/ $ help50 valgrind ./memory                                                                                                               
// ==1173== Memcheck, a memory error detector
// ==1173== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
// ==1173== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
// ==1173== Command: ./memory
// ==1173== 
// ==1173== Invalid write of size 4
// ==1173==    at 0x40062C: f (memory.c:13)
// ==1173==    by 0x400608: main (memory.c:8)
// ==1173==  Address 0x5a07068 is 0 bytes after a block of size 40 alloc'd
// ==1173==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
// ==1173==    by 0x400623: f (memory.c:12)
// ==1173==    by 0x400608: main (memory.c:8)
// ==1173== 
// ==1173== Invalid read of size 4
// ==1173==    at 0x400637: f (memory.c:14)
// ==1173==    by 0x400608: main (memory.c:8)
// ==1173==  Address 0x5a07068 is 0 bytes after a block of size 40 alloc'd
// ==1173==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
// ==1173==    by 0x400623: f (memory.c:12)
// ==1173==    by 0x400608: main (memory.c:8)
// ==1173== 
// You put in 50
// ==1173== 
// ==1173== HEAP SUMMARY:
// ==1173==     in use at exit: 40 bytes in 1 blocks
// ==1173==   total heap usage: 1 allocs, 0 frees, 40 bytes allocated
// ==1173== 
// ==1173== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
// ==1173==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
// ==1173==    by 0x400623: f (memory.c:12)
// ==1173==    by 0x400608: main (memory.c:8)
// ==1173== 
// ==1173== LEAK SUMMARY:
// ==1173==    definitely lost: 40 bytes in 1 blocks
// ==1173==    indirectly lost: 0 bytes in 0 blocks
// ==1173==      possibly lost: 0 bytes in 0 blocks
// ==1173==    still reachable: 0 bytes in 0 blocks
// ==1173==         suppressed: 0 bytes in 0 blocks
// ==1173== 
// ==1173== For counts of detected and suppressed errors, rerun with: -v
// ==1173== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

// Asking for help...

// ==1173== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
// ==1173==    at 0x4C2FB0F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
// ==1173==    by 0x400623: f (memory.c:12)
// ==1173==    by 0x400608: main (memory.c:8)

// Looks like your program leaked 40 bytes of memory. Did you forget to free memory that you allocated via malloc? Take a closer look at line 12 of memory.c.
# Harvard CS50

### This will function as living documentation of my experience working through the Harvard CS50 course on edx.org
### To start we reviewed the concepts around binary, ASCII, procedural thinking, and abstraction.

## Intro to C language!
#### '#' tells the compilier to run this first used for include statements. Never implicitly declare something without the header file for the libraries you are using. 
#### all source code must be compiled before being ran. there are several ways to do this, make being the most easy, however I encountered errors with running make with the cs50 library on my personal machine as opposed to in the cs50 sandbox. using clang and gcc commands with specific instructions I am able to compile and run with minimal errors. Moving forward, when writing my own C programs, I will not use the cs50 library.
#### When you encounter an error in the cs50 sandbox, if you preface your make statement with help50, there may be advice from the staff that can help you in reading your error messages.
#### 3 principles code is judged by, correctness, design, and style. Correctness, does it do what it is supposed to do? Design, is the architecture thoughtful? Style, does the code look readable and consistent? 
#### If you prefix your make statement with style50 in the sandbox, you will recieve feedback around indentation and commenting.
##### Char in C can be one byte, or 8 bits. Int can be 4 bytes or 32 bits. Arrays are contiguous chunks of memory, meaning the elements are stored back to back. 
##### An ASCII example: HI! === 72 73 33 
###### A simple cipher lovestory: ascii, arrays, and amor. 
###### I LOVE YOU == 73 76 79 86 69 89 79 85
###### A most rudimentary cipher, key of 1, new  message = (+1) 74 77 80 87 70 90 80 86. As text this would be JMPWFZPV. Obviously this(and basic substitution) is a very weak cipher, but the premise and mechanisim is there. 
#### Keep main code near the top, with new functions you can create prototypes of them in the top of the file with the full declaration after the main.
#### the command echo $? is a command that will print the return value of main after a program has run
#### Intro to sorting:   
#### Bubble sort-pairwise comparison until the array is ordered.

``` javascript
 repeat until no swaps
    for i from 0 to n-2
      if i'th and i+1'th elements out of order
        swap them 
```

#### Selection sort-select for relevance  first, and keep 'ignoring' other indecies.

``` javascript
   for i from 0 to n-1
     find smallest element between i'th and n-1'th
       swap smallest with i'th element 
``` 

#### Both have similar amount of steps: (n-1)+(n-2)+...+1 equivalent to n(n-1)/2 or O(n^2) (time complexity notation)

#### Merge sort-leverage the power of multi-dimensional arrays! Split it in half, forming two arrays, sort one first by subdividing, continue subdividing until a single character, then compare with the next, merge the two together as a sorted pair. Move up in pairs, until the first half is pre-sorted, then compare the groups to sort. Repeat this process on the second half. Merge both halfs. Sounds verbose, but actually much faster than previous algorithms. Time complexity is O(n log n)

### Pointers in C
#### char * stores an address, or a pointer variable
##### Because of this nature of locating strings by memory address, one must be careful when associating variables to strings. This creates an opportunity for cross referencing the same piece of memory and therefore an opportunity for mutating data. 
##### A pointer is 64 bits or 8 bytes long
##### Variables or temporary variables often have garbage values, or stray memory storage. When trying to mutate a set of variables it is beneficial to access them by address, as opposed to their values. 
##### Any time a function is called, it gets the first slice of memory. This comes from the stack. malloc will take memory from the top of the heap down, coming to collide with the stack. Heap overflow is generally called a buffer overflow, stack a stack overflow. Dynamic memory(malloc) goes to the heap, local variables go to the stack. 
##### valgrind => command line tool for checking a program for memory leaks.  
##### One can create a structure to abstract out a conceptand encapsulate related values, to create a custom data structure. (Like a class)
##### realloc can be used to reallocate additional memory to the end of an array. This still happens linearly in the heap, but is not an efficient method.
##### Linked lists can be implemented to store and track data in a more efficent way. They allocate only what you need at the time of implementation, and add memory as you go, maintaining pointers to reference the order and location along the way. 
###### an example to implement initializing a linked list 
``` C
   typedef struct node
   {
    int n;
    struct node *next;
   }
   node;
``` 
###### A linked list points only forward, a doublely linked list is bidirectional. When adding a new value to a sorted linked list, one must begin at the first node, and follow the pointer forward, maintaining a copy of the pointer on the new value as you go, never progressing past the place where the value should be stored, this also means that as it passes values, they must point at the new value, then trade back as the process moves forward. Linked list insertions are constant time, 0(1). 
##### -> syntax in C ::: n->number works like (*n).number :: go to  the location of pointer n and access the field in the number struct. 
##### Hashing :::>>>---|> can be used to break apart data into smaller groups. hash functions recieve input and output a number usually but can output other things also. An example is organizing a group of people by their names, creating something like an array with 26 indexes (one for each letter) and each person's name becomes an element in a linked list at the index of the starting character. This is the fundamental pattern of a hash table, you have your keys on one side, and every value stored as a linked list on the other. Worst case time complexity is O(n) and best case is [O(n)/26]. This solution is still asymptotically linear in nature though.
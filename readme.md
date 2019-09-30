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


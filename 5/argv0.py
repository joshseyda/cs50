from sys import argv

if len(argv) == 2:
    print("hello, ", argv[1]) # python is excluded from the argument vector. therefore the 0th index is the file name
else:
    print("hello, world")

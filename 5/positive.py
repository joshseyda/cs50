from cs50 import get_int

def main():
    i = get_positive_int("Positive Integer: ")
    print(i)

def get_positive_int(prompt):
    while True:
        n = get_int(prompt)
        if n > 0:
            break
    return n

if __name__ == "__main__":
    main()
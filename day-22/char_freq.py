#Write a program to Character frequency. 
a = input("Enter a string: ")
freq = {}
for char in a:
    if char in freq:
        freq[char] += 1
    else:
        freq[char] = 1
for char, count in freq.items():
    print(f"'{char}': {count}")
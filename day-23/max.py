#Write a program to Find maximum occurring character
a = input("Enter a string: ")
char_count = {}
for char in a:
    if char in char_count:
        char_count[char] += 1
    else:
        char_count[char] = 1
max_char = max(char_count, key=char_count.get)
print("Maximum occurring character:", max_char)



# Write a program to Find first repeating character. 
a = input("Enter a string: ")
char_count = {}
for char in a:
    if char in char_count:
        char_count[char] += 1
    else:
        char_count[char] = 1
first_repeating = None
for char in a:
    if char_count[char] > 1:
        first_repeating = char
        break
if first_repeating:
    print("First repeating character:", first_repeating)
else:
    print("No repeating character found.")



    
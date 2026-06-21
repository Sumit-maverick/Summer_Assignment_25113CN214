#Write a program to Count vowels and consonants. 
a = input("Enter a string: ")
vowels = 0
consonants = 0
for char in a:
    if char in "aeiouAEIOU":
        vowels += 1
    elif char.isalpha():
        consonants += 1
print("Vowels:", vowels)
print("Consonants:", consonants)
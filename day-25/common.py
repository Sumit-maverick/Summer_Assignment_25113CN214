#Write a program to Find common characters in strings. 
def find_common_characters(str1, str2):
    common_chars = set(str1) & set(str2)
    return ''.join(common_chars)

str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")
print("Common characters:", find_common_characters(str1, str2)) 

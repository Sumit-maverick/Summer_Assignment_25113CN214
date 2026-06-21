#Write a program to Check anagram strings. 
def are_anagrams(str1, str2):
    return sorted(str1) == sorted(str2)
string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")
if are_anagrams(string1, string2):
    print("The strings are anagrams.")
else:
    print("The strings are not anagrams.")


    
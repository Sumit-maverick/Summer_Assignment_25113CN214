#Write a program to Check string rotation. 
def is_string_rotation(str1: str, str2: str) -> bool:
    
    if len(str1) != len(str2) or not str1:
        return False
    
    combined_string = str1 + str1
    
    return str2 in combined_string

string_a = input("Enter the first string: ")
string_b = input("Enter the second string: ")

if is_string_rotation(string_a, string_b):
    print(f"'{string_b}' is a valid rotation of '{string_a}'")
else:
    print(f"'{string_b}' is NOT a rotation of '{string_a}'")

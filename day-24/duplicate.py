#Write a program to Remove duplicate characters. 
def remove_duplicates(text):
    seen = set()
    result = []
    for char in text:
        if char not in seen:
            seen.add(char)
            result.append(char)
    return "".join(result)

input_str = input("Enter a string: ")
print("Original:", input_str)
print("Without duplicates:", remove_duplicates(input_str))

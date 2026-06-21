#Write a program to Check palindrome string. 
a=input("Enter a string: ")
b=a[::-1]
if a==b:
    print("The string is palindrome")
else:   
    print("The string is not palindrome")
#Write a program to Create voting eligibility system
age = int(input("Enter your age: "))
country = input("Enter your country: ")

if age >= 18 and country == "INDIA" or country == "India" or country == "india":
    print("You are eligible to vote.")
else:
    print("You are not eligible to vote.")
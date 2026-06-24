#Write a program to Merge two sorted arrays
a = list(map(int, input("Enter the first sorted array : ").split()))
b = list(map(int, input("Enter the second sorted array : ").split()))
c = []

i, j = 0, 0
while i < len(a) and j < len(b):
    if a[i] < b[j]:
        c.append(a[i])
        i += 1
    else:
        c.append(b[j])
        j += 1

c.extend(a[i:])
c.extend(b[j:])

print("Merged sorted array:", c)    

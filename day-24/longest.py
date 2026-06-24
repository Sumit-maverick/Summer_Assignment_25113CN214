#Write a program to Find longest word. 
def find_longest_word(words):
    if not words:
        return ""
    
    longest_word = max(words, key=len)
    return longest_word
a = input("Enter a string: ")
words = a.split()
longest_word = find_longest_word(words)
print("Longest word:", longest_word)
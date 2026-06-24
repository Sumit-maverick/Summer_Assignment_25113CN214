#Write a program to Sort words by length. 
def sort_words_by_length(words):
    return sorted(words, key=len)

words = input("Enter words: ").split()
print("Words sorted by length:", sort_words_by_length(words))
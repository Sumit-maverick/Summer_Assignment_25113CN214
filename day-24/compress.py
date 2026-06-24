#Write a program to Compress a string
def compress_string(text):
    if not text:
        return ""
    
    compressed = []
    current_char = text[0]
    count = 1
    
    for char in text[1:]:
        if char == current_char:
            count += 1
        else:
            compressed.append(f"{current_char}{count}")
            current_char = char
            count = 1
            
    compressed.append(f"{current_char}{count}")
    
    compressed_str = "".join(compressed)
    

    return compressed_str if len(compressed_str) < len(text) else text


input_str = input("Enter a string to compress: ")
print("Original:", input_str)
print("Compressed:", compress_string(input_str)) 

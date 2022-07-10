def find_needle(haystack):
    index = 0
    for element in haystack:
        if element == 'needle':
            return f"found the needle at position {index}"
        index += 1 #In The End OF LOOP

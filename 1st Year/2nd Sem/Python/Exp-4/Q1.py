'''  Code to enter a string and a substring. You have to print the number of times that 
the substring occurs in the given string. String traversal will take place from left to 
right, not from right to left. '''


main_s = input("Enter the main string: ")
sub_s = input("Enter the sub string: ")

count = 0
l = len(sub_s)
for i in range(len(main_s)):
    if(sub_s == main_s[i : i + l]):
        count += 1

print(count)

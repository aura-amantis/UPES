''' Code to  implement: Given a string containing both upper and lower case alphabets. 
Write a Python program to count the number of occurrences of each alphabet (case insensitive) 
and display the same. '''


string = input("Enter the string: ")
count = {}
string1 = string.upper()

for i in string1:
    count[i] = string1.count(i)

for k in count.keys():
    print(str(count[k]) + k)

''' Code to read an integer from STDIN. Without using any string methods, print the 
following on a single line: 
123…n 
Note that … represents the consecutive values in between. 
'''

n = int(input("Enter n: "))

i = 1
while i <= n:
    print(i,end = "")
    i = i+1

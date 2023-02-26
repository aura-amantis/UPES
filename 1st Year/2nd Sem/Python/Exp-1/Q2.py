''' Code to read an integer ‘n’ from STDIN. For all non-negative integers i<n, 
print i2 on a separate line.
'''

n = int(input("Enter n: "))

if(n<0):
    print("No negative numbers allowed.")
else:
    for i in range(n):
        print(i*i)

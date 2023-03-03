''' Code to input two values from user where the first line contains N, the number of 
test cases. The next N lines contain the space separated values of a and b. Perform integer 
division and print a/b. Print the error code in the case of ZeroDivisionError or ValueError. '''

n = int(input("Enter number of test cases: "))

for i in range(n):
    try:
        a,b = input().split()
        print(int(a)//int(b))
    except ZeroDivisionError as e:
        print("Error Code: ", e)
    except ValueError as v:
        print("Error Code: ", v)

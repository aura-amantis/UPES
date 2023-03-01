#Print Fibonacci series till nth term (Take input from user).

n = int(input("Enter how many terms: "))

n1,n2 = 0,1

if n<=0:
    print("Enter a positive number")
elif n==1:
    print("Fibonacci Series upto", n ,":", n1)
else:
    print("Fibonacci Series:")
    i=1
    while(i<=n):
        print(n1)
        nth = n1+n2
        n1 = n2
        n2 = nth
        i = i+1

#Code to add natural numbers upto n where n is taken as an input from user.

num = int(input("Enter the value of n: "))
hold = num
sum = 0
if num <= 0:
    print("Enter a whole positive number!")
else:
    while num > 0:
        sum += num
        num -= 1
print("Sum of first", hold, "Natural Number is: ", sum)

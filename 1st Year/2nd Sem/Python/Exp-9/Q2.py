''' 
Assume the following Python code-
Rewrite the code to handle the exceptions raised. Print appropriate error messages wherever applicable.

Mylist = [1,2,3, “4”,5]
sum = 0
for i in mylist:
	sum = sum + 1
print(sum)
print(mylist[5])
'''

mylist = [1,2,3,"4",5]
try:
    sum1 = 0
    for i in mylist:
        sum1 = sum1 + i
    print(sum1)
    print(mylist[5])
except TypeError as e:
    print("Error Code: ",e)        

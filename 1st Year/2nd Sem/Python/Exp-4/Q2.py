''' Code to input the first name, middle and last name of a person. Your task is to print 
the initials of the first and middle name separated by a dot (.) The last name should be 
followed by a dot and a space where the first letter is capital.  '''


def name(a):
    l = a.split()
    new = " "
    for i in range(len(l)- 1):
        a = l[i]
        new  += (a[0].upper() + '.')
    new += l[-1].title()
    return new
a = input("Enter Full Name: ")
print(name(a))

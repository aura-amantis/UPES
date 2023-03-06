'''Create a class Employee with following properties
    First Name
    Last Name
    Pay
    Email : should be automatically generated as
        Firstname + ‘.’ + Lastname + “@company.com”.  '''

class Employee:
    def __init__(self,fname,lname,pay):
        self.fname = fname
        self.lname = lname
        self.pay = pay
        self.mail = fname + "." + lname + "@company.com"

emp1 = Employee("Mohandas","Gandhi",50000	)

print(emp1.fname)
print(emp1.lname)
print(emp1.pay)
print(emp1.mail)

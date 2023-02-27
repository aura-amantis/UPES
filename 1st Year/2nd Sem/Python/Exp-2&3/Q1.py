''' Code to read the record of n students in a dictionary containing key/value pairs 
of name: [marks]. Print the average of the marks obtained by the particular student 
correct to 2 decimal places. 

Sample Input 
3 
Krishna 67 68 69 
Arjun 70 98 63 
Malika 52 56 60 

Sample Output 
56.00 
'''

n = int(input("Enter the number of students: "))
student_marks = {}

for i in range(n):
    name,*line = input().split()
    scores = list(map(float,line))
    student_marks[name] = scores
    
query_name = input()
print("{0:2f}".format(round(sum(student_marks[query_name])/ len(student_marks[query_name]),2)))

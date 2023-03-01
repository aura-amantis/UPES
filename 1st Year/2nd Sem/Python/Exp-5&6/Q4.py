''' Code to write a Python program to find the maximum and minimum values in a given list of tuples using 
lambda function. 
Original list with tuples: 
[('V', 62), ('VI', 68), ('VII', 72), ('VIII', 70), ('IX', 74), ('X', 65)] 
Output
Maximum and minimum values of the said list of tuples: 
(74, 62) '''

def max_min_list_tuples(class_students):
    return_max = max(class_students , key = lambda item: item[1])[1]
    return_min = min(class_students , key = lambda item: item[1])[1]
    return return_max , return_min

class_students = [('V', 62), ('VI', 68), ('VII', 72), ('VIII', 70), ('IX', 74), ('X', 65)]
print("Original string with tuples: ")
print(class_students)
print("\nMaximum and Minimum values of the given list of tuples: ")
print(max_min_list_tuples(class_students))

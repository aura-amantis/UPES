# Code to implement Bit Stuffing

def bit_stuffing(data):
   stuffed_string = ""
   count = 0
   for bit in data:
       if bit == '1':
           count += 1
       else:
           count = 0
       stuffed_string += bit
       if count == 5:
           stuffed_string += '0'
           count = 0
   return stuffed_string

data = input("Enter the input bit data: ")
stuffed_string = bit_stuffing(data)
print("Input data: ", data)
print("Stuffed data: ", stuffed_string)

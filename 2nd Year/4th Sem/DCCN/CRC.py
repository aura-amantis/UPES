# Code to implement Cyclic Redundancy Check (CRC)

def crc(data, generator):
   data += '0' * (len(generator) - 1)
   data = [int(bit) for bit in data]
   generator = [int(bit) for bit in generator]

   for i in range(len(data) - len(generator) + 1):
       if data[i] == 1:
           for j in range(len(generator)):
               data[i+j] ^= generator[j]

   remainder = ''.join([str(bit) for bit in data[-(len(generator)-1):]])

   return remainder

data = input("Enter the data to be transmitted: ")
generator = input("Enter the generator polynomial: ")
remainder = crc(data, generator)
transmitted_data = data + remainder
print("Transmitted data(CRC)is: ", transmitted_data)

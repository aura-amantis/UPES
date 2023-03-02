''' Assume a file city.txt with details of 5 cities in given format (cityname population(in 
lakhs) area(in sq KM) ):

Example:
Dehradun 5.78 308.20
Delhi 190 1484
……………
Open file city.txt and read to:
a. Display details of all cities
b. Display city names with population more than 10Lakhs
c. Display sum of areas of all cities
'''

f = open("city.txt", 'w')
f.write("Dehradun 5.78 308.20\n")
f.write("Delhi 19 1484\n")
f.write("Mumbai 20.5 1547\n")
f.write("Kolkata 17 1584\n")
f.write("Chennai 17.5 1657")
f.close()

#Display details of all cities

f = open("city.txt","r")
d = f.read()
print(d)
print("\n")
f.close()

#Display city names with population more than 10Lakhs

f = open("city.txt","r")
for i in f:
    list1 = i.split(" ")
    if float(list1[1]) < 10:
        continue
    print(list1[0])
print("\n")
f.close() 

#Display sum of areas of all cities

f = open("city.txt","r")
area_sum = 0
for i in f:
    lst = i.split(" ")
    area_sum += float(lst[2])
    
print("Sum of the area of all the cities is: ",area_sum,"sq KM")
f.close()

''''
----------------------------------------------------------------------------
                                  city.txt
Dehradun 5.78 308.20
Delhi 19 1484
Mumbai 20.5 1547
Kolkata 17 1584
Chennai 17.5 165
----------------------------------------------------------------------------
'''

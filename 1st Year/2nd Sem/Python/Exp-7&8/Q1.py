''' Code to implement:
	1. read a ﬁle.
	2. add backslash (\) before every double 	quote in the ﬁle contents.
	3. write it to another ﬁle in the same 	folder.
	4. print the contents of both the ﬁles.

For example:
If the ﬁrst ﬁle is 'TestFile1.txt' with text as:
Jack said, "Hello Pune".
The output of the ﬁle 'TestFile2.txt' should be:
Jack said,\"Hello Pune\". '''


f = open("TestFile1.txt", "w")
f.write('Jack said, "Hello Pune"')
f.close()

f = open("TestFile1.txt" , "r")
data = f.read()
print(data)

lst = []
for i in range(len(data)):
    lst.append(data[i])
    if(lst[i] == '"'):
        lst[i] = ' \\" '
#print(lst)
        
var = "".join(lst)
f2 = open("TestFile2.txt", "w")
f2.write(var)
f2.close()

f2 = open("TestFile2.txt", "r")
x = f2.read()
print(x)
f2.close()

'''
------------------------------------------------------------------
                          TestFile1.txt
Jack said, "Hello Pune"
------------------------------------------------------------------
                          TestFile2.txt
Jack said,  \" Hello Pune \" 
------------------------------------------------------------------
'''

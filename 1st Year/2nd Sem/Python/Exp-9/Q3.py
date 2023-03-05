''' 
Code to implement the following in file handling section: 
	1. read a file.
	2. add backslash (\) before every double 	quote in the file contents.
	3. write it to another file in the same 	 	folder.
	4. print the contents of both the files.

For example:
If the first file is 'TestFile1.txt' with text as: Jack said, "Hello Pune". 
The output of the file 'TestFile2.txt' should be: Jack said,\"Hello Pune\". 

Modify your code to implement Exception handling. Print appropriate error messages wherever applicable.
'''

try:
    f = open("TestFile1.txt", "w")
    f.write('Jack said, "Hello Pune"')
    f.close()

    f = open("TestFile7.txt" , "r")
    data = f.read()

    lst = []
    for i in range(len(data)):
        lst.append(data[i])
        if(lst[i] == '"'):
            lst[i] = ' \\" '
        
    var = "".join(lst)
    f2 = open("TestFile2.txt", "w")
    f2.write(var)
    f2.close()

    f2 = open("TestFile2.txt", "r")
    x = f2.read()
    
    f2.close()
    
except (IOError , IndexError , EOFError , ValueError , FileNotFoundError , NameError):
    print("Check for the Error!!")

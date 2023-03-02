''' Consider a ﬁle 'rhyme.txt' in D Drive with following text:

“Jingle bells jingle bells
Jingle all the way
Oh what fun it is to ride
In a one horse open sleigh
Jingle bells jingle bells
Jingle all the way”

Write a Python program to count the words in the ﬁle using a dictionary (use space 
as a delimiter). Find unique words and the count of their occurrences (ignoring case). 
Write the output in another ﬁle "words.txt" at the same location. '''


with open("rhyme.txt","w") as f:
    f.write("Jingle bells Jingle bells\n")
    f.write("Jingle all the way\n")
    f.write("Oh what funis it to ride\n")
    f.write("In a one horse open sleigh\n")
    f.write("Jingle bells Jingle bells\n")
    f.write("Jingle all the way")
    
f = open("rhyme.txt","r")
f1 = open("word.txt","w")
d = f.read()
lst = d.split()
l = len(lst)
dict1 = {}
dict2 = {}
lst1=[]

for i in range(0,l):
    dict1[i] = lst[i]

for key,value in dict1.items():
    dict2.setdefault(value,set()).add(key)
    [key for key,value in dict2.items() if len(value)>1]
    
for i in set(dict2):
    f1.write(i)                                                  
    f1.write("\n")
    
f1.write("\n")
f1.write(str(len(set(dict2))))
f1.write("\n")
f.close()
f1.close()

'''
--------------------------------------------------------------------------
                                  rhyme.txt
Jingle bells Jingle bells
Jingle all the way
Oh what funis it to ride
In a one horse open sleigh
Jingle bells Jingle bells
Jingle all the way
--------------------------------------------------------------------------
                                  word.txt
way
open
it
all
sleigh
a
funis
bells
In
what
horse
one
ride
Jingle
Oh
to
the

17
'''

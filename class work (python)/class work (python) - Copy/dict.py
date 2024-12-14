""" d={1:"hello",2:"world",3:"python"}
print(d.get(1))
print(d.items())
print(d.keys())
d.update({4:"sahil",5:"sita"}) #adds 
print(d)
d.pop(3) # delets the key  
print(d)
d.popitem() #delets the whole item
print(d)
 
d{}

for i in range(1,31):
    d[i]=i*i

print(d)

s= input("Enter Name: ")
d={}

#hello h:1 e:1 l:2 o:1

for i in s:
    if i in d:
        d[i]+=1
    else:
        d[i]=1

print(d)

"""

l=[1,2,3]
l1=[6,7,8]

d={}

for i in range(0,3):
    d[l[i]]=l1[i]

print(d)


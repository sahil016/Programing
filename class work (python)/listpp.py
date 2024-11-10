""" l = [1,2,1,1.45,6.24,"hello","python",True]

l.append(100) # adds new element in the last
print(l)

print(l.count(1))
l.extend([100,600,800]) # addelemetn
print(l)
l.insert(2,"antima") #insert the value on sertain index
print(l)

l.pop(2)#remuvee the endex value
print(l)
l.remove(1.45) #remove the value
l.reverse()#revers the list
print(l) """


""" s=[1,2,3,4,5]
n=list(filter(lambda x: x%2==0,s))
print(n)
 """

""" l=[]
ev=[]
od=[]

for i in range(1,31):
    l.append(i)
    if i%2==0:
        ev.append(i)
    
    else:
        od.append(i)

print(l)
print(ev)
print(od)
 """
l=[1,2,3,1,2]
l1=[]
l2=[]
for i in l:
    if i not in l1:
        l1.append(i)

    else:
        l2.append(i)
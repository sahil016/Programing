n = input("Enter: ")

if len(n)%2==0:
    print(n)
else:
    n1=int(len(n)/2)
    print(n[n1-1]+n[n1]-n[n1+1])
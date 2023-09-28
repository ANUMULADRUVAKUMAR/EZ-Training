def Linear_Search(l1,s):
    k=0
    for i in l1:
        if(s==i):
            return ("Element found")
    return ("Element not found")
        
l1=list(map(int,input("Enter array elements").split(',')))
s=int(input("Enter search element"))
print(Linear_Search(l1,s))
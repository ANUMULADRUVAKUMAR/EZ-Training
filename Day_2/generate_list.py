def generate_list(n):
    l1=[]
    for num in range(n):
        row=[]
        for i in range(n):
            row.append(i)
        l1.append(row)
    return l1
print(generate_list(10))
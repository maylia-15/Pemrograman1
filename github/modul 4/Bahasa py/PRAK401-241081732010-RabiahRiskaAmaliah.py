h, j= (input("").split())   
h = int (h)
for i in range(1, 51):
    if i % h == 0:
        print(j, end=" ") 
    else:
        print(i, end=" ") 
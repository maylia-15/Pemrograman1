a, b = map(int, input().split())   
x, y =a, b 

while True:
    print(x, y, end="")
    if x == b and y == a:
        break
    if a > b:
         x -= 1
         y += 1
    else:
        x += 1
        y -= 1
    print(" - ", end="")

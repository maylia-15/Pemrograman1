def reverse(a) :
    reserve = 0
    while a > 0:
        reserve = reserve * 10 + (a % 10)
        a = a//10
    return reserve

A, B = map(int,input().split())  
A = reverse(A)
B = reverse(B)
C = A+B
print(reverse(C))
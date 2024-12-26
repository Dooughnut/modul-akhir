A, B, C = map(int, input().split())

if A > B and A > C:
    if B > C:
        print(C, B, A)
    else:
        print(B, C, A)
elif B > A and B > C:
    if A > C:
        print(C, A, B)
    else:
        print(A, C, B)
else:
    if A > B:
        print(B, A, C)
    else:
        print(A, B, C)

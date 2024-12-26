N = int(input())

if N >= 1 and N < 10:
    print("satuan")
elif N == 0:
    print("nol")
elif N >= 11 and N < 20:
    print("belasan")
elif N >= 20 and N < 100 or N == 10:
    print("puluhan")
else:
    print("Anda menginput melebihi limit bilangan")
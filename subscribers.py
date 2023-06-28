n = int(input())
if n <= pow(10, 3) - 1:
    print(n)
elif n >= pow(10, 3) and n <= pow(10, 4) - 1:
    print(int(n / 10) * 10)
elif n >= pow(10, 4) and n <= pow(10, 5) - 1:
    print(int(n / 100) * 100)
elif n >= pow(10, 5) and  n <= pow(10, 6) - 1:
    print(int(n / 1000) * 1000)
elif n >= pow(10, 6) and n <= pow(10, 7) - 1:
    print(int(n / 10000) * 10000)
elif n >= pow(10, 7) and n <= pow(10, 8) - 1:
    print(int(n / 100000) * 100000)
elif n >= pow(10, 8) and n <= pow(10, 9) - 1:
    print(int(n / 1000000) * 1000000)
n = int(input())
s_list = []
a_list = []
min = 0
for i in range(n):
    s, a = input().split(' ')
    s_list.append(s)
    a_list.append(int(a))
    if a_list[min] > a_list[i]:
        min = i
for i in range(n):
    print(s_list[(i + min) % n])
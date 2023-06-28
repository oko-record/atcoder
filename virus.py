import math

n, d = map(int, input().split(' '))
x_list = []
y_list = []
v_list = []
v_list.append(0)

for i in range(n):
    x, y = map(int, input().split(' '))
    x_list.append(x)
    y_list.append(y)

def dis(x_list, y_list, m, n):
    return math.sqrt(pow(x_list[m] - x_list[n], 2) + pow(y_list[m] - y_list[n], 2))

def new(v_list, k):
    for j in range(n):
        if j not in v_list:
            if dis(x_list, y_list, k, j) <= d:
                v_list.append(j)
                new(v_list, j)

new(v_list, 0)

v_list = sorted(v_list)

for i in range(n):
    if i in v_list:
        print('Yes')
    else:
        print('No')

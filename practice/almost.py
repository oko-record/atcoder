import copy

def count_same_characters(str1, str2):
    count = 0
    for char1, char2 in zip(str1, str2):
        if char1 == char2:
            count += 1
    return count

def check(iter, n, m, s_list, flag):
    for i in range(n-1):
        for j in range(i, n-1):
            s2_list = s_list.copy()
            if count_same_characters(s_list[i], s_list[i+1]) == m-1:
                s2_list[i+1], s2_list[j] = s2_list[j], s2_list[i+1]
                iter += 1
                if flag:
                    if iter < n-1:
                        flag = check(iter, n, m, s2_list, flag)
                    else:
                        print('Yes')
                        return False
    if flag:
        return True
    else:
        return False


n, m = map(int, input().split())
s_list = []
s2_list = []
iter = 0
flag = True


for i in range(n):
    s_list.append(input())

final = check(iter, n, m, s_list, flag)
if final:
    print('No')

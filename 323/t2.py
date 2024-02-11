n, m = map(int, input().split())
a = list(map(int, input().split()))
s = [input() for _ in range(n)]

cnt = [0] * n
tmp = [[] for _ in range(n)]

for i in range(n):
    for j in range(m):
        if s[i][j] == 'o':
            cnt[i] += a[j]
        else:
            tmp[i].append(a[j])
    cnt[i] += i + 1
    tmp[i].sort(reverse=True)

for i in range(n):
    c = cnt[i]
    acnt = 0
    for j in range(len(tmp[i])):
        allButI = all(x < c for x in cnt[:i]) and all(x < c for x in cnt[i+1:])
        
        if allButI:
            print(acnt)
            break
        else:
            acnt += 1
            c += tmp[i][j]

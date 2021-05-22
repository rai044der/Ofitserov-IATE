n = int(input())
a = list(map(int, input().split()))
F = [0] * n
for i in range(n):
    for j in range(i):
        if a[i] % a[j] == 0 and F[j] > F[i]:
            F[i] = F[j]
    F[i] += 1
print(max(F))


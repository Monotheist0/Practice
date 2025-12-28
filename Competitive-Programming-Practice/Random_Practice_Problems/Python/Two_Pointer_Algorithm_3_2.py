
n, x = map(int, input().split())
a = list(map(int, input().split()))

sums = {}

for i in range(n):
    for j in range(i + 1, n):
        cur_sum = a[i] + a[j]
        if cur_sum not in sums:
            sums[cur_sum] = (i + 1, j + 1)

for k in range(n):
    for l in range(k + 1, n):
        new_sum = a[k] + a[l]
        required = x - new_sum
        
        if required in sums:
            i, j = sums[required]
            if i != k + 1 and i != l + 1 and j != k + 1 and j != l + 1:
                print(i, j, k + 1, l + 1)
                exit()

print("IMPOSSIBLE")
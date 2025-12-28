n = int(input())
a = [*map(int,input().split(" "))]

total_sum = sum(a)

if not(total_sum %3 == 0):
    print("0")
    exit()
target_sum = total_sum//3
total_ways = 0
current_sum = 0
first_part = 0
for i in range (n-1):
    current_sum+=a[i]
    if(current_sum == 2*target_sum):
        total_ways += first_part
    if(current_sum == target_sum):
        first_part += 1

print(f"{total_ways}")


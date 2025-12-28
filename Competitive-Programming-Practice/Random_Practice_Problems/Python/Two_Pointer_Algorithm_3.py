n,x = map(int, input().split())
a = list(map(int, input().split()))
indexed = [(value, i+1) for i , value in enumerate(a)]
indexed.sort(key = lambda z: z[0])
o = 0
for o in range (n-3):
    for z in range (o+1,n-2):
        l, r = z+1,n-1
        while(l < r):
            current_sum = indexed[o][0]+indexed[z][0]+indexed[l][0]+indexed[r][0]
            if(current_sum == x):
                print(indexed[o][1],indexed[z][1],indexed[l][1],indexed[r][1])
                exit()
            elif(current_sum < x):
                l+=1
            else:
                r-=1
print("IMPOSSIBLE")
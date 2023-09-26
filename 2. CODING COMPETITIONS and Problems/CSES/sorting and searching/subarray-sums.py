# for i in range(100, -1, -1):
#     print(i)


#!without using prefix sum, and without running a map, the easiest way in O(N^2)
x=int(input())
y=int(input())
arr=[]
ans=0
for i in range(0,x,1):
    x=int(input())
    arr.append(x)

    sum=0
    arr2=[]
    for j in range(i, -1, -1):
        arr2.append(arr[j]) 
        print(arr2)


        sum+=arr[j]
        if sum==y:
            ans+=1
        
print(ans)
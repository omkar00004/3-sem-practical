

def sort(arr,size):
    for i in range(size-1):
        minIndex=i
        for j in range(i+1,size):
            if(arr[minIndex]>arr[j]):
                minIndex=j
        arr[minIndex],arr[i]= arr[i],arr[minIndex]

list=[7,1,4,3,9]
size=len(list)
sort(list,size)
print(list)

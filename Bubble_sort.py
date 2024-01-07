
def sort(arr,size):
   for i in range(1,size):
       for j in range(size-i):
           if arr[j]>arr[j+1]:
               arr[j],arr[j+1]=arr[j+1],arr[j]


unsorted_elements=[4,2,5,3,3,5,7,9,2,3,6,8,1]
size=len(unsorted_elements)

sort(unsorted_elements,size)

print(f"Sorted array are {unsorted_elements} ")

def binarySort(arr, size):
    
    for i in range(1,size):
        for j in range(size-i):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]


def sort(arr,size):
    for i in range(size-1):
        minIndex=i
        for j in range(i+1,size):
            if(arr[minIndex]>arr[j]):
                minIndex=j
        arr[minIndex],arr[i]= arr[i],arr[minIndex]
        
no_elem=int(input("How may elements do you want? "))
position=1
list=[]
for i in range(no_elem):
    elements=int(input(f"Enter the elements at position {position} of list: "))
    list.append(i)
    position+=1
    
size=len(list)

a="\na.Selection sort\nb.Bubble sort\nc.Quick sort\n"
choice=input("What sorting do you want to perform? "+a).lower()

if choice=='b':
    for i in list:
       
    
    

    
    
    
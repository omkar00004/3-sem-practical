
def sentinal(arr, size, key):
    last = arr[size-1]
    
    arr[size-1] = key
    
    i=0
    while arr[i]!=key:
        i+=1
        
    arr[size-1]=last
    
    if (i<size-1) or (arr[i]==key):
        print(f"\n{key} is present at index {i}\n")
    else:
        print("\nElement not found.\n")
        
def linear(arr, size, key):
    
    for i in range(len(arr)) :
        if arr[i]==key:
            print(f"\n{key} is present at index {i}\n")
            return 
           
    print("Element not found.\n")
    
def binary(arr, size, key):
    start=0
    end=size-1
    
    mid=start+(end-start/2)
    
    while(start<=end):
        if arr[mid]== key:
            print(f"\n{key} is present at index {mid}\n")
            
        if key>arr[mid]:
            start=mid+1
        else:
            key<arr[mid]
            end=mid-1
        
        mid=start+(end-start/2)
    
    
        print("Element not found.\n")   

# ***************************************************************
arr=[1,23,4,5,6,2,3,6,7,8,9]
size=len(arr)

print(arr)

key=int(input("Enter key: "))

a = ("\nSentinal\nLinear\nBinary\nFibonacci\n :")
choice=input("Which search do you want to implement? "+ a).lower()

if choice=="sentinal":
    sentinal(arr, size, key)
elif choice=="linear":
    linear(arr, size, key)
elif choice=="binary":
    linear(arr, size, key)


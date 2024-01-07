

def serach(arr, size, key):
    start=0
    end=size-1
    
    mid=start + (end-start)//2 
    
    while start<=end:      
        if arr[mid]==key:
            return mid
        
        if arr[mid]<key:
            start=mid+1
        else:
            end=mid-1
        
        mid=start+(end-start)//2
    
    return -1
    
        
even_arr=[1,2,3,4,5]
print(serach(even_arr,5,4))
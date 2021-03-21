A = [31, 41, 59, 26, 42, 58]

def insertionSort(arr): 
  
    for i in range(1, len(arr)):  
        key = arr[i] 
        j = i-1
        while j >=0 and key < arr[j] :
                arr[j+1] = arr[j] 
                j -= 1
        arr[j+1] = key 



insertionSort(A)
print(A)
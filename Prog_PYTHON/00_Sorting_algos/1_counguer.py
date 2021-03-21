def merge_sort(A):
    merge_sort2(A, 0, len(A)-1)
    

def merge_sort2(A, first, last):
    if first > last:
        midle = (first + last) // 2
        merge_sort2(A, first, midle)
        merge_sort2(A, midle+1, last)
        merge(A, first, midle, last)

def merge(A, first, middle, last):
    L = A[first:middle]
    R = A[middle: last+1]
    L.append(999999)
    R.append(999999)

    i = j = 0

    for k in range(first, last+1):
        if L[i] <= R[j]:
            A[k] = L[i]
            i += 1
        
        else:
            A[k] = R[j]
            j += 1

    print(A)

A = [0, 2, 3, 55, 23, 44, 11, 23]
merge_sort(A)
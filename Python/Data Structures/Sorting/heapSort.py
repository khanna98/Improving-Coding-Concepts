def heapify(arr,n,i):
    largest = i
    l = 2*i+1
    r = 2*i+2

    if l<n and arr[l]>arr[largest]:
        largest = l
    
    if r<n and arr[r]>arr[largest]:
        largest = r

    if largest!=i:
        temp = arr[i]
        arr[i] = arr[largest]
        arr[largest] = temp

        heapify(arr,n,largest)

def heapSort(arr):
    n = len(arr)
    for i in range(n,-1,-1):
        heapify(arr,n,i)

    for i in range(n-1,-1,-1):
        temp = arr[0]
        arr[0] = arr[i]
        arr[i] = temp

        heapify(arr,i,0)

def printArray(arr):
    n = len(arr)
    for i in range(n):
        print(arr[i],end=" ")
    print()

if __name__ == '__main__':
    arr = [12,11,5,6,1,2,4]
    heapSort(arr)
    print("Sorted Array : ",end=" ")
    printArray(arr)
def bubbleSort(arr):
    n = len(arr) # Length of Array

    # Traverse the array
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]

def printArray(arr):
    for i in range(len(arr)):
        print(arr[i],end=" ")
    print()

if __name__ == '__main__':
    arr = [64,34,25,12,22,11,90]
    bubbleSort(arr)
    printArray(arr)
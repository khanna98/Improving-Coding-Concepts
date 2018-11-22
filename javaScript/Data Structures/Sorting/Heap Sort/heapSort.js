// Function to swap to values
function swap(arr,n1,n2){
    var temp = arr[n1];
    arr[n1] = arr[n2];
    arr[n2] = temp;
}

// Function to create a heap
function heapify(arr,n,i){
    var largest,l,r;
    largest = i;
    l = 2*i+1;
    r = 2*i+2;

    if(l<n && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(arr,i,largest);
        heapify(arr,n,largest);
    }

}

// Function to sort the array in ascending order
function heapSort(arr,n){
    for(var i=Math.floor(n/2);i>=0;i--){
        heapify(arr,n,i);
    }
    for(var i=n-1;i>=0;i--){
        swap(arr,0,i);
        heapify(arr,i,0);
    }
}


// Driver function to test code
function fun(){
    alert("Answer is " + heapSort([3,0,10,8,1,5,4],7));
}
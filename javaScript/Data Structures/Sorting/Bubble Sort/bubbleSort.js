// Function to swap two values
function swap(arr,first,second){
    var temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

// Function to sort Array/List
function bubbleSort(arr){
    var len = arr.length;
    var i,j,stop;
    for(i=0;i<len;i++){
        for(j=0;j<len-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }

    return arr;
}

// Print the Array
// document.getElementById("ans").innerHTML(bubbleSort([3,0,10,8,1,5,4]));
// console.log(bubbleSort([3,0,10,8,1,5,4]));
function fun(){
    alert("Answer is " + bubbleSort([3,0,10,8,1,5,4]));
}
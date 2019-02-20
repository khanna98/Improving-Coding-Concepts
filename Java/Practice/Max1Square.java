class Max1Square{
    public static void main(String[] args) {
        // Given Boolean Array
        int arr[][] = {
            {1,1,1,0,1},
            {1,1,1,1,0},
            {1,1,1,1,0},
            {0,1,1,1,0}}; 
            
        int newArr[][] = new int[4][5]; // Declare an identical array with same size

        int R = arr.length;
        int C = arr[0].length;

        for(int i=0;i<R;i++){
            newArr[i][0] = arr[i][0];
        }
        for(int j=0;j<C;j++){
            newArr[0][j] = arr[0][j];
        }

        int omax = Integer.MIN_VALUE;

        for(int i=1;i<R;i++){
            for(int j=1;j<C;j++){
                if(arr[i][j]==1){
                    newArr[i][j] = Math.min(newArr[i][j-1],Math.min(newArr[i-1][j],newArr[i-1][j-1])) + 1;
                }
                else{
                    newArr[i][j] = 0;
                }

                if(omax<newArr[i][j]){
                    omax = newArr[i][j];
                }
            }
        }

        // Printing the new Array
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                System.out.print(newArr[i][j] + " ");
            }
            System.out.println();
        }

        // Printing the Answer
        System.out.println("The Answer is " + omax);
    }
}
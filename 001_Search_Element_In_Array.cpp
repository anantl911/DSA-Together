int search(int arr[], int N, int X)
{   
    int k=0;
    for(int i = 0 ; i<N ; i++){
        if(arr[i]==X){
            return i;
            }
        else{
            k++;
        }
    }
    if(k==N){
        return -1;
    }
}

void bubblesort( int arr[], int n){
    int i, j; // uma vez c1 
    for (i=0;i<n-1;i++) // c2 * (n-1)
    for(j=0; j<n-1;i++) // c3 
if(arr[j]> arr[j + 1])
  swap(&arr[j], &arr[j+1]);
}
// t(n)= O(n^2)

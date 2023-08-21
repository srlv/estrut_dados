int max(int arr[], int n ){
    int i; // uma vez c1
    int max = arr[0]; // uma vez c2
    for (i=1; i<n;i++)// n -1 vezes c3
    if(arr[i]>max) // n -1 vezes c4
    max = arr[i];// n -1 vezes c5
return max; // uma vez c6
} 
/* t(n)= c1+c2+c3(n-1)+c4(n-1)+c5(n-1)+c6 
         (c3+c4+c5)(n-1)+c1+c2+c6
         ~~~~~~~~~~      ~~~~~~~~
             a               b

            a(n-1)+b  
*/




void insertionsort(int arr [], int n){
    int i, key, j; // uma vez c1
    for(i=1;i<n; i++){// n-1 vezes c2
        key =arr[i];// uma vez c3
        j=i-1;// uma vez c4
        while (j>=0 && arr[j]> key ){// n+1*n-1 vezes c5
            arr[j+1]=arr[j];// n vezes c6
            j=j-1;// uma vez c7
        }
        arr[j+1]=key;// uma vez c8
    }
}




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



#include <climits>

void bubbleSort(int arr[], int n) {
    

    for (int i = 0; i < n - 1; i++) {

      for (int j = 0; (j + 1) < n - i; j++) {

          if (arr [j] > arr[j + 1]) {

              int temp = arr[j];
              arr[j] = arr[j + 1]; 
              arr[j + 1] = temp;
          }        
      }
    }

}


/*   for (int i = 0; i < n - 1; i++) {

        int max = INT_MIN;
        int index = i;

        for (int j = 0; j < n - i; j++) {

          if (max < arr[j]) {

            max = arr[j];
            index = j;
          }
        }

        int temp = arr[index];
        arr[index] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
   }

*/
Problem statement
You have been given an integer array(ARR) of size N.

Now, in the given array, all numbers are present twice or more than twice except only one number is present only once.

You need to find and return that number which is unique in the array.

 Note:
Unique element is always present in the array according to the given condition.


int findUnique(int arr[], int size)
{

   int* newArr = new int [size]{0};

   for (int i = 0; i < size; i++) {

      if (newArr [i] == 1) {

         continue;
      }

      for (int j = i + 1; j < size; j++) {

         if (arr [i] == arr [j]) {

            newArr [i] = 1;
            newArr [j] = 1;
         }
      }
   }

   for (int i = 0; i < size; i++) {

      if (newArr [i] == 0) {

         return arr [i];
      }
   }

   return -1;
}
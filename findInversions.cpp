int getInversions(int arr[], int n)
{
    //Write your code here

    int sum = 0;

    for (int i = 0; i < n; i++) {

        int minIndex = i;
        int min = arr [minIndex];

        for (int j = i + 1; j < n; j++) {

            if (min > arr [j]) {

                minIndex = j;
                min = arr [j];
            } 
        }

        sum += (minIndex - i);
        int temp = arr [i];
        arr [i] = min;
        arr [minIndex] = temp;
    }

    return sum;
}
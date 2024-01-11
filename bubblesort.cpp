#include <iostream>
using namespace std;

void bubblesort(int array[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        //  bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {

            if (array[j] > array[j + 1])
            {

                swap(array[j], array[j + 1]);
                // swapped==true;
            }
        }
        // if(swapped==false){
        //     break;
        // }
    }
}

int main()
{

    int n = 5;

    int arr[n] = {42, 5, 2, 45, 2};

    bubblesort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <stdio.h>
# define MAX 50

//function for second Largest
int secondLargest(int array[], int num)
    {
        //Temporary assignment of values
        int max1,max2;
        if (array[0] > array[1])
            {
                max1 = array[0];
                max2 = array[1];
            }
        else
            {
                max2 = array[0];
                max1 = array[1];
            }

        // finding the second largest element
        for (int i = 2; i < num; i++)
            {
                if (max1 < array[i])
                    {
                        max2 = max1;
                        max1 = array[i];
                    }
                else if (max2 < array[i])
                    {
                        max2 = array[i];
                    }
            }
        return max2;
    }

//function for the second smallest Number
int secondSmallest(int array[], int num)
    {
        int min1, min2;

        //Temporary assignment of values
        if (array[0] < array[1])
            {
                min1 = array[0];
                min2 = array[1];
            }
        else
            {
                min1 = array[1];
                min2 = array[0];
            }

        // for the second smallest number
        for (int i = 2; i < num; i++)
        {
            if (array[i] < min1)
                {
                    min2 = min1;
                    min1 = array[i];
                }
            else if (array[i] < min2)
                {
                    min2 = array[i];
                }
        }
        return min2;
    }

int main()
    {
        int i, arr127[MAX], no127;

        printf("Enter the Size of the array: ");
        scanf("%d", &no127);

        // Getting the elements for the array
        printf("Enter the Elements of the array: \n");
        for (i = 0; i < no127; i++)
        {
            scanf("%d", &arr127[i]);
        }

        // displaying the array
        for (i = 0; i < no127; i++)
        {
            printf("%d ", arr127[i]);
        }

        //function call for the smallest and the largest 
        int L2 = secondLargest(arr127, no127);
        int S2 = secondSmallest(arr127, no127);

    printf("\nThe Secondlargest Value is: %d\nThe smallest value is: %d",L2 ,S2 );

    }

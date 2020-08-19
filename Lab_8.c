#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define N 20 // the number of elements in the array


int program_1_1(int a[], int i, int sum)
{

    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]); // tabulates the array
    }
    printf("\n");
    sum = 0;
    for (i = 0; i < N; i++)
    {
        if (a[i] < 0)
            sum += a[i]; // finding the sum
    }
    printf("\nThe sum of negative elements of array = %d\n", sum);
    return 0;
}


int program_1_2(int a[], int i, int imax, int imin, int ibeg, int iend, int mult, int max, int min)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50;  // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");
    max = a[0];
    min = a[0];
    mult = 1;
    for (i = 0; i < N; i++)
    {
        /* canvassing for a maximum item and its number */
        if (a[i] > max)
        {
            max = a[i];
            imax = i;
        }
        /* canvassing for a minimum item and its number */
        if (a[i] < min)
        {
            min = a[i];
            imin = i;
        }
    }
    printf("\nMax element = %d\n", max);
    printf("Min element = %d\n", min);
	
    /* viewing the array starting from the item following the maximum (minimum) to the item preceding the minimum (maximum). view boundary indexes are stored in ibeg and iend variables. */
	
    ibeg = imax < imin ? imax : imin;
    iend = imax < imin ? imin : imax;
    for (i = ibeg + 1; i < iend; i++)
    {
        mult *= a[i]; // finding the multiplication
    }
    printf("\nMultiplication of array elements between min and max = %d\n", mult);
    return 0;
}


int program_1_3(int a[], int i)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");

    for (i = 0; i < N; i++)
    {
        /* If i is a multiple of 10, we translate the line */
        if (!(i % 10))
            puts(""); 
        printf(" %d", a[i]);
    }
    return 0;
}


int program_1_4(int a[], int i, int j, int temp)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (i = 0; i < N - 1; i++)
    {
        /* ascending order using bubble sorting */
        for (j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1]) // if the current item is bigger than the next one
            {
                /* switch them up */
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}


int program_7_1(int a[], int i, int i_max, int max)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");

    max = a[0];
    i_max = 0;
    for (i = 0; i < N; i++)
    {
        /* canvassing for a maximum item and its number */
        if (max < a[i])
        {
            max = a[i];
            i_max = i;
        }
    }
    printf("\nNumber of the maximum element in the array = %d\n", i_max + 1);
    return 0;
}


int program_7_2(int a[], int i, int i_one, int i_two, int result)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");

    result = 1;
    i_one = -1;
    i_two = -1;
    for (i = 0; i < N; i++)
        /* search for the first zero element */
        if (i_one == -1 && a[i] == 0)

            i_one = i;

        /* search for the second zero element */
        else if (i_two == -1 && a[i] == 0)

            i_two = i;

    if (fabs(i_one - i_two) > 1)
        for (i = i_one + 1; i < i_two; i++)
            result *= a[i]; // finding the sum
    /* various conditions */
    if (i_one < 0)
    {
        printf("\nThere are no zeros, I recommend restarting the program\n");
        return -1;
    }
    else
    {
        printf("\nIndex 1 of the null element: %d\n", i_one);
    }
    if (i_two < i_one)
    {
        printf("\nThere is no second zero, the result will be incorrect, I recommend restarting the program\n");
        return -1;
    }
    else
        printf("\nIndex 2 of the null element: %d\n", i_two);
    printf("\nMultiplication of array elements located between the first and second zero elements = %d\n", result);
    return 0;
}


int program_7_3(int a[], int i, int d[], int k, int j)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        d[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array d[i]
        printf("\n%d", a[i]);
    }
    printf("\n");
    j = N / 2;
    k = 0;
    for (i = 0; i < N; i++)
    {
        if ((i + 1) % 2 == 0) // even elements
        {
            d[j] = a[i];
            j++;
        }
        else // odd elements
        {
            d[k] = a[i];
            k++;
        }
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        printf("%d\t", d[i]);
    }
    return 0;
}


int program_7_4(int a[], int i, int c, int b)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");
    b = 0;
    c = 0;
    for (i = 0; i < N; i++)
    {
        if (a[i] == 0)
        {
            c = c + 1;
            if (c > b)
            {
                b = c;
            }
        }
        else {
            c = 0;
        }
    }
    printf("\nThe longest sequence = %d\n", b);
    return 0;
}


int program_16_1(int a[], int i, int neg)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");
    neg = 0;
    for (i = 0; i < N; i++)
    {
        /* searching for negative elements */
        if (a[i] < 0) 
            
            neg += 1;
    }
    printf("\nNegative: %d\n", neg);
    return 0;
}


int program_16_2(int a[], int i, int temp, int mod_min, int sum)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);

    }
    mod_min = a[0]; // minimum module
    temp = 0; // index of the minimum module

    for (int i = 1; i < N; i++)
    {
        /* searching for the minimum item by module of the element */
        if (mod_min > abs(a[i])) 
        {
            mod_min = a[i];
            temp = i;
        }
    }

    sum = 0;// searching for the minimum item by module
    for (int i = temp + 1; i < N; i++)
    {
        sum += abs(a[i]); // finding the sum
    }
    printf("\n\nThe sum of modules of the elements located after the minimum element module: %d\n", sum);
    return 0;
}


int program_16_3(int a[], int i, int temp, int j)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        /* replacing the negative elements with their squares */
        if (a[i] < 0)
            a[i] = a[i] * a[i];
    }
    for (i = 0; i < N - 1; i++)
    {
        /* ascending order using bubble sorting */
        for (j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1]) // если текущий элемент больше следующего
            {
                /* switch them up */
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}


int program_16_4(int a[], int i, int min)
{
    srand((unsigned)time(NULL)); // random number generator base (current time)
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 - 50; // generates random numbers from -50 to 49 in an array a[i]
        printf("%d\t", a[i]);
    }
    printf("\n");

    min = 49;
    for (i = 0; i < N; i++)
    {
        if (a[i] > 0) // searching for all the positive elements
        {
            /* searching for the smallest among them */
            if (min > a[i])
            {
                min = a[i];
            }
        }
    }
    printf("\nThe smallest among the positive = %d\n", min);
    return 0;
}

void show_menu() // Menu
{
	  	system("cls");
       		printf("\n-------------------------\n");
		printf("\nYou can choose the number of a task among:");
		printf("\nIn a one-dimensional array consisting of N real elements...");
		printf("\n11 - calculate the sum of negative array elements");
		printf("\n12 - calculate the product of array elements located between the maximum and minimum elements");
		printf("\n13 - fill it with random values and print it with 10 numbers in a line");
		printf("\n14 - arrange the array elements in ascending order");
		printf("\n71 - calculate number of the maximum element of the array");
		printf("\n72 - arrange the array elements located between the first and second zero elements");
		printf("\n73 - convert array so that in its first half there were elements standing in odd positions, and in its second half - elements standing in even positions");
		printf("\n74 - calculate the length of the longest sequence of consecutive walking array elements equal to zero");
		printf("\n161 - calculate the number of negative elements of the array");
		printf("\n162 - calculate the sum of modules of array elements located after the minimum module element");
		printf("\n163 - replace all negative elements of the array with their squares and arrange the array elements in ascending order");
		printf("\n164 - find all the positive values of the array elements, choose the smallest among the positive\n\n");
		printf("Print '0' then 'Enter' to show menu.\n");
}

int main()
{
    int a[N], d[N], i = 0, j = 0, k = 0, sum = 0, ibeg = 0, iend = 0, mult = 0, temp = 0, min = 0, max = 0, i_max = 0, i_one = 0, i_two = 0, result = 0, c = 0, b = 0, neg = 0, imax = 0, imin = 0, mod_min = 0, n;		
	
	show_menu();
	
    do
    {
        printf("\nInput number of task:\n");
        printf("-------------------------\n");
		
        scanf("%d", &n);

        switch (n)
        {
        case 11: program_1_1(&a[N], i, sum);
            break;
        case 12: program_1_2(&a[N], i, imax, imin, ibeg, iend, mult, min, max);
            break;
        case 13: program_1_3(&a[N], i);
            break;
        case 14: program_1_4(&a[N], i, j, temp);
            break;
        case 71: program_7_1(&a[N], i, max, i_max);
            break;
        case 72: program_7_2(&a[N], i, i_one, i_two, result);
            break;
        case 73: program_7_3(&a[N], i, &d[N], k, j);
            break;
        case 74: program_7_4(&a[N], i, c, b);
            break;
        case 161: program_16_1(&a[N], i, neg);
            break;
        case 162: program_16_2(&a[N], i, temp, mod_min, sum);
            break;
        case 163: program_16_3(&a[N], i, temp, j);
            break;
        case 164: program_16_4(&a[N], i, min);
            break;
		case 0:
        {
            show_menu();
            break;
        }
        default:
            printf("\nThere are no tasks under this number\n");
        }
    } while (n != -1);
    printf("\nThe end\n");
    return 0;
}
/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    int i = 0; n = n - 1;
    printf("%i %i %i %i %i %i \n", values[i], values[n], values[(n-i) / 2 + i], i, n, (n-i) / 2 + i);
    if ((value < values[i]) || (value > values[n])) 
    {
    return false;
    }
    else if ((value == values[i]) || (value == values[n])) return true;
    else
    do
    { 
      if  (value < values[(n-i) / 2 + i])  n = n - (n-i) / 2;
      else if (value > values[(n-i) / 2 + i])  i = i + (n-i) / 2;
      else return true;
     //printf("%i %i %i %i %i %i \n", values[i], values[n], values[(n-i) / 2 + i], i, n, (n-i) / 2 + i);
    }
    while ( (n - i) > 1); //|| (value != values[i]) || (value != values[n])) ;
    if ((value == values[i]) || (value == values[n])) return true;
    else return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i<n; i++)
    {
        for (int j = i; j< n; j++)
        {
            int sw = 0;
            if (values[i] > values[j])
            {
                sw = values[i];
                values[i] = values[j];
                values[j] = sw;
            }
        }
        printf("%i ", values[i]);
    }
    return;
    
}

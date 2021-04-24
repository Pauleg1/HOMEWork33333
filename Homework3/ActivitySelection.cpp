#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "ActivitySelectionh.h"

using namespace std;


// Prints a maximum set of activities that can be done by a single
// person, one at a time.
//  n   -->  Total number of activities
//  s[] -->  An array that contains start time of all activities
//  f[] -->  An array that contains finish time of all activities

// definied array 
static int result[10];

int printMaxActivities( int s[],int  f[], int n)
{
	int i, j;  int k = 1;
    cout << "Following activities are selected " << endl;

	// The first activity always gets selected
	    i = 0;
	   cout << " "<< i;

	   result[i] = i;
	   
	// Consider rest of the activities

	for (j = 1; j < n ; j++)
	{
		// If this activity has start time greater than or
		// equal to the finish time of previously selected
		// activity, then select i

		if (s[j] >= f[i])
		{ 
			   cout << " " << j;	
			    i = j;


	//			printMaxActivities the result[100] I transferred it to the array

				result[k] = j;
				k = k + 1;
		}
	}

	//return result[n]
	return result[n] ;
	
}
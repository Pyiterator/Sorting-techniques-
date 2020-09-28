/*
Algorithm: Merging (A, R,B,S,C)
Here A and B be sorted arrays with R and S elements
respectively. This algorithm merges A and B into an array
C with N=R+ S elements
Step 1: Set NA=1, NB=1 and NC=1
Step 2: Repeat while NA = R and NB = S:
if A[NA] = B[NB], then:
Set C[NC] = A[NA]
Set NA = NA +1
else
Set C[NC] = B[NB]
Set NB = NB +1
[End of if structure]
Set NC= NC +1
[End of Loop]
Step 3: If NA >R, then:
Repeat while NB = S:
Set C[NC] = B[NB]
Set NB = NB+1
Set NC = NC +1
[End of Loop]
else
Repeat while NA = R:
Set C[NC] = A[NA]
Set NC = NC + 1
Set NA = NA +1
[End of loop]
[End of if structure]
Step 4: Return C[NC]
*/
 
#include<iostream> 
using namespace std; 

void merge_elm(int arr1[], int arr2[], int n1, 
							int n2, int arr3[]) 
{ 
	int i = 0, j = 0, k = 0; 

	while (i<n1 && j <n2) 
	{ 
		if (arr1[i] < arr2[j]) 
			arr3[k++] = arr1[i++]; 
		else
			arr3[k++] = arr2[j++]; 
	} 

	while (i < n1) 
		arr3[k++] = arr1[i++]; 

	while (j < n2) 
		arr3[k++] = arr2[j++]; 
} 

int main() 
{ 
	int arr1[] = {12, 33, 53, 73}; 
	int n1 = sizeof(arr1) / sizeof(arr1[0]); 

	int arr2[] = {28, 41, 16, 80}; 
	int n2 = sizeof(arr2) / sizeof(arr2[0]); 

	int arr3[n1+n2]; 
	merge_elm(arr1, arr2, n1, n2, arr3); 

	cout << "Array after merging" <<endl; 
	for (int i=0; i < n1+n2; i++) 
		cout << arr3[i] << " "; 

	return 0; 
} 


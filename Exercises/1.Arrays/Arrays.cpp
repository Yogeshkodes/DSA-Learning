#include <iostream>
#include <vector>
using namespace std;

// Find the Largest element in an array

#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n) {
  // Write your code here
  int maxnum = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > maxnum) {
      maxnum = arr[i];
    }
  }
  return maxnum;
}

// Second Largest Element in an Array without sorting

// One of the best questions of array and i lied it more..
int secondLargest(vector<int> &a, int n) {
  int largest = a[0];
  int slargest = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (a[i] > largest) {
      slargest = largest;
      largest = a[i];
    } else if (a[i] < largest && a[i] > slargest) {
      slargest = a[i];
    }
  }
  return slargest;
}

int secondSmallest(vector<int> &a, int n) {
  int smallest = a[0];
  int ssmallest = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (a[i] < smallest) {
      ssmallest = smallest;
      smallest = a[i];
    } else if (a[i] > smallest && a[i] < ssmallest) {
      ssmallest = a[i];
    }
  }
  return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
  int slargest = secondLargest(a, n);
  int ssmallest = secondSmallest(a, n);

  return {slargest, ssmallest};
}

// Check if the array is sorted

int isSorted(int n, vector<int> a) {
  Write your code here.for (int i = 1; i < n; i++) {
    if (a[i] >= a[i - 1]) {

    } else {
      return false;
    }
  }
  return true;


// gotta figure it out why its not working...
  //    for(int i=0; i<n; i++){
  //     if(a[i+1]<n && a[i] <= a[i+1]){

  //    } else {
  //      return false;
  //    }
  //   }return true;
}

// Revisit Again
// 1752. Check if Array Is Sorted and Rotated

//Remove duplicates from Sorted array
int removeDuplicates(vector<int> &arr, int n) {
  // Write your code here.
  int i=0;
  for(int j=1;j<n;j++){
    if(arr[i] != arr[j]){
      i++;
      arr[i] = arr[j];

    }
  }return i+1;
}

// Revisit Again
// 26. Remove Duplicates from Sorted Array

//Revisit to this Again 

/*#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp = arr[0];
    for(int i=n-1;i<n;i--){

    if(arr[i-1]>=0){
     arr[i-1] = arr[i];
    }
    }
    arr[n-1] =temp;

    return arr;
}
*/


//Left rotate an array by D places
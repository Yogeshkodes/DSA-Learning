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

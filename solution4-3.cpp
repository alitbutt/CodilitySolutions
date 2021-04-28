/*
Write a function:

int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].
Copyright 2009–2021 by Codility Limited. All Rights Reserved.

Result: https://app.codility.com/demo/results/trainingX5CJ2F-V9B/
*/

#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
  bool b[A.size()+1];
  for (unsigned int i=0; i<=A.size(); i++) {
      b[i] = false;
    }
  for (int i: A) {
      if ((i > 0) && (i <= A.size()))
        b[i-1] = true;
    }

  for (unsigned int i=0; i<=A.size(); i++)
    if (!b[i])
      return i+1;

  return 1;
}

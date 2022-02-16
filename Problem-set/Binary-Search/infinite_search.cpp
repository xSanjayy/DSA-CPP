// search in a infinite sorted array

#include <iostream>
#include <vector>
using namespace std;
//  here we are assuming the size of the array is infinite
vector<int> arr = {3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 213};
int binarySearch(vector<int> arr, int target, int start, int end);
int solution(vector<int> arr, int target)
{
    int s = 0;
    int e = 2;

    while (target > arr[e])
    {
        s = e + 1;
        e *= e; // the size of end is growing exponentially but the size of array is not really infinite
                // hence we have to make sure the "e" is not execeeding the size of array
    }
    return binarySearch(arr, target, s, e);
}

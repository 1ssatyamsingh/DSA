// #include <iostream>
// #include <vector>
// using namespace std;

// void subsetsum(int arr[], int index, int n, int temp, vector<int> &ans)
// {
//   if (index == n)
//   {
//     cout << temp << "    ";
//     for (int i = 0; i < ans.size(); i++)
//       cout << ans[i] << " ";
//     cout << endl;
//     return;
//   }
//   subsetsum(arr, index + 1, n, temp, ans);
//   ans.push_back(arr[index]);
//   subsetsum(arr, index + 1, n, temp + arr[index], ans);
//   ans.pop_back();
// }

// int main()
// {
//   int arr[] = {3, 4, 5};
//   int temp = 0;
//   vector<int> ans;
//   subsetsum(arr, 0, 3, temp, ans);
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// bool targetSum(int arr[], int index, int n, int target)
// {
//   if (target == 0)
//     return 1;
//   if (index == n && target != 0)
//     return 0;
//   return targetSum(arr, index + 1, n, target) ||
//          targetSum(arr, index + 1, n, target - arr[index]);
// }

// int main()
// {
//   int arr[] = {3, 4, 5};
//   int target = 9;
//   cout << targetSum(arr, 0, 3, target);
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int perfectSum(int arr[], int index, int n, int target)
// {
//   if (target == 0)
//     return 1;
//   if (index == n || target < 0)
//   {
//     return 0;
//   }
//   return perfectSum(arr, index + 1, n, target) +
//          perfectSum(arr, index + 1, n, target - arr[index]);
// }

// int main()
// {
//   int arr[] = {1, 2, 3, 4, 5, 0};
//   int target = 9;
//   cout << perfectSum(arr, 0, 6, target);
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int perfectSum(int arr[], int index, int n, int target)
// {
//   if (index == n)
//     return target == 0;
//   return perfectSum(arr, index + 1, n, target) +
//          perfectSum(arr, index + 1, n, target - arr[index]);
// }

// int main()
// {
//   int arr[] = {1, 2, -3, 4, 5, 0};
//   int target = 9;
//   cout << perfectSum(arr, 0, 6, target);
// }

#include <iostream>
#include <vector>
using namespace std;

int targetSumRep(int arr[], int index, int n, int target)
{
  if (target == 0)
    return 1;
  if (index == n || target < 0)
    return 0;
  return targetSumRep(arr, index, n, target - arr[index]) + targetSumRep(arr, index + 1, n, target);
}

int main()
{
  int arr[] = {2, 3, 4};
  int target = 9;
  cout << targetSumRep(arr, 0, 3, target);
}

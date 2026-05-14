#include <iostream>
using namespace std;
int main()
{
  // int arr[3][4];
  // cout << arr << endl;    // arr = &arr[0] points to address of 1st row
  // cout << arr[0] << endl; // arr[0] = &arr[0][0] points to address of first element
  // cout << arr[0][0] << endl;
  int n, m, l, p;
  cin >> n >> m >> l >> p;
  int ****ptr = new int ***[n];

  for (int i = 0; i < n; i++)
  {
    ptr[i] = new int **[m];
    for (int j = 0; j < m; j++)
    {
      ptr[i][j] = new int *[l];
      for (int k = 0; k < l; k++)
      {
        ptr[i][j][k] = new int[p];
      }
    }
  }
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      for (int k = 0; k < m; k++)
        for (int g = 0; g < m; g++)
          cin >> ptr[i][j][k][g];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      for (int k = 0; k < m; k++)
        for (int g = 0; g < m; g++)
          cout << ptr[i][j][k][g] << " ";

  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < m; j++)
  //     delete[] ptr[i][j];
  // delete[] ptr; // delete 3D array
}

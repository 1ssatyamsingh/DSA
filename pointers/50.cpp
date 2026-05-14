#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m; // n*m
  // 2D array
  // array which stores addresses
  int **ptr = new int *[n];
  // create an array and store  it's address in ptr
  for (int i = 0; i < n; i++)
  {
    ptr[i] = new int[m];
    for (int j = 0; j < m; j++)
    {
      cin >> ptr[i][j];
    }
  }

  cout << ptr << endl;    // ptr ka address dega
  cout << ptr[0] << endl; // first row ka starting address dega

  int arr[2][3] = {1, 2, 3, 4, 5, 6};
  cout << arr << endl;    // dono address same hoga
  cout << arr[0] << endl; // i.e, first row ka starting address dega
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < m; j++)
  //   {
  //     cout << ptr[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  //  // release menory
  // for (int i = 0; i < n; i++)
  //     delete[] ptr[i];
  // delete[] ptr;

  // // created 3D array
  // // array which stores addresses
  // int ***ptr = new int **[n];
  // // created 2D array and store  it's address in ptr
  // for (int i = 0; i < n; i++)
  // {
  //   ptr[i] = new int *[m];
  //   for (int j = 0; j < m; j++)
  //   {
  //     ptr[i][j] = new int[l];
  //   }
  // }

  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < m; j++)
  //     for (int k = 0; k < l; k++)
  //       cin >> ptr[i][j][k];

  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < m; j++)
  //     for (int k = 0; k < l; k++)
  //       cout << ptr[i][j][k] << " ";

  // // release menory
  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < m; j++)
  //     delete[] ptr[i][j];
  // delete[] ptr;

  // // created 4D array
  // // array which stores addresses
  // int ****ptr = new int ***[n];
  // // create a 3D array and store  it's address in ptr
  // for (int i = 0; i < n; i++)
  // {
  //   ptr[i] = new int **[m];
  //   for (int j = 0; j < m; j++)
  //   {
  //     ptr[i][j] = new int *[l];
  //     for (int k = 0; k < l; k++)
  //     {
  //       ptr[i][j][k] = new int[o];
  //     }
  //   }
  // }

  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < m; j++)
  //     for (int k = 0; k < l; k++)
  //       for (int g = 0; g < o; g++)
  //         cin >> ptr[i][j][k][g];

  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < m; j++)
  //     for (int k = 0; k < l; k++)
  //       for (int g = 0; g < o; g++)
  //         cout << ptr[i][j][k][g] << " ";

  // // release menory
  // for (int i = 0; i < n; i++)
  //   for (int j = 0; j < m; j++)
  //     for (int k = 0; k < l; k++)
  //       delete[] ptr[i][j][k];
  // delete[] ptr;
}
#include <bits/stdc++.h>
using namespace std;

class SGTree
{
public:
  vector<int> seg;

  SGTree(int n)
  {
    seg.resize(4 * n + 1);
  }

  // Build Segment Tree
  void build(int ind, int low, int high, int a[])
  {
    if (low == high)
    {
      seg[ind] = a[low];
      return;
    }

    int mid = (low + high) / 2;

    build(2 * ind + 1, low, mid, a);
    build(2 * ind + 2, mid + 1, high, a);

    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
  }

  // Range Minimum Query
  int query(int ind, int low, int high, int l, int r)
  {

    // No overlap
    if (high < l || low > r)
      return INT_MAX;

    // Complete overlap
    if (low >= l && high <= r)
      return seg[ind];

    // Partial overlap
    int mid = (low + high) / 2;

    int left = query(2 * ind + 1, low, mid, l, r);
    int right = query(2 * ind + 2, mid + 1, high, l, r);

    return min(left, right);
  }

  // Point Update
  void update(int ind, int low, int high, int i, int val)
  {

    if (low == high)
    {
      seg[ind] = val;
      return;
    }

    int mid = (low + high) / 2;

    if (i <= mid)
      update(2 * ind + 1, low, mid, i, val);
    else
      update(2 * ind + 2, mid + 1, high, i, val);

    seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
  }
};

int main()
{

  // -------- First Array --------
  int a1[] = {1, 3, 2, 7, 9, 11};
  int n1 = 6;

  SGTree sg1(n1);

  sg1.build(0, 0, n1 - 1, a1);

  cout << "First Array:" << endl;

  cout << "Minimum in range [1,4] = ";
  cout << sg1.query(0, 0, n1 - 1, 1, 4) << endl;

  sg1.update(0, 0, n1 - 1, 3, 0);

  cout << "After update:" << endl;

  cout << "Minimum in range [1,4] = ";
  cout << sg1.query(0, 0, n1 - 1, 1, 4) << endl;

  // -------- Second Array --------
  int a2[] = {8, 6, 4, 10, 5, 2};
  int n2 = 6;

  SGTree sg2(n2);

  sg2.build(0, 0, n2 - 1, a2);

  cout << "\nSecond Array:" << endl;

  cout << "Minimum in range [2,5] = ";
  cout << sg2.query(0, 0, n2 - 1, 2, 5) << endl;

  sg2.update(0, 0, n2 - 1, 5, 1);

  cout << "After update:" << endl;

  cout << "Minimum in range [2,5] = ";
  cout << sg2.query(0, 0, n2 - 1, 2, 5) << endl;

  return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

   int n;
   cin >> n;

   long long*p = new long long[n];
   bool odd = true;
   bool even = true;

   for (int i = 0; i < n; i++) {
      cin >> p[i];
   }

   for (int i = 0; i < n; i++) {
      if (p[i] % 2 == 0) {
         odd = false;
      }
      else if (p[i] % 2 != 0) {
         even = false;
      }

   }
   if (!even && !odd) {
      sort(p, p + n);
   }

   for (int i = 0; i < n; i++) {
      cout << p[i] << " ";
   }
   cout << endl;
   delete[]p;

}
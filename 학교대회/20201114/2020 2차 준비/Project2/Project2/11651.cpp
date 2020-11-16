#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;

    vector <pair<int, int>>point(num);

    for (int i = 0; i < num; i++)
        cin >> point[i].second >> point[i].first;

    sort(point.begin(), point.end());

    for (int i = 0; i < num; i++)
        cout << point[i].second << ' ' << point[i].first << '\n';

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
bool containsAll(const std::vector<T>& f, const std::vector<T>& g) {
    return std::all_of(f.begin(), f.end(), [&g](const T& elem) {
        return std::find(g.begin(), g.end(), elem) != g.end();
    });
}

template <typename T>
bool hasUniqueElements(const std::vector<T>& f, const std::vector<T>& g) {
    return std::any_of(f.begin(), f.end(), [&g](const T& elem) {
        return std::find(g.begin(), g.end(), elem) == g.end();
    });
}


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> p(n), c(n);
    vector<vector<int>> f(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> c[i];
        for (int j = 0; j < c[i]; j++)
        {
            int in_f;
            cin >> in_f;
            f[i].push_back(in_f);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (p[i] >= p[j])
            {
                if (containsAll(f[i], f[j]))
                {
                    if (p[i] > p[j] || hasUniqueElements(f[j], f[i]))
                    {
                        cout << "Yes";
                        return 0;
                    }
                }
                
            }
        }
    }

    cout << "No";
}
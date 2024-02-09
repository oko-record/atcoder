#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int count = 0, equal = 0, s_count = 0, t_count = 0;
    vector<int> count_list;
    string atcoder = "atcoder";

    for (int i = 0; i < (int)s.size(); i++)
    {
        count_list.push_back(i);
    }

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '@')
            s_count++;
    }
    for (int i = 0; i < (int)t.size(); i++)
    {
        if (t[i] == '@')
            t_count++;
    }

    for (int i = 0; i < (int)s.size(); i++)
    {
        count = 0;
        for (int j = 0; j < (int)t.size(); j++)
        {
            if (find(count_list.begin(), count_list.end(), j) == count_list.end())
                continue;
            if (s[i] == t[j])
            {
                if (s[i] == '@')
                    continue;
                equal++;
                swap(t[i], t[j]);
                count_list.erase(remove(count_list.begin(), count_list.end(), i), count_list.end());
                break;
            }
        }
    }
    for (auto& x : count_list)
    {
        if(s[x] != '@' and find(atcoder.begin(), atcoder.end(), s[x]) == atcoder.end())
        {
            cout << "No";
            exit(0);
        }
        else if(t[x] != '@' and find(atcoder.begin(), atcoder.end(), t[x]) == atcoder.end())
        {
            cout << "No";
            exit(0);
        }
    }
    int rem = (int)s.size() - equal;
    cout << equal << endl;
    int atto = s_count + t_count;
    if (rem <= atto)
        cout << "Yes";
    else
        cout << "No";
}
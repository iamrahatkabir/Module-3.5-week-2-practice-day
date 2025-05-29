#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int min_num = INT_MAX;

        for(int j = 0; j < n; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                int small = a[j] + a[k] + (k+1) - (j+1);
                // cout << small << " ";
                // min_num = min(min_num, small); 
            }
            // cout << endl;
        }
        // cout << min_num;
    }
    
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for(int i = 0; i < n; i++)
//             cin >> a[i];

//         int result = INT_MAX;
//         int min_ai_minus_i = a[0] - 0;

//         for(int j = 1; j < n; j++)
//         {
//             result = min(result, a[j] + j + min_ai_minus_i);
//             min_ai_minus_i = min(min_ai_minus_i, a[j] - j);
//         }

//         cout << result << endl;
//     }

//     return 0;
// }


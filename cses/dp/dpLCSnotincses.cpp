// class Solution
// {
// public:
//     int longestCommonSubsequence(string text1, string text2)
//     {
//         string a = text1;
//         string b = text2;
//         int n = a.size();
//         int m = b.size();

//         vector<int> prevState(m + 1);

//         for (int j = 0; j <= m; j++)
//         {
//             prevState[j] = 0;
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             vector<int> currentState(m + 1);
//             currentState[0] = 0;

//             for (int j = 1; j <= m; j++)
//             {
//                 char x = a[i - 1];
//                 char y = b[j - 1];
//                 if (x == y)
//                 {
//                     currentState[j] = prevState[j - 1] + 1;
//                 }
//                 else
//                 {
//                     currentState[j] =
//                         max(currentState[j - 1], prevState[j]);
//                 }
//             }
//             prevState = currentState;
//         }
//         return prevState[m];
//     }
// };
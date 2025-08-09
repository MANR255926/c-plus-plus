#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {
        {3, 2, 5},
        {9, 1, 6},
        {7, 8, 4}};

    for (int i = 0; i < 3; i++)
    {
        int maxVal = matrix[i][0];
        for (int j = 1; j < 3; j++)
        {
            if (matrix[i][j] > maxVal)
                maxVal = matrix[i][j];
        }
        cout << "Max in row " << i + 1 << " = " << maxVal << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main() 
// {
//     int matrix[3][3] = 
//     {
//         {3, 2, 5},
//         {9, 1, 6},
//         {7, 8, 4}
//     };

//     for (int i = 0; i < 3; i++) 
//     {
//         int a = matrix[i][0], b = matrix[i][1], c = matrix[i][2];
//         int maxVal = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//         cout << "Max in row " << i + 1 << " = " << maxVal << endl;
//     }

//     return 0;
// }
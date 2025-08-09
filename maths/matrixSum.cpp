#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of matrix elements = " << sum << endl;
    return 0;
}

// #include <iostream>
// using namespace std;

// int sumMatrix(int mat[][3], int rows, int cols)
// {
//     int total = 0;
//     for (int i = 0; i < rows; i++)
//         for (int j = 0; j < cols; j++)
//             total += mat[i][j];
//     return total;
// }

// int main() {
//     int matrix[3][3] =
//     {
//         {3, 5, 1},
//         {2, 4, 6},
//         {9, 8, 7}
//     };

//     cout << "Matrix sum: " << sumMatrix(matrix, 3, 3) << endl;
//     return 0;
// }
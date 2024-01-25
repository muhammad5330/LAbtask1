#include <iostream>
using namespace std;

void inputMatrix(int A[][100], int m, int n) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "The elements of the matrix are:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void displayMatrix(int A[][100], int m, int n) {

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "The elements of the matrix are:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int sumMatrix(int A[][100], int m, int n) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += A[i][j];
        }
    }
    return sum;
}

void rowSumMatrix(int A[][100], int m, int n) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "The row-wise sum of the matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j];
        }
        cout << rowSum << endl;
    }
}

void columnSumMatrix(int A[][100], int m, int n) {

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout << "The column-wise sum of the matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        int colSum = 0;
        for (int j = 0; j < m; j++) {
            colSum += A[j][i];
        }
        cout << colSum << " ";
    }
    cout << endl;
}

void transposeMatrix(int A[][100], int m, int n) {

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    int B[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = A[j][i];
        }
    }
    cout << "The transpose of the matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[100][100], m, n, choice;
    cout << "Enter the number of rows and columns of the matrix:" << endl;
    cin >> m >> n;
    cout << "Menu of operations:" << endl;
    cout << "1. Input elements into matrix of size " << m << " x " << n << endl;
    cout << "2. Display elements of matrix of size " << m << " x " << n << endl;
    cout << "3. Sum of all elements of matrix of size " << m << " x " << n << endl;
    cout << "4. Display row-wise sum of matrix of size " << m << " x " << n << endl;
    cout << "5. Display column-wise sum of matrix of size " << m << " x " << n << endl;
    cout << "6. Create transpose of matrix of size " << m << " x " << n << endl;
    cout << "Enter your choice:" << endl;
    cin >> choice;
    switch (choice) {
    case 1:
        inputMatrix(A, m, n);
        break;
    case 2:
        displayMatrix(A, m, n);
        break;
    case 3:
        cout << "The sum of all elements of the matrix is: " << sumMatrix(A, m, n) << endl;
        break;
    case 4:
        rowSumMatrix(A, m, n);
        break;
    case 5:
        columnSumMatrix(A, m, n);
        break;
    case 6:
        transposeMatrix(A, m, n);
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
    return 0;
}

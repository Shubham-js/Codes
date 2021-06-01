#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000];
int * Sort(int a[100][100], int rows, int columns)
{

    int temp[10000];
    for (int i = 0; i < columns; i++)
    {
        temp[i] = a[0][i];
    }
    for (int i = 1; i < rows; i++)
    {
        int p = 0, k = 0, j = 0;
        while (k < columns * i and p < columns)
        {
            if (temp[k] <= a[i][p])
            {
                arr[j] = temp[k];
                k++;


            }
            else
            {
                arr[j] = a[i][p];
                p++;

            }
            j++;
        }
        while (p < columns)
        {
            arr[j] = a[i][p];
            p++;
            j++;
        }
        while (k < columns * i)
        {
            arr[j] = temp[k];
            k++;
            j++;
        }
        for (int x = 0; x < j ; ++x)
        {
            temp[x] = arr[x];
        }
    }
    for (int i = 0; i < rows * columns; ++i)
    {
        arr[i] = temp[i];
    }

    return arr;

}




int main() {
    int r, c;
    cin >> r >> c;
    //cout << r << c;
    int a[100][100];
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> a[i][j];
        }
    }
    int *ans;
    ans = Sort(a, r, c);

    for (int i = 0; i < r * c; ++i)
    {
        cout << ans[i] << " ";
    }


    return 0;
}



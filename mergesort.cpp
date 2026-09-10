#include <iostream>
using namespace std;

#define INF 999999

void merge(int A[], int p, int q, int r)
{
    int N1 = q - p + 1;
    int N2 = r - q;

    int L[N1 + 1], R[N2 + 1];
    int i, j, k;

    for(i = 0; i < N1; i++)
        L[i] = A[p + i];

    for(j = 0; j < N2; j++)
        R[j] = A[q + 1 + j];

    L[N1] = INF;
    R[N2] = INF;

    i = 0;
    j = 0;

    for(k = p; k <= q; k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}

void mergesort(int A[], int p, int r)
{

if (p < r)
{
    int q = (p + r) / 2;
    mergesort(A, p, q);
    mergesort(A, q + 1, r);
    merge(A, p, q, r);
}
}
int main()
{
    int A[] = {10, 3, 12, 5, 18, 43};
    int n = 6;
    
    mergesort(A, 0, n - 1);
    
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
        
    return 0;
}
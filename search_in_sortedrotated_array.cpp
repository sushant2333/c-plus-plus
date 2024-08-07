int getpivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return e;
}

int binarySearch(vector<int> &arr, int s, int e, int k)
{
    int start = s;
    int end = e;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = getpivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

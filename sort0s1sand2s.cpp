public:
    void sort012(int a[], int n)
    {
        int low = 0;
        int high = n - 1;
        int mid = 0;
        while (mid <= high) {
            switch (a[mid]) {
                case 0:
                    swap(a[low], a[mid]);
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid], a[high]);
                    high--;
                    break;
            }
        }
    }

//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/ --link

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int min=A[0]; int max=A[0];
    	for (int i = 0; i < N; i++) {
            if (A[i] < min)
                min = A[i];
            if (A[i] > max)
                max = A[i];
        }
        int s =min+max;
        return s;
    }

};
// It is important to declare max and min as 1st array element otherwise giving an error.
//link --> https://practice.geeksforgeeks.org/problems/max-min/

/*Given an infinite supply of each denomination of Indian currency { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 } and a target value N.
Find the minimum number of coins and/or notes needed to make the change for Rs N. You must return the list containing the value of coins required
*/

//Shortest Cpp Solution

vector<int> minPartition(int N)

    {

        // code here

        int curr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

        vector<int> arr;

        for(int i=9;i>=0;i--)

        {

            while(N>=curr[i]){

                N=N-curr[i];

                arr.push_back(curr[i]);

            }

        }

        return arr;

    }

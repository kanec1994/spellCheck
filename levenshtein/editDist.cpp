#include <iostream>
#include <cstring>

/**
 *
 * Algorithm idea:
 * -> Return the edit distance between two strings
 *
 * A single edit is defined as:
 * -> inserting a character
 * -> removing a character
 * -> substituting a character
 * Each edit has a cost of 1
 *
 * For any two given strings, we return the minimum number edits needed
 * to make the strings equivalent.
 *
 * Consider str1 and str2
 * let xi be the ith position in str1
 * let yj be the jth position in str2
 * Observations:
 * -> if str1 is empty, then we need to insert all of the characters from str2
 * -> if str2 is empty, then we need to insert all of the characters from str1
 * -> deleting a character from one string is the same as inserting it on the other
 *
 *
 * recurrence relationship:
 *              _
 *             | 
 *             | 0                                              if i = 0 and j = 0
 *             | j                                              if i = 0 and j != 0
 *   D[i,j] =  | i                                              if j = 0 and i != 0
 *             | min {D[i-1][j]+1, 
 *             |     D[i][j-1] +1, D[i-1][j-1] + replaceCost}   otherwise
 *             |_
 *
 *
 * time complexity: O(n^2)
 **/

using namespace std;
int editDistance(string str1, string str2)
{
    int len1 = str1.length();
    int len2 = str2.length();
    int dist[len1][len2]; // The dynamic table
    for(int i = 0; i < len1; i++){
        for(int j = 0; j < len2; j++){
            if (i == 0 && j == 0)
                dist[i][j] = 0;
            else if (i == 0 && j != 0)
                dist[i][j] = j;
            else if (j == 0 && i != 0)
                 dist[i][j] = i;
            else{
                int cost = 0; // replacement cost
                if(str1.at(i) != str2.at(j))
                    cost = 1;
                dist[i][j] = min(min(dist[i-1][j]+1, dist[i][j-1]+1), dist[i-1][j-1] + cost);
            }
        }
    }
    return dist[len1-1][len2-1];
}

int main()
{
    string str1 = "tskfsddjfkjsdkfjdskj";
    string str2 = "tskfsddjfkjsdkfjdskj";
    cout << "min edit is " << editDistance(str1,str2) << endl;
    return 0;
}

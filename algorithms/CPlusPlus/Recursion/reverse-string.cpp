/*
Description: Program to reverse string using recursion

Approach: To maintain start and end variables in string.
Start represents starting index and end represent ending index.
At each iteration, the character at starting index will be swapped 
with the character at ending index.
At every recursive call we will update start and end variables.
Start will be incremented by 1 and end will be decremented by 1.
We will return string when the value of start will be greater than end.
This indicated the string has been reversed.

Time complexity: O(n) where n is the length of string
*/

#include <iostream>
using namespace std;

//function starts
string rev(string s, int start, int end)
{
    //base case
    if (start > end)
    {
        return s;
    }
    //swapping characters at start and end index
    swap(s[start], s[end]);

    //recursive call with incrementing start and decrementing end
    return rev(s, start + 1, end - 1);
}

// function that uses while loop to reverse a string
string revStr(string s){
    int i = 0, j = s.length()-1;
    
    while (i < j){
        swap(s[i], s[j]);    
        i++; j--;
    }
    return s;
}

//main starts
int main()
{
    // Write C++ code here
    string s = "hello";
    int len = s.length();
    cout << endl;
    cout << rev(s, 0, len - 1) << endl;
    cout << revStr(s) << endl;
    return 0;
}

/*
Input: hello
Output: olleh
*/

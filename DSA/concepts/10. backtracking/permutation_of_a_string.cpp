#include <iostream>
using namespace std;

// Function to generate and print all permutations of a string
void permutations(string str, string answer)
{
    // Get the current length of the string
    int n = str.size();
    cout<<n<<endl;

    // Base Case:
    // If no characters are left, a complete permutation is formed
    if (n == 0)
    {
        cout << answer << endl;
        return;
    }
    else
    {
        /*
            Try every character of the current string
            as the next character in the permutation.
        */
        for (int i = 0; i < n; i++)
        {
            // Select the current character
            char ch = str[i];

            /*
                Create a new string excluding the selected character.

                str.substr(0, i)
                -> Characters before index i

                str.substr(i + 1, n - 1)
                -> Characters after index i

                Combining both parts removes the chosen character.
            */
            string nextStr = str.substr(0, i) + str.substr(i + 1, n - 1);

            /*
                Recursive call:

                nextStr
                -> Remaining characters

                answer + ch
                -> Add selected character to the current permutation
            */
            permutations(nextStr, answer + ch);
        }
    }
}

int main()
{
    // Input string whose permutations need to be generated
    string str = "abc";

    // Initially, the answer string is empty
    string answer = "";

    // Function call to generate all permutations
    permutations(str, answer);

    return 0;
}
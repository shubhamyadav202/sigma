#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str)
{
    string result = "";

    for(int i = 0; i < str.length(); i++)
    {
        bool isDuplicate = false;

        // Check if character already exists in result
        for(int j = 0; j < result.length(); j++)
        {
            if(str[i] == result[j])
            {
                isDuplicate = true;
                break;
            }
        }

        // Add character if not duplicate
        if(!isDuplicate)
        {
            result += str[i];
        }
    }

    return result;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    string ans = removeDuplicates(str);

    cout << "String after removing duplicates: " << ans;

    return 0;
}
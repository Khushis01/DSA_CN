#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int makeBeautiful(string str) {
    int size = str.size();

    int count = 0;
    for(int i = 0; i < size - 1; i++) {
        if(str[i] == str[i + 1]) {
            count++;
        }
    }
    return count;
}


class Runner
{
    int t;
    vector<string> str;

public:
    void takeInput()
    {
        cin >> t;
        for (int c = 0; c < t; c++)
        {
            string temp;
            cin >> temp;
            str.push_back(temp);
        }
    }

    void execute()
    {
        vector<string> strCopy = str;
        for (int i = 0; i < t; i++)
        {
            int ans = makeBeautiful(strCopy[i]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            int ans = makeBeautiful(str[i]);
            cout << ans << "\n";
        }
    }
};

int main()
{
   
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
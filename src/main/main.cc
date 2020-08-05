#include <iostream>
#include "src/lib/solution.h"

void PrintMap(map<char,char> m){
    cout << "{ ";
    for(auto element: m){
        cout << "(" <<element.first << "->" << element.second << ")" << " ";
    }
    cout << "}";
    cout <<endl;

}

int main()
{
    Solution solution ;
    string input1 = "add";
    string input2 = "egg";

    map<char,char> result = solution.FindMapping(input1, input2);
    PrintMap(result);

    string input3 = "extreme";
    string input4 = "egg";

    map<char,char> result2 = solution.FindMapping(input3, input4);
    PrintMap(result2);

    string input5 = "harder";
    string input6 = "waiter";

    PrintMap(solution.FindMapping(input5, input6));

    string input7 = "aabbrr";
    string input8 = "ddeekk";

    PrintMap(solution.FindMapping(input7, input8));

    return EXIT_SUCCESS;

}
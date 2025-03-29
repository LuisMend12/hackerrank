#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    map<int, string> dict;
    
    dict[1] = "one";
    dict[2] = "two";
    dict[3] = "three";
    dict[4] = "four";
    dict[5] = "five";
    dict[6] = "six";
    dict[7] = "seven";
    dict[8] = "eight";
    dict[9] = "nine";
    
    if (n > 9) printf("Greater than 9 \n");
    else if (n < 1) printf("Less than 1 \n");
    else cout << dict[n] << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

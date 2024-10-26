#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v; cin >>v;
    getchar();


    while(v--)
    {

        string word,sentance;
        getline(cin,sentance);
        stringstream ss(sentance);
        map<string,int> maping;
        pair<string,int> result;
        while(ss >> word)
        {

            maping[word]++; 

            if  (result.second <maping[word])
            {
             result.first= word result.second =maping[word];
            }
        }
        cout << result.first << " " << result.second << endl;
        }
    return 0;
}
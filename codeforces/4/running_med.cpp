#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'runningMedian' function below.
 *
 * The function is expected to return a DOUBLE_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */
 priority_queue<int,vector<int>,less<int>> pqmax;
 priority_queue<int,vector<int>,greater<int>> pqmin;
 void insert(int x){
     if(pqmax.size()==pqmin.size()){
         if(pqmax.size()==0){
             pqmax.push(x);
         }
         else{
             if(x>=pqmax.top()){
                 pqmin.push(x);
                 int temp = pqmin.top();
                 pqmin.pop();
                 pqmax.push(temp);
             }
             else{
                 pqmax.push(x);
             }
         }
     }
     else{
         if(x>=pqmax.top()){
             pqmin.push(x);
         }
         else{
             pqmax.push(x);
             int temp = pqmax.top();
             pqmax.pop();
             pqmin.push(temp);
         }
     }
 }
 double givemedian(){
     if(pqmax.size()==pqmin.size()){
         return (pqmax.top()+pqmin.top())/(2*1.0);
     }
     else{
         return  pqmax.top()*1.0;
     }
 }
vector<double> runningMedian(vector<int> a) {
    vector<double> ans;
    for(int x:a){
        insert(x);
        ans.push_back(givemedian());
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_count_temp;
    getline(cin, a_count_temp);

    int a_count = stoi(ltrim(rtrim(a_count_temp)));

    vector<int> a(a_count);

    for (int i = 0; i < a_count; i++) {
        string a_item_temp;
        getline(cin, a_item_temp);

        int a_item = stoi(ltrim(rtrim(a_item_temp)));

        a[i] = a_item;
    }

    vector<double> result = runningMedian(a);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

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

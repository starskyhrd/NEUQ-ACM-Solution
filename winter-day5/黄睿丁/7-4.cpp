#include <bits/stdc++.h>
using namespace std;
struct people
{
    char gender;
    string father;
};
map<string,people>mp;
int n,m;
bool check(string a,string b)
{
    int i = 1;int j;
    for(string _a = a;!_a.empty();_a = mp[_a].father,i++)
    {
        j = 1;
        for(string _b = b;!_b.empty();_b = mp[_b].father,j++)
        {
            if(i >= 5 && j >= 5)
            return true;
            if((i < 5 || j < 5) && _a == _b)
            return false;
        }
    }
    return true;
}
int main()
{
    cin>>n;
    string firstname,lastname;
    for(int i = 0;i < n;i++)
    {
        cin>>firstname>>lastname;
        if(lastname.back() == 'n')
        {
            mp[firstname] = {'m',lastname.substr(0,lastname.size() - 4)};
        }
        else if(lastname.back() == 'r')
            mp[firstname] = {'f',lastname.substr(0,lastname.size() - 7)};
        else
            mp[firstname].gender = lastname.back();
    }
    cin>>m;
    for(int i = 0;i < m;i++)
    {
        string a,b,s;
        cin>>a>>s>>b>>s;
        if(mp.find(a) == mp.end() || mp.find(b) == mp.end())
            cout<<"NA"<<endl;
        else if(mp[a].gender == mp[b].gender)
            cout<<"Whatever"<<endl;
        else
        {
           if(check(a,b))
               cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}


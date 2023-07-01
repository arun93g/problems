
#include <iostream>
#include<sstream>
#include<string>
#include<vector>


using namespace std;


void combination(vector<vector<int>> &given,int idx,vector<int> &comb)
{
    if(comb.size()==0)
    return;

    if(idx==comb.size()-1)
    {
        given.push_back({});
        given.push_back({comb[idx]});
    }
    else
    {
        combination(given,idx+1,comb);

        int n=given.size();
        for(int i=0;i<n;++i)
        {
            vector<int> r=given[i];
            r.push_back(comb[idx]);
            given.push_back(r);
        }
    }
}

void print(vector<int> &comb)
{
    for(auto i:comb)
    {
        cout<<i<<" ";
    }
}

void print(vector<vector<int>> &given)
{
    for(auto i:given)
    {
        cout<<"{";
        //if(!i.empty())


        for(auto j:i)
        {
            cout<<j<<"";

        }
        //if(!i.empty())
        cout<<"}"<<endl;
    }
}

void print(vector<vector<int>> &given,int f)
{
    for(int i=0;i<given.size();i++)
    {
        cout<<"{";
        for(int j=0;j<given[i].size();j++)
        {
            cout<<given[i][j];
            if(j<given[i].size()-1)
                cout<<",";
        }
        cout<<"}"<<endl;
    }
}


void D_inpt(vector<int> &comb)
{
    string s1;
    getline(cin,s1);
    stringstream ob(s1);
    int num;

    while(ob>>num)
    {
        comb.push_back(num);
    }


}


int main()
{

    vector<int> comb;
    vector<vector<int>> given;
    D_inpt(comb);



    combination(given,0,comb);
    //print(given);
    print(given,0);
    return 0;
}


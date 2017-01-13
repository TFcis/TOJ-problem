// jd3
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<set>

#define INF 1000000000
#define endl '\n'
#define ll long long

#define count _____________count
#define time ________time

using namespace std;


struct Data
{
    int num,h;
    Data(){};
    Data(int i, int j){num=i; h=j;};
};
inline bool cmp_1(const Data &a, const Data &b){
    return a.h > b.h;
}

struct Data_2
{
    int num,t,p;
    Data_2(){};
    Data_2(int i, int j, int k){num=i; t=j; p=k;};
};
inline bool operator < (const Data_2 &a, const Data_2 &b){
    return a.t < b.t;
}



int n,k;
int count;
int max_num = 0;
int a[500100];
vector<int> ans;



// 1
Data data[1000100];
void Method_1()
{
    for(int i = 0 ; i < 1000010 ; i++)
        data[i] = Data(i,-1);
    for(int i=0, t=0 ; i < count ; i++, t++)
        data[a[i]].h = t;
    
    sort(data, data+1000010, cmp_1);
    
    for(int i = 0 ; i < n ; i++)
    {
        if(data[i].h != -1)
            ans.push_back(data[i].num);
    }
}

// 2
int p[500100];
int time[1000100];
void Method_2()
{
    memset(time, -1, sizeof(time));
    
    set<Data_2> list;
    set<Data_2>::iterator it;
    int place;
    for(int i=0, t=0 ; i < count ; i++,t++)
    {
        if(list.size() < n && time[a[i]] == (-1))        // stack not full
        {
//            cout << "stack not full\n";
            p[list.size()] = a[i];
            time[a[i]] = t;
            list.insert( Data_2(a[i], t, list.size()) );
        }
        else    // stack is full
        {
            it = list.find(Data_2(0,time[a[i]],0));
            if(it==list.end())    // not in stack => replace
            {
//                cout << "replace\n";
                place = (*list.begin()).p;
                list.erase(list.begin());
                list.insert( Data_2(a[i], t, place) );
                p[place] = a[i];
                time[a[i]] = t;
            }
            else        // in stack => update
            {
//                cout << "update\n";
                Data_2 d = *it;
                list.erase(it);
                d.t = t;    // update time
                list.insert(d);
                time[a[i]] = t;
            }
        }
    }
    
    for(int i = n-1 ; i >= 0 ; i--)
    {
        if(time[p[i]] != -1)
            cout << p[i] << (i?" ":"");
    }
}

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
    
    int order;
    cin >> n >> order;
    
    count = 0;
    while(cin>>a[count]){
        max_num = max(max_num, a[count++]);    // bug
    }
    count--;
    k = a[count];
    
//    cout << "count=" << count << endl;
    
    switch(order){
    case 1:        // find
    {
        Method_1();
        bool ok = false;
        for(int i = 0 ; i < ans.size() ; i++)
            if(ans[i]==k)
            {
                ok = true;
                break;
            }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
        break;
    }
    case 2:        // Method 1
    {
        Method_1();
        for(int i = 0 ; i < ans.size() ; i++)
            cout << (i?" ":"")<< ans[i] ;
        cout<<endl;
        break;
    }
    case 3:        // Method 2
    {
        Method_2();
        cout<<endl;
        break;
    }}
    
    return 0;
}

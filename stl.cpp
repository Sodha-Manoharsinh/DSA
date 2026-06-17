// Standard Template library

#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {3, 4};
    cout << p.first << p.second << endl;

    pair<int, pair<int, int>> o = {1, {5, 7}};
    cout << o.first << " " << o.second.second;

    pair<int, int> arr[] = {{1, 2}, {8, 5}, {9, 3}};
    for (int i = 0; i < 3; i++)
    {
        cout << endl
             << arr[i].first << " ";
    }
}

void explainVector()
{
    vector<int> v(2, 10);
    vector<pair<int, int>> vp;
    vp.emplace_back(19, 5);
    cout << (vp[0].first) << endl;
    v.push_back(1);
    v.emplace_back(5);

    v.insert(v.begin(), 12); // position, value
    v.insert(v.begin(), 18);

    vector<int> newVec = {35, 6, 7};

    v.insert(v.begin() + 1, 2, 67);                  // position, number of values, value
    v.insert(v.end(), newVec.begin(), newVec.end()); // { 18, 67, 67, 12, 10, 10, 1, 5, 35, 6, 7 }

    v.erase(v.begin() + 1);                // { 18, 67, 12, 10, 10, 1, 5, 35, 6, 7 }
    v.erase(v.begin() + 2, v.begin() + 4); // (begin, end (end value wont be included))

    // {18, 67, 10, 1, 5, 35, 6, 7}

    v.pop_back(); //{ 18, 67, 10, 1, 5, 35, 6 }

    v.swap(newVec); // swapped elements newVec =  { 18, 67, 10, 1, 5, 35, 6 } v = { 35, 6, 7 }

    v.clear(); // empties the vector

    cout << v.empty() << endl; // return true or false if vector empty or not

    // cout << v.size() << " ";

    vector<int>::iterator it = v.begin();

    cout << *it << " " << *(it + 1) << " " << *(v.end() - 1) << " " << v.back();

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << "\nValue: " << *it;
    // }
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << "\nValue 2nd: " << *it;
    // }
    // for (int element : v)
    // {
    //     cout << "\nValue 3rd: " << element;
    // }
    // for (long unsigned int i = 0; i < v.size(); i++)
    // {
    //     cout << "\nValue 4th: " << v[i];
    // }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (it == v.begin())
        {
            cout << "\nVector: { ";
        }
        cout << *it;
        if (it != v.end() - 1)
        {
            cout << ", ";
        }
        else
        {
            cout << " } with size = " << v.size() << endl;
        }
    }
}

void explainList()
{
    // It is same as vector just we can push or emplace in front too instead of using insert which takes a lot of time complexity
    list<int> ls;

    ls.push_back(5);    // {5}
    ls.emplace_back(7); // {5,7}

    ls.push_front(21);    //{21,5,7}
    ls.emplace_front(23); //{23,21,5,7}

    // Rest functions are same as vector

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        if (it == ls.begin())
        {
            cout << "\nVector: { ";
        }
        cout << *it;
        if (it != (--ls.end()))
        {
            cout << ", ";
        }
        else
        {
            cout << " } with size = " << ls.size() << endl;
        }
    }
}

void explainDeque()
{
    // It is same as vector and list
    deque<int> dq;

    dq.push_back(5);    // {5}
    dq.emplace_back(7); // {5,7}

    dq.push_front(21);    //{21,5,7}
    dq.emplace_front(23); //{23,21,5,7}

    dq.pop_front(); // {21,5,7}
    dq.pop_back();  // {21,5}

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    // Rest functions are same as vector

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        if (it == dq.begin())
        {
            cout << "\nVector: { ";
        }
        cout << *it;
        if (it != (--dq.end()))
        {
            cout << ", ";
        }
        else
        {
            cout << " } with size = " << dq.size() << endl;
        }
    }
}

void explainStack()
{
    stack<int> st;

    st.push(4);    //  |   5   |   LIFO  last in first out
    st.push(8);    //  |   3   |    time complexity 0(1) constant time
    st.emplace(3); //  |   8   |
    st.emplace(5); //  |   4   |
                   //  |-------|
    st.pop();      // delete the top part

    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q; // FIFO first in first out
    q.push(1);    //{1}
    q.push(3);    //{1,3}
    q.emplace(4); //{1,3,4}

    q.back() += 4; //{1,3,8}

    cout << q.back() << endl;  // 8
    cout << q.front() << endl; // 1
    q.pop();
    cout << q.front() << endl; // 3

    // other functions are same swap or size etc
}

void explainPriorityQueue()
{
    // max heap
    priority_queue<int> pq;

    pq.push(5);    //{5}        timecomplexity of push and pop is log n, and top is o(1)
    pq.emplace(6); //{6,5}
    pq.push(3);    //{6,5,3}
    pq.push(9);    //{9,6,5,3}   biggest value will be on top

    cout << pq.top() << endl; // 9

    pq.pop();

    cout << pq.top() << endl; // 6

    priority_queue<string, vector<string>, greater<string>> s;

    s.emplace("C");
    s.push("A");
    s.push("B");

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;

    // Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);    //{5}
    pq2.emplace(6); //{5,6}
    pq2.push(3);    //{3,5,6}
    pq2.push(9);    //{3,5,6,9}   biggest value will be on top

    cout << pq2.top() << endl; // 3

    pq2.pop();

    cout << pq2.top() << endl; // 5

    // other functions are same as queue its just that priority queue sorts the elements
}

void explainSet()
{
    // Everything happens in log n time complexity
    set<int> s;   // It is sorted and unique elements only
    s.insert(5);  //{5}
    s.emplace(7); // {5,7}
    s.insert(7);  // {5,7}
    s.insert(3);  //{3,5,7}

    // functionalitiess are same as of vectors
    // begin, end,rbegin,rend,swap,empty functions works same as above

    //{3,5,7}
    auto it = s.find(5); // this returns the address of element if found

    cout << *it << endl;

    auto it1 = s.find(8); // if element not found it will return the address value of end of element + 1 means end

    if (it1 != s.end())
        cout << *it1 << endl; // Safe to print
    else
        cout << "Element not found" << endl; // Prevents the crash

    cout << s.count(5) << endl; // returns 1 or 0 if data found or not

    cout << "Lowerbound = " << *(s.lower_bound(7)) << endl;
    cout << "Upperbound = " << *(s.upper_bound(3)) << endl;

    // erase can have value or can have address or start address and end adress
    auto it3 = s.find(3);
    auto it4 = s.find(7);
    s.erase(it3, it4);            // it will remove 3 and 5 not 7 , 7 memory address -1 is deleted
    cout << s.erase(5) << endl;   // returns true or false
    cout << *(s.find(5)) << endl; // removed
}

void explainMultiset()
{
    // Everything is same as set
    // Only stores duplicate unlike set which stores unique

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3); //{1,1,1,2,2,3}

    // ms.erase(1); // it will erase all the 1 in set

    int cnt = ms.count(1); // it will count number of occurence in set
    cout << "count = " << cnt << endl;
    // Want to erase only one
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1)++);

    int cnt2 = ms.count(1); // it will count number of occurence in set
    cout << "count = " << cnt2 << endl;
    // all other functions are same
}

void explainUnorderedset()
{
    // Everything is same as set except it stores in unordered way
    // takes o(1) time complexity, in worst cases which is rare takes o(n)
    unordered_set<int> us;
    us.insert(1);
    us.insert(1);
    us.insert(1);
    us.insert(2);
    us.emplace(2);
    us.insert(3); //{1,3,2} // randomized order but unique elements

    cout << "Size = " << us.size() << endl;

    us.erase(1); // it will erase the 1 in set

    int cnt = us.count(1); // it will check if element is in set
    cout << "count = " << cnt << endl;

    cout << "Size = " << us.size();
    // all other functions are same and works except lower_bound and upper_bound
}

void explainMap()
{
    map<int, int> mp = {{1, 2}, {5, 8}};

    // Stores in key value pair
    // key and value can be of any datatype
    // stores key in unique and sorted way just like set value can be duplicate
    // log n time complexity

    map<int, pair<int, int>> mp_with_pair = {{2, {3, 5}}, {5, {7, 9}}};

    // or pair as key

    map<pair<int, int>, int> mpp2 = {{{5, 4}, 3}, {{3, 6}, 2}};

    mp[1] = 12;
    mp.insert({3, 15});
    mp.insert({2, 75});

    cout << mp[2] << endl; // prints value of 2 key
    cout << mp[7] << endl; // prints 0 or null because 7 doesnt exists

    auto it = mp.find(3);  // returns address or 3 key pair {3,15}
    auto it2 = mp.find(8); // returns mp.end() address of last element + 11  or we can address after the map

    cout << (*(it)).first << " -> " << (*(it)).second << endl;
    cout << (*(it2)).first << " -> " << (*(it2)).second << endl;

    auto ub = mp.upper_bound(2);
    auto lb = mp.lower_bound(2);

    cout << "Upper bound = " << (*(ub)).first << ", Lower bound = " << (*(lb)).first << endl;

    cout << "Map = {" << endl;
    for (auto it : mp)
    {
        cout << "   { " << it.first << " : " << it.second << " }" << endl;
    }
    cout << "}";

    // erase, swap, size, empty are same as above
}

void explainMultimap()
{
    // Same as map just that it can store duplicate keys but in sorted way
    // doesnt store unique keys
    // mpp[key] can not be used here
    // log n time complexity
}

void explainUnorderedMap()
{
    // Same as difference between set and unordered set
    // it stores unique keys but in unordered way
    // order is randomized
    // upperbound , lowerbound can not be used
    // o(1) time complexity with worst case o(n)
}

bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.second != p2.second)
    {
        return p1.second < p2.second;
    }

    return p1.first > p2.first;
}

// Some basic algorithms
void explainExtra()
{
    // for array a
    // sort(a, a + n); sorts in ascending order, where n is number of element till you wanna sort (n is not included)

    // for vector v
    // sort(v.begin(),v.end());

    // for descending
    // sort(a, a+4, greater<int>);

    // sort(a+2,a+4); {1,3,2,7} only 2 and 7 will be sorted because a+4 is after array address or end

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}, {6, 2}, {2, 3}};
    int n = size(a);

    // sort it accoding to second element
    // if second elements are same then sort it according to first element in descending
    cout << "Before: " << endl;
    for (auto it : a)
    {
        cout << it.first << ":" << it.second << endl;
    }
    sort(a, a + n, comp);

    cout << "After: " << endl;
    for (auto it : a)
    {
        cout << it.first << ":" << it.second << endl;
    }

    int num = 7;                             // 00000111
    cout << __builtin_popcount(num) << endl; // return the number of 1's in bits

    long long num1 = 131464646547878;
    cout << __builtin_popcountll(num1) << endl;

    auto maxi = *max_element(a, a + n);
    auto mini = *min_element(a, a + n);
    cout << maxi.first << ":" << maxi.second << endl;
    cout << mini.first << ":" << mini.second << endl;

    string st = "123";
    do
    {
        cout << st << endl;
    } while (next_permutation(st.begin(), st.end()));
}

int main()
{
    explainExtra();
    cout << endl;
    return 0;
}
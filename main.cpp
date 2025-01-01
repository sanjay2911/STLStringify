#include "stringify.h"
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

int main()
{
    // Sequence containers
    std::vector<int> vec = {1, 2, 3};
    std::deque<int> deq = {4, 5, 6};
    std::list<int> lst = {7, 8, 9};
    std::forward_list<int> flst = {10, 11, 12};
    std::array<int, 3> arr = {1, 2, 3};
    std::string str = "Hello world!";

    std::cout << "Vector: " << stringify(vec) << std::endl;
    std::cout << "Deque: " << stringify(deq) << std::endl;
    std::cout << "List: " << stringify(arr) << std::endl;
    std::cout << "Forward List: " << stringify(flst) << std::endl;
    std::cout << "Array: " << stringify(flst) << std::endl;
    std::cout << "String: " << stringify(str) << std::endl;

    // Associative containers
    std::set<int> set = {13, 15, 14};
    std::multiset<int> mset = {13, 15, 15, 14};
    std::unordered_set<int> uset = {13, 15, 14};
    std::unordered_multiset<int> umset = {13, 15, 15, 14};
    std::map<int, std::string> map = {{10, "ten"}, {5, "five"}, {1, "one"}, {2, "two"}, {10, "ten"}, {5, "five"}};
    std::unordered_map<int, std::string> umap = {{10, "ten"}, {5, "five"}, {1, "one"},
                                                 {2, "two"},  {10, "ten"}, {5, "five"}};
    std::multimap<int, std::string> mmap = {{10, "ten"}, {5, "five"}, {1, "one"}, {2, "two"}, {10, "ten"}, {5, "five"}};
    std::unordered_multimap<int, std::string> ummap = {{10, "ten"}, {5, "five"}, {1, "one"},
                                                       {2, "two"},  {10, "ten"}, {5, "five"}};

    std::cout << "Set: " << stringify(set) << std::endl;
    std::cout << "Multiset: " << stringify(mset) << std::endl;
    std::cout << "Unordered Set: " << stringify(uset) << std::endl;
    std::cout << "Unordered Multiset: " << stringify(umset) << std::endl;
    std::cout << "Map: " << stringify(map) << std::endl;
    std::cout << "Unordered Map: " << stringify(umap) << std::endl;
    std::cout << "Multimap: " << stringify(mmap) << std::endl;
    std::cout << "Unordered Multimap: " << stringify(ummap) << std::endl;

    // Stack
    std::stack<int> stk;
    stk.push(23);
    stk.push(24);
    stk.push(25);
    std::cout << "Stack: " << stringify(stk) << std::endl;

    // Queue
    std::queue<int> q;
    q.push(26);
    q.push(27);
    q.push(28);
    std::cout << "Queue: " << stringify(q) << std::endl;

    // Priority Queue
    std::priority_queue<int> pq;
    pq.push(29);
    pq.push(30);
    pq.push(31);
    std::cout << "Priority Queue: " << stringify(pq) << std::endl;

    // Priority tuple
    std::tuple<int, double, std::string> tpl(1, 3.14, "Hello");
    std::cout << "Tuple: " << stringify(tpl) << std::endl;

    return 0;
}

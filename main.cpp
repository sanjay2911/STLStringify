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

    std::cout << "Vector: " << stringifySeq(vec) << std::endl;
    std::cout << "Deque: " << stringifySeq(deq) << std::endl;
    std::cout << "List: " << stringifySeq(lst) << std::endl;
    std::cout << "Forward List: " << stringifySeq(flst) << std::endl;

    // Associative containers
    std::set<int> s = {13, 14, 15};
    std::unordered_set<int> us = {16, 17, 18};
    std::map<std::string, int> m = {{"A", 19}, {"B", 20}};
    std::unordered_map<std::string, int> um = {{"X", 21}, {"Y", 22}};

    std::cout << "Set: " << stringifyAssoc(s) << std::endl;
    std::cout << "Unordered Set: " << stringifyAssoc(us) << std::endl;
    std::cout << "Map: " << stringifyAssoc(m) << std::endl;
    std::cout << "Unordered Map: " << stringifyAssoc(um) << std::endl;

    // Stack
    std::stack<int> stk;
    stk.push(23);
    stk.push(24);
    stk.push(25);
    std::cout << "Stack: " << stringifyStack(stk) << std::endl;

    // Queue
    std::queue<int> q;
    q.push(26);
    q.push(27);
    q.push(28);
    std::cout << "Queue: " << stringifyQueue(q) << std::endl;

    // Priority Queue
    std::priority_queue<int> pq;
    pq.push(29);
    pq.push(30);
    pq.push(31);
    std::cout << "Priority Queue: " << stringifyPQueue(pq) << std::endl;

    return 0;
}

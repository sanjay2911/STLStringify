#ifndef STRINGIFY_H
#define STRINGIFY_H

#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// Utility function to stringify a sequence container
template <typename Container> std::string stringifySeq(const Container &container)
{
    std::ostringstream oss;
    oss << "[";
    for (auto it = container.begin(); it != container.end(); ++it)
    {
        if (it != container.begin())
            oss << ", ";
        oss << *it;
    }
    oss << "]";
    return oss.str();
}

// Specialization for forward_list since it lacks reverse iterators
template <typename T> std::string stringifySeq(const std::forward_list<T> &container)
{
    std::ostringstream oss;
    oss << "[";
    for (auto it = container.begin(); it != container.end(); ++it)
    {
        if (it != container.begin())
            oss << ", ";
        oss << *it;
    }
    oss << "]";
    return oss.str();
}

// Utility function to stringify associative containers
template <typename Container> std::string stringifyAssoc(const Container &container)
{
    std::ostringstream oss;
    oss << "{";
    for (auto it = container.begin(); it != container.end(); ++it)
    {
        if (it != container.begin())
            oss << ", ";
        oss << *it;
    }
    oss << "}";
    return oss.str();
}

// Specialization for maps to handle key-value pairs
template <typename Key, typename Value> std::string stringifyAssoc(const std::map<Key, Value> &container)
{
    std::ostringstream oss;
    oss << "{";
    for (auto it = container.begin(); it != container.end(); ++it)
    {
        if (it != container.begin())
            oss << ", ";
        oss << it->first << ": " << it->second;
    }
    oss << "}";
    return oss.str();
}

template <typename Key, typename Value> std::string stringifyAssoc(const std::unordered_map<Key, Value> &container)
{
    std::ostringstream oss;
    oss << "{";
    for (auto it = container.begin(); it != container.end(); ++it)
    {
        if (it != container.begin())
            oss << ", ";
        oss << it->first << ": " << it->second;
    }
    oss << "}";
    return oss.str();
}

// Utility function for stacks
template <typename T> std::string stringifyStack(std::stack<T> stack)
{
    std::ostringstream oss;
    oss << "[";
    while (!stack.empty())
    {
        oss << stack.top();
        stack.pop();
        if (!stack.empty())
            oss << ", ";
    }
    oss << "]";
    return oss.str();
}

// Utility function for queues
template <typename T> std::string stringifyQueue(std::queue<T> queue)
{
    std::ostringstream oss;
    oss << "[";
    while (!queue.empty())
    {
        oss << queue.front();
        queue.pop();
        if (!queue.empty())
            oss << ", ";
    }
    oss << "]";
    return oss.str();
}

// Utility function for priority queues
template <typename T> std::string stringifyPQueue(std::priority_queue<T> pq)
{
    std::ostringstream oss;
    oss << "[";
    while (!pq.empty())
    {
        oss << pq.top();
        pq.pop();
        if (!pq.empty())
            oss << ", ";
    }
    oss << "]";
    return oss.str();
}

#endif // STRINGIFY_H

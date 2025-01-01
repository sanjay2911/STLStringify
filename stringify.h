#ifndef STRINGIFY_H
#define STRINGIFY_H

#include <array>        // std::array
#include <deque>        // std::deque
#include <forward_list> // std::forward_list
#include <list>         // std::list
#include <map>          // std::map, std::multimap
#include <queue>        // std::queue, std::priority_queue
#include <set>          // std::set, std::multiset
#include <sstream>
#include <stack>         // std::stack
#include <string>        // std::string
#include <tuple>         // std::tuple
#include <unordered_map> // std::unordered_map, std::unordered_multimap
#include <unordered_set> // std::unordered_set, std::unordered_multiset
#include <utility>       // std::pair
#include <vector>        // std::vector

// Utility function to stringify a vector container
template <typename T> std::string stringify(const std::vector<T> &container)
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

// Utility function to stringify a deque container
template <typename T> std::string stringify(const std::deque<T> &container)
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

// Utility function to stringify a list container
template <typename T> std::string stringify(const std::list<T> &container)
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

// Utility function to stringify a forward_list container
template <typename T> std::string stringify(const std::forward_list<T> &container)
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

// Utility function to stringify a array container
template <typename T, std::size_t N> std::string stringify(const std::array<T, N> &container)
{
    std::ostringstream oss;
    oss << "[";
    for (std::size_t i = 0; i < N; ++i)
    {
        if (i != 0)
            oss << ", ";
        oss << container[i];
    }
    oss << "]";
    return oss.str();
}

// Utility function to stringify a string container
std::string stringify(const std::string &container)
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

// Utility function to stringify set containers
template <typename T> std::string stringify(const std::set<T> &container)
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

// Utility function to stringify multiset containers
template <typename T> std::string stringify(const std::multiset<T> &container)
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

// Utility function to stringify unordered_set containers
template <typename T> std::string stringify(const std::unordered_set<T> &container)
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

// Utility function to stringify unordered_multiset containers
template <typename T> std::string stringify(const std::unordered_multiset<T> &container)
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

// Utility function to stringify key-value pairs
template <typename T1, typename T2> std::string stringify(const std::pair<T1, T2> &p)
{
    std::ostringstream oss;
    oss << "(" << p.first << ", " << p.second << ")";
    return oss.str();
}

// Utility function to stringify map containers
template <typename Key, typename Value> std::string stringify(const std::map<Key, Value> &container)
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

// Utility function to stringify multimap containers
template <typename Key, typename Value> std::string stringify(const std::multimap<Key, Value> &container)
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

// Utility function to stringify unordered_map containers
template <typename Key, typename Value> std::string stringify(const std::unordered_map<Key, Value> &container)
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

// Utility function to stringify unordered_multimap containers
template <typename Key, typename Value> std::string stringify(const std::unordered_multimap<Key, Value> &container)
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

// Utility function to stringify stack
template <typename T> std::string stringify(std::stack<T> stack)
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

// Utility function to stringify queue
template <typename T> std::string stringify(std::queue<T> queue)
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

// Utility function to stringify priority_queue
template <typename T> std::string stringify(std::priority_queue<T> pq)
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

// Utility function to stringify tuple
template <typename... Args> std::string stringify(const std::tuple<Args...> &t)
{
    std::ostringstream oss;
    oss << "(";

    std::apply(
        [&oss](const Args &...args) {
            ((oss << args << ", "), ...); // print each element with a space separator
        },
        t);

    oss << "\b\b)";
    return oss.str();
}

#endif // STRINGIFY_H

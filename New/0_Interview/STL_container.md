# STL

## Skeleton

- #Include => For including the header file which contains predefined functions and algorithms.
- IMPORTANT: #include<bits/stdc++.h>
- Using namespace std; to avoid std::

## Function

```
Type  FunctionName(parameter) {
    // Code
    return dataWithType
}
```

## STL

- Algorithms
- Container
- Functions
- Iterater

## Container

Predefined data structure in the standard template library.

### Pair : Key value pair

A container to save the key value pair.

- `pair<int, int> p = {1, 3}`
- Access: p.first and p.second
- Nested pair.

### Vector

- Array []: We can modify the size of the array.

Vector can modify its size at any time whenever required.
Note: vector uses internally singly linked list.

- Accessing the vector index =>

  - vect[index] or vect.at(index)
  - vect.back()=> last element.

- Defining a vector

  - vector<int> v(5);
  - vector<int> v(5, 100);
  - vector<int> v1(v1);

- Iterator

  - Vector<int>::iterator it = v.begin();
  - it++ , it--
  - Pointer to the position
  - Access: `*(it)`
  - IMPORTANT: use of auto for the iterator data type.

- Insert

  - vect.insert(v.begin(),200);
  - vect.insert(v.begin(),2);
  - vect.insert(v.begin(), copy.begin(), copy.end()); for copying the element from start to end at specific position.

- Functions

` vector<int> vect`
` vector<pair<int, int>> vect`

| Function        | working                                                            | syntax                               | diff from other       |
| --------------- | ------------------------------------------------------------------ | ------------------------------------ | --------------------- |
| push_back       | for inserting the element from back                                | vect.push_back(1)                    | -                     |
| emplace_back    | for inserting the element from back but in efficient way           | vect.emplace_back(1,2)               | vect.push_back({1,2}) |
| begin           | return the iterater from the first element                         | vect.begin()                         | -                     |
| end             | return the iterator pointer for the next position of the last      | vect.end()                           | -                     |
| rbegin          | return the iterater from the last element                          | vect.rbegin()                        | -                     |
| rend            | return the iterator pointer for the previous position of the first | vect.rend()                          | -                     |
| back            | return the last element                                            | vect.back                            | -                     |
| at              | for accessing the element of the vector                            | vect.at(index)                       | -                     |
| erase(iterator) | for removing the element from the vector `[start, end)`            | vect.erase(v.begin()+1, v.begin()+2) | -                     |
| insert          | for inserting the element at the desired position                  | vect.insert(iterator, value)         | -                     |
| size            | return the size of the vector                                      | vect.size()                          | -                     |
| clear           | erase the entire array                                             | vect.clear()                         | -                     |
| pop_back()      | remove and return the last element from the vector                 | vect.pop_back()                      | -                     |
| empty()         | check if the vector is empty or not                                | vector.empty()                       | -                     |

### List

List internally uses doubly linked list. So we get some extra sets of functionalities.

- Push_front & pop_front function along with all the functions of the vector.

### Stack

- Last In first out
  example: Stack
- pushes at the front

Function: top(), pop(), empty(), push()

### Queue

- First in first out
  example: Queue of the people

  Function: front() , back() , push(), emplace(), pop()

### Priority queue

- Priority queue is the queue where the element get the priority to stay at the front.
- Largest element always stays at the front.

  Function: front() , back() , push(), emplace(), pop()

IMPORTANT:

- Min heap: A data structure which maintains the order of the element [min -> max]
- Max heap: A data structure which maintains the order of the element [max -> min]

### Deque

Doubly ended queue.

### Sets

Set is a data structure whose elements are unique and order is maintained.

Key points:

- sorted order
- Unique

syntax: `set<int> st;`

All operation are t: O(log(n)).

| Function    | working                                                       | syntax                | diff from other              |
| ----------- | ------------------------------------------------------------- | --------------------- | ---------------------------- |
| insert      | inserting the element in the set                              | st.insert(value)      | -                            |
| emplace     | inserting the element in the set                              | st.emplace(value)     | -                            |
| find        | search the element in the set and return the pointer          | st.find(value)        | if not found return st.end() |
| erase       | remove the element from the set. t: log(n)                    | st.erase(value)       | -                            |
| erase       | remove the element from the set from first to last. t: log(n) | st.erase(first, last) | -                            |
| size        | size of the set                                               | st.size()             | -                            |
| upper_bound | Returns the iterator of upper bound of the set                |  st.upper_bound()     | -                            |
| lower_bound | Returns the iterator of lower bound of the set                |  st.lower_bound()     | -                            |

Upper bound: Upper bound is the immediate next element in sorted data structure whose value is greate than k.
lower bound: Lower bound is the element equivalent to the k and if not present immediate next element is needed.

### Multisets

Set which allows repetition.

- Order is maintained.
- All functions are same but erase() will erase all the instances of the that element.
- ms.erase(ms.find(1));

### UnOrderedSet

- Uniqueness persist but the order of the element is not present.

Every operation is O(n).
Note: Upper bound and lower bound function doesn't works because lowerBound and UpperBound are only applicable to the

Syntax: `unordered_set<int> set`

### Map

- Data structure of key value.
  Key are unique and value are unique.
  - sorted order.
  - unique keys

function:

- Insert({key, value}) or mp[key] = value, emplace. if key doesn't exists then returns the 0 or null.
- auto it: map
- find()

### Multimap

Similar to the multiset.
Keys are not unique.

### Unordered map

Similar to unordered set where key are unique but the order of the keys are not sorted.

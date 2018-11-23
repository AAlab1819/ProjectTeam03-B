# Problem solving comparison for [910 A](https://codeforces.com/contest/910/problem/A) using Greedy and DP  
This repo will solve the Codeforces problem [The Way to Home](https://codeforces.com/problemset/problem/910/A) using Greedy and Dynamic Programming. We will compare both solutions to see which one is more optimal.

### Team Member
- Calvin Joe Dennedy
- Farrell Nathaniel
- Grand Marcell
- Klemens Wiyanto

### Language
- C++ 14

## Problem Summary 
A frog is trying to reach home from point 1 to *n*. The frog can jump on *d* distance, on points that has lilies on it. There are always lilies somewhere in point 1 to *n*.

The problem needs us to find the minimum amount of jumps she needs to do in order to get home from point 1. If the next lily point is less than the jump distance, print -1.

## Input/Output
**Sample #1**  
Input:
```
8 4
10010101
```
Output:
```
2
```

---
**Sample #2**  
Input:
```
4 2
1001
```
Output:
```
-1
```

##### Note  
In the first example the from can reach home in two jumps: the first jump from the point 1 to the point 4 (the length of the jump is three), and the second jump from the point 4 to the point 8 (the length of the jump is four).

In the second example the frog can not reach home, because to make it she need to jump on a distance three, but the maximum length of her jump equals to two.

## Analysis  
#### Greedy Solution:  
The greedy way of this problem 


#### Dynamic Programming Solution:

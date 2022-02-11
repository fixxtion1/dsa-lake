# Common Complexities and Constraints

Mathematical formuals that just calculate answer: O(1)



Binary Search: O(log n)




Sorted set/map or heap: O(log n) per operation




Reading in n items: O(n)




Iterating through all subsets of size k: O(n<sup>k</sup>)



Iterating through all subsets: O(2<sup>n</sup>)



Iterating through all permuataions: O(n!)

### Here are conservative upper bounds on the value of n for each time complexity. You might get away with more than this, but this should allow you to quickly check whether an algorithm is viable.

n <= 10 -> O(n!)<br />
n <= 20 -> O(2<sup>n</sup>.n)<br />
n <= 80 -> O(n<sup>4</sup>)<br />
n <= 400 -> O(n<sup>3</sup>)<br />
n <= 7500 -> O(n<sup>2</sup>)<br />
n <= 7.10<sup>4</sup> -> O(n root(n))<br />
n <= 5.10<sup>5</sup> -> O(nlogn)<br />
n <= 5.10<sup>6</sup> -> O(n)<br />
n <= 10<sup>18</sup> -> O(log<sup>2</sup> n),O(log n),O(1)<br />

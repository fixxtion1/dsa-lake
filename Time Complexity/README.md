# Common Complexities and Constraints

#### Mathematical formuals that just calculate answer: O(1)
#### Binary Search: O(log n)
#### Sorted set/map or heap: O(log n) per operation
#### Reaing in n items: O(n)
#### Iteratinf through all subsets of size k: O(n<sup>k</sup>)
#### Iterating through all subsets: O(2<sup>n</sup>)
#### Iterating through all permuataions: O(n!)

### Here are conservative upper bounds on the value of n for each time complexity. You might get away with more than this, but this should allow you to quickly check whether an algorithm is viable.

n <= 10 -> O(n!)<br />
n <= 20 -> O(2<sup>n</sup>.n)
n <= 80 -> O(n<sup>4</sup>)
n <= 400 -> O(n<sup>3</sup>)
n <= 7500 -> O(n<sup>2</sup>)
n <= 7.10<sup>4</sup> -> O(n root(n))
n <= 5.10<sup>5</sup> -> O(nlogn)
n <= 5.10<sup>6</sup> -> O(n)
n <= 10<sup>18</sup> -> O(log<sup>2</sup> n),O(log n),O(1)










































$n$Possible complexities$n \le 10$$\mathcal{O}(n!)$, $\mathcal{O}(n^7)$, $\mathcal{O}(n^6)$$n \le 20$$\mathcal{O}(2^n \cdot n)$, $\mathcal{O}(n^5)$$n \le 80$$\mathcal{O}(n^4)$$n \le 400$$\mathcal{O}(n^3)$$n \le 7500$$\mathcal{O}(n^2)$$n \le 7 \cdot 10^4$$\mathcal{O}(n \sqrt n)$$n \le 5 \cdot 10^5$$\mathcal{O}(n \log n)$$n \le 5 \cdot 10^6$$\mathcal{O}(n)$$n \le 10^{18}$$\mathcal{O}(\log^2 n)$, $\mathcal{O}(\log n)$, $\mathcal{O}(1)$j

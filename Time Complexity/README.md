# Common Complexities and Constraints

Mathematical formulas that just calculate an answer: $\mathcal{O}(1)$
Binary search: $\mathcal{O}(\log n)$
Sorted set/map or priority queue: $\mathcal{O}(\log n)$ per operation
Prime factorization of an integer, or checking primality or compositeness of
an integer naively: $\mathcal{O}(\sqrt{n})$
Reading in $n$ items of input: $\mathcal{O}(n)$
Iterating through an array or a list of $n$ elements: $\mathcal{O}(n)$
Sorting: usually $\mathcal{O}(n \log n)$ for default sorting algorithms
(mergesort, Collections.sort, Arrays.sort)
Java Quicksort Arrays.sort function on primitives: $\mathcal{O}(n^2)$

See Introduction to Data Structures for details.


Iterating through all subsets of size $k$ of the input elements:
$\mathcal{O}(n^k)$. For example, iterating through all triplets is
$\mathcal{O}(n^3)$.
Iterating through all subsets: $\mathcal{O}(2^n)$
Iterating through all permutations: $\mathcal{O}(n!)$


Here are conservative upper bounds on the value of $n$ for each time complexity.
You might get away with more than this, but this should allow you to quickly
check whether an algorithm is viable.













































$n$Possible complexities$n \le 10$$\mathcal{O}(n!)$, $\mathcal{O}(n^7)$, $\mathcal{O}(n^6)$$n \le 20$$\mathcal{O}(2^n \cdot n)$, $\mathcal{O}(n^5)$$n \le 80$$\mathcal{O}(n^4)$$n \le 400$$\mathcal{O}(n^3)$$n \le 7500$$\mathcal{O}(n^2)$$n \le 7 \cdot 10^4$$\mathcal{O}(n \sqrt n)$$n \le 5 \cdot 10^5$$\mathcal{O}(n \log n)$$n \le 5 \cdot 10^6$$\mathcal{O}(n)$$n \le 10^{18}$$\mathcal{O}(\log^2 n)$, $\mathcal{O}(\log n)$, $\mathcal{O}(1)$j

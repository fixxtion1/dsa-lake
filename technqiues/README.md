# Little little Technqiues


### [Transfiguration](https://practice.geeksforgeeks.org/problems/b6b3297ccfb1ad5f66a9c2b92979170417adf114/1)
The idea is to start matching from last characters of both strings. If last characters match, then our task reduces to n-1 characters. If last characters don’t match, then find the position of B’s mismatching character in A. The difference between two positions indicates that these many characters of A must be moved before current character of A. 

### [Find Words That Can Be Formed by Characters](https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/)
The idea is to make two frquency array(one of chars and other of each word in words array) and then traverse through each character in each word -> if frequency of each character is same in both freq array then add it to answer otherwise not.



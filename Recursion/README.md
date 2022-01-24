# Recursion
Recursion is a method of solving a problem where the solution depends on solutions to smaller instances of the same problem.

## Types of Recursion

### Functional Recursion:
We expect to return the answer from the function.<br />

### Parameterised Recursion:
We try to form answer from top to base case in the parameters and expect to print the answer in base case. 

*It is better to use parameterised recursion as functional someimtes may lead to huge memory usage.

## Ask these questions to approach a recusive problem:

### -> Can i make the input smaller (explicitly)?
Yes -> Expectation Faith Strategy

Three Steps:
-> Figure out what is out expectation from the function.(what you really want the function to return)<br />
-> Figure out what is your faith (try to have faith in function that it somehow know answer  for smaller input for the same problem)<br />
-> Meeting the expectation part with faith<br />

Lets take Example:

You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

-> Our expectation to the function is that it will return all distinct ways to climb to top.<br />
-> I have faith in function that it knows that how many ways from (n-1) step and (n-2) step<br />
-> To meet both i have to return the ways from (n-1) + (n-2) steps and define some base cases<br />

```
int climbStairs(int n) {
        if(n==0 or n==1 or n==2) return n;
        
        int result = climbStairs(n-1)+climbStairs(n-2);
        return result;
        
}
```



### -> Do i need to take decisions or make some choices in problems?
(Decisions itself will lead to smaller input)
Yes -> Recursion Tree









## Some ifk things

### Recursive Calls and Processing

Single recursive call:

```
pre area
function(n-1); // recursive call
post area
```

Pre area is always executed while going deep in the recursion Tree.<br />
Post area is always executed while coming up from the depth of recusion tree.

Multiple recursive calls:

```
pre area
function(n-1); // recursive call
in area
function(n-2); // recursive call 2
post area
```

*in case of more than 2 recursive calls there will many "in" area but only one pre area and one post area

### Just a Observation

Sometimes we make stupid calls but smart base cases and sometimes we make smart calls but normal base cases.

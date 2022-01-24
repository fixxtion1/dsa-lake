# Recursion

## How to identify Recursive problems?

### Ask these questions:

-> Do i need to take decisions or make some choices in problems?
(Decisions itself will lead to smaller input)
Yes -> Recursion Tree

-> Can i make the input smaller (explictly)?
Yes -> Expectation Faith Strategy



## Some little concepts

### Single recursive call:

pre area
function(n-1); // recursive call
post area

Pre area is always executed while going deep in the recursion Tree.
Post area is always executed while coming up from the depth of recusion tree.

### Multiple recursive calls:

pre area
function(n-1);
in area
function(n-2);
post area

*in case of more than 2 recursive calls there will many in area but only one pre area and one post area

### Sometimes we make stupid calls but smart base cases and sometimes we make smart calls but normal base cases

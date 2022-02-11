# The Art of Debugging

Run with n=1.

Check overflow(long long vs int).

Check all array bounds.

Check if m, n aren’t misused.

Printed enough new lines or extra new lines?

Make sure output format is right(including YES/NO vs Yes/No or newline vs spaces).

Have you cleared the vectors ?

Make sure two ints aren’t multiplied to get a long long.

Output enough digits after decimal point.

Check the constraints again.

When using multiple dfs recursions check if inside one dfs another dfs is called or not.

Shouldn't you print the case number?

Are you using the correct mod value?

"I spent a lot of my time debugging my solution without any success, after the contest I discovered that the obstacles in the input is 'x' (small one) while I was thinking it was 'X' (capital), I lost a bronze medal because of it :(" - kingofnumbers

Set or multiset?

Different Variables with the same name?

Inside 2d loop are you using i++ instead of j++?

Are you using ceil function? Then remove it!

Is inf large enough?

For multiple queries are you returning 0 inside the queries?

For max and min have you initialized the values by a good enough value?

Are you using the local variable of the same name when global variable was required to be used?

"Declared a counter of type char instead of int , resulted in passing of pretests and failing of system test. :)" - A random CF user

"I subtracted 1 in a for loop from v.size(). Guess what happened when the input vector is empty?" - A random CF user

"for (int i = n - 1; i--; i >= 0) instead of: for (int i = n - 1; i >= 0; i--) It passed pretests and failed systests" - A random CF user

Are you using memset correctly?

Use bool operators using brackets. Beware!!! E.g. ans = ans + k == 0 vs ans = ans + (k == 0).

Have you deleted debug(x) lines? It might get you TLE!

It may be scanf("%d" , x). where &x is missing.

Instead of printing NO printed N0. (with a zero).

Are you erasing values from a set or an stl while parallelly traversing the elements of the stl? Please don’t. This is not nice!

Don't use scanf or printf while using ios_base.

Still have no idea? Try to recode from scratch or see others solutions.



# Boolean Examples in C

---

Real Life Example

Let's think of a "real life example" where we need to find out if a
person is old enough to vote.

In the example below, we use teh `>=` comparison operator to find out if
the age (`25`) is `greater than` OR `equal to` the voting age limit,
which is set to `18`:

```c

int myAge = 25;
int votingAge = 18;

printf("%d", myAge >= votingAge); // Returns 1 (true)

```

Cool, right? An even better approach (since we are on a roll now), would
be to wrap the code above in an `if...else` statement, so we can perform
different actions depending on the result:

Output "Old enough to vote!" if `myAge` is *greater than or equal to*
`18`. Otherwise output "Not old enough to vote":

```c

#include <stdio.h>
#include <stdbool.h>

int main() {

    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote\n");
    }
    
    return 0;
}

```

Booleans are the basis for all comparisons and conditions
You will learn more about conditions `if...else` in the next chapter.


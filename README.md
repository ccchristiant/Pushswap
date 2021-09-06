## B1 - Elementary Programming in C

## B-CPE-110

# Push Swap

## Fancy List Sorting

```
binary name : push_swap
language : C
compilation : via Makefile, including re, clean and fclean rules
```
- The totality of your source files, except all useless files (binary, temp files, obj
    files,...), must be included in your delivery.
- All the bonus files (including a potential specific Makefile) should be in a directory
    named _bonus_.
- Error messages have to be written on the error output, and the program should
    then exit with the 84 error code (0 if there is no error).

## Authorized Functions

The only system calls allowed are the following ones:

- write
- malloc
- free


## The project

The game is made up of two lists of numbers named _l_a_ and _l_b_.
In the beginning, _l_b_ will be empty and _l_a_ will contain a certain amount of positive or negative numbers.
The objective of the game is to sort _l_a_.

In order to accomplish this, you will only have access to the following operation:

- **sa**
    swap the first two elements of _l_a_ (nothing will happen if there aren’t enough elements).
- **sb**
    swap the first two elements of _l_b_ (nothing will happen if there aren’t enough elements).
- **sc**
    **sa** and **sb** at the same time.
- **pa**
    take the first element from _l_b_ and move it to the first position on the _l_a_ list (nothing will happen if
    _l_b_ is empty).
- **pb**
    take the first element from _l_a_ and move it to the first position on the _l_b_ list (nothing will happen if
    _l_a_ is empty).
- **ra**
    rotate _l_a_ toward the beginning, the first element will become the last.
- **rb**
    rotate _l_b_ toward the beginning, the first element will become the last.
- **rr**
    _ra_ and _rb_ at the same time.
- **rra**
    rotate _l_a_ toward the end, the last element will become the first.
- **rrb**
    rotate _l_b_ toward the end, the last element will become the first.
- _rrr_
    **rra** and **rrb** at the same time.

You must create a program in which _l_a_ is given as parameter (all numbers are valid and can fit in an integer).
The goal is to sort the list by using the fewest possible operations.
The program must print the series of operations that enable this list to be sorted.

```
The operations must be displayed separated by a space. No spaces should be at the
beginning nor at the end. The operations’ list must be followed by a \n.
```
You could add some extra features (considered as bonus); for example, adding the following options:

- **-v** shows the statuses of _l_a_ and _l_b_ at each step.
- **-vT** the same as the above text, but using the libncurses


## Examples

Let _l_a_ contain2 1 3 6 5 8and _l_b_ be empty.
Here are the results of some operations (each step is done after the previous ones):

- **sa**
    _l_a_ 1 2 3 6 5 8
    _l_b_
- **pb pb pb**
    _l_a_ 6 5 8
    _l_b_ 3 2 1
- **ra rb** (or simply **rr** )
    _l_a_ 5 8 6
    _l_b_ 2 1 3
- **rra rrb** (or simply **rrr** )
    _l_a_ 6 5 8
    _l_b_ 3 2 1
- **sa**
    _l_a_ 5 6 8
    _l_b_ 3 2 1
- **pa pa pa**
    _l_a_ 1 2 3 5 6 8
    _l_b_

### ∇ Terminal - + x

```
∼/B-CPE-110> ./push_swap 2 1 3 6 5 8 | cat -e
sa pb pb pb sa pa pa pa$
```
### ∇ Terminal - + x

```
∼/B-CPE-110> ./push_swap 73 79 83 89 97 | cat -e
$
```
### ∇ Terminal - + x

```
∼/B-CPE-110> ./push_swap 1789 | cat -e
$
```


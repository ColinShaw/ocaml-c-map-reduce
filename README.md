## __Peave__
   
I have a significant grievance with people speaking of functions such as map and reduce in non-functional
languages as functional programming.  There is nothing special about map and reduce, they are not functional
concepts, they are very basic list operations.  

Reduce is also known historically as fold, which is a more generally used term in functional 
communities.  In some languages it is known as inject, and in imperative languages having 
enumerations it tends to be termed names more like aggregate.  The choice of term tends to depend 
on the history and lineage of the language.  You can generally tell if someone knows what they are 
talking about relative to functional languages if they can describe the dichotomy of fold and why 
the two matter.  

A good question to pose is why functional implementations admit elegant use of functions like map and 
fold.  There are several answers to this question.  First, many functional languages are LISP-like in the
sense that list operation are fundamental operations on types, rendering basic language syntax that makes
list operations quite expressive.  Second, functional languages are applicative and support first-class 
and higher order functions.  Stating that an imperative language is functional because there is support 
for map and fold is simply incorrect.  At best these features are an accommodation for the laziness
or ineptitude of those who use the language.

Herein you will find an implementation of map and fold implemented in both OCaml and C.  Yes, C, 
because doing so helps highlight that these are not functional since C is about as imperative as you 
can get with a structured language.

You can run the OCaml example by:

```
ocaml peave.ml
```

You can build and run the C example by:

```
gcc peave.c; ./a.out
```

Both programs will simply return unless there is an assertion error.

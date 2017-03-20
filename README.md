## Peave About Map, Reduce and People Who Talk About 'The Functional Style'
   
I have a significant grievance with people speaking of functions such as map and reduce in non-functional
languages as functional programming.  There is nothing special about map and reduce, they are not functional
concepts, they are very basic list operations.  The whole notion of needing to have a defense for communities that 
are unwilling to learn what functional programming really is makes me want to pull my hair out.

Reduce is also known historically as fold, which is a more generally used term in functional 
communities.  In some languages it is known as inject, and in imperative languages having 
enumerations it tends to be termed names more like aggregate.  The choice of term tends to depend 
on the history and lineage of the language.  You can generally tell if someone knows what they are 
talking about relative to functional languages if they can describe the dichotomy of fold and why 
the two forms matter.  For those interested in what is important abot functional programming, there are 
abundant resources available on the web, or you could look at these [slides](https://docs.google.com/presentation/d/1IEFzjppa1-UlqauOotJmVs2B4lT5xVit4Ziwq3v8zPQ/pub/) that I put together for a presentation.

A good question to pose is why functional implementations admit elegant use of functions like map and 
fold.  There are several answers to this question.  First, many functional languages are LISP-like in the
sense that list operation are fundamental operations on types, rendering basic language syntax that makes
list operations quite expressive.  More than that, the basic operations on lists have special properties that
facilitate provability of execution.  Second, functional languages are applicative and support first-class 
and higher order functions.  That is not something you can fake in a different language, it is deeply part 
of the design of the language.  Stating that an imperative language is functional because there is support 
for map and fold is simply incorrect.  At best these features are an accommodation for the laziness
or ineptitude of those who use the language.

I am perfectly happy to embrace that there are positive features _in any language_ to using methods entitled
map, reduce and others on iterables, enumerables, collections or whatever one wants to call indexable multiples
since it significantly reduces error-prone human behaviors when manually indexing things.  This is a huge
improvement, as it takes the error opportunity out of rote code.  However, you can't say it is functional, it
is not, it is just not true.  Like I said before, functional means list constructs coupled with first-class
and higher-order functions. You can mimic the list construct, but you are creating a whole new language to 
support the first-class and higher-order functions.

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

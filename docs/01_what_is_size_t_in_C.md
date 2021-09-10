# What is size_t in C?

[From Wikipedia][1]:

> According to the 1999 ISO C standard
> (C99), `size_t` is an unsigned integer
> type of at least 16 bit (see sections
> 7.17 and 7.18.3).
> 
> `size_t `is an unsigned data type
> defined by several C/C++ standards,
> e.g. the C99 ISO/IEC 9899 standard,
> that is defined in `stddef.h`.[1] It can
> be further imported by inclusion of
> `stdlib.h` as this file internally sub
> includes `stddef.h`.
> 
> This type is used to represent the
> size of an object. Library functions
> that take or return sizes expect them
> to be of type or have the return type
> of `size_t`. Further, the most
> frequently used compiler-based
> operator sizeof should evaluate to a
> constant value that is compatible with
> `size_t`.


  [1]: http://en.wikipedia.org/wiki/Size_t

As an implication, `size_t` is a type guaranteed to hold any array index.
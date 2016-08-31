##C-Structs-Example

First read [this](http://www.tutorialspoint.com/cprogramming/c_structures.htm) tutorial on structs.

Structs are simply custom data types that are composed of a combination of other data types.

For example:

```c
struct Rectangle {
  int length;
  int width;
};
```

This could then be referenced and declared as:

```c
struct Rectangle my_rectangle;
```

Notice how I have to refer to this new type by its "full" name "struct Rectangle" and cannot just declare a "Rectangle".  However if I want to refer to my new structs this way I can make use of the keyword ```typedef``` which you can read about [here](http://www.tutorialspoint.com/cprogramming/c_typedef.htm).  There is some debate regarding whether or not this is a good idea however most of the code I have read prefers the ```typedef``` syntax which would look like this:

```c
typedef struct {
  int length;
  int width;
} Rectangle;
```

Now I can declare a "Rectangle":

```c
Rectangle my_rectangle;
```

Check out some of the other examples in this repo and then try fooling around with some of these concepts on your own.

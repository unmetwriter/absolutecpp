# Identifiers

Identifiers must start with a letter and can only contain letters, numbers and underscores (\_)

## Variable Declaration

To declare a variable is to speak it into existance. The compiler will create it and allocate memory in accordance with the type.

All variables must be declared before use

Syntax: `Type_name Variable_name_1, variable_name_2`

## Assignment Statement

In an assignment statement, first the expression on the right hand side of the equal side is evaluated and then the variable on the left hand side of the equal is set to this value

Syntax: `Variable = Expression`

### Lvalue and Rvalue

Lvalue is the value to the left hand side of the assignment opperator and rvalue is anthing on the right hand side of the assignment operator

### Assignment at initialization

Syntax: `type_name variable_name_1 = Expression_for_value1,
type_name variable_name_2 = expression_for_value2,...`

Alternative syntax: `type_name variable_name_1 (Expression_for_value_1),...`

## Literals

Is the name of one specific balue, a **constant**. Cannot be changed after assignment at declaration

Syntax: `const type_name variable_name = Constant`

## Type Casting

To type cast is a way of changing a value of one type to another type
For example if you want to type cast an answer to 9/2 into a double you would write `double ans = n/static_cast<double>(m);` and that would output 3.5 rather than 4. `static_cast` works as a function that returns the input value into type defined. Does not change it at all. Static cast always rounds down.

## Increment and decrement operators

`--` and `++` increases ints by one. Order matters as `++n` is not the same as `n++`. `++n` evaluates the expression first and then increments n while `n++` does the same.

## IO

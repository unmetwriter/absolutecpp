# Flow of Control

## Boolean expressions

You can form a more elaborate boolean expression by combining two simpler boolean expression using the "and" operator &&
Syntax: `(boolean_exp_1) && (boolean_exp_2)`

Or operator
Syntax: `(boolean exp_1)||(boolean_exp_2)`

Note: If it can evaluate wheter or not an expression is true or false by only evaluating one expression then it will always skip the second part. `False && 1<2` does not check 1<2 and instead passes it as false no matter. This is called **Short Circut evaluation**

## If-else statements

Statements inside of `{}` are called compound statements

## For statements

Syntax:

```
for (initialization_action;boolean_expression; update_action)
{
    body_statement
}
```

Do not put a semicolon at the end of the for loop

### Break and continue

Best way to alter the flow of a loop is using the break command. It will throw you out of the current loop scope. The `continue` statement will jump back up to the top of the loop.

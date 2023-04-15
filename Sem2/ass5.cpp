#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1; /* Global declarations */

void push(char elem)
{ /* Function for PUSH operation */
    stack[++top] = elem;
}

char pop()
{ /* Function for POP operation */
    return (stack[top--]);
}

int precedence(char symbol)
{ /* Function for precedence */

    if (symbol == '^') /* exponent operator, highest precedence*/
    {
        return (30);
    }
    else if (symbol == '*' || symbol == '/')
    {
        return (20);
    }
    else if (symbol == '+' || symbol == '-') /* lowest precedence */
    {
        return (10);
    }
    else
    {
        return (0);
    }
}
/* Main Program */
int main()
{
    char infix[100], postfix[100], ch, element;

    int i = 0, k = 0;

    printf("Enter Infix Expression : ");

    scanf("%s", infix);  // a+b*c  ===>   abc*+

    push('$');

    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
            push(ch);

        else if (isalnum(ch))
            postfix[k++] = ch;

        else if (ch == ')')
        {
            while (stack[top] != '(')
                postfix[k++] = pop();
            element = pop(); /* Remove ( */
        }

        else
        { /* Operator */
            while (precedence(stack[top]) >= precedence(ch))
                postfix[k++] = pop();
            push(ch);
        }

    }
    while (stack[top] != '$') 
        postfix[k++] = pop();
    
    postfix[k] = '\0';
    printf("\nPostfix Expression =  %s\n", postfix);

    return 0;
}
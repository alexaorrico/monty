#include "monty.h"

/**
 * m_sub - subtract top element of stack from next element and push result
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_sub(stack_t **stack, unsigned int line_number)
{
	int n, m;

	if (var.stack_len < 2)
	{
		dprintf(STDERR_FILENO,
			"L%ud: can't sub, stack too short",
			line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	m = (*stack)->n;
	m_pop(stack, line_number);
	m_push2(stack, m - n);
}
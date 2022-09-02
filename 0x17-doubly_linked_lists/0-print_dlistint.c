#include "lists.h"
#include <stdio.h>
 *spalindrome(n):
	
	    string = str(n)
       
    return string == string[::-1]



array = []

for i in range(999, 99, -1):
	
	    for j in range(i, 99, -1):
		    
		            if ispalindrome(i * j):
				    
				                array.append(i * j)
	
	print(max(array))print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
spalindrome(n):
       
    string = str(n)

    return string == string[::-1]



array = []

for i in range(999, 99, -1):
	
	    for j in range(i, 99, -1):
		    
		            if ispalindrome(i * j):
				    
				                array.append(i * j)
	
	print(max(array))i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

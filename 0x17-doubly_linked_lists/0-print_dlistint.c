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
				    
				                array.append(nclude "lists.h"
								
								
								
								/**
								 *
								 *  *print_dlistint - print the elements in the doubly link list
								 *
								 *   *@h: double linked list
								 *
								 *    * Return: number of elements inside the doubly linked list
								 *
								 *     */
								
								
								
								size_t print_dlistint(const dlistint_t *h)
								
								{
								
									size_t node = 0;
									
									
									
										if (h == NULL)
											
													return (node);
										
											/*find the first element*/
										
											while (h->prev != NULL)
												
														h = h->prev;
											
												while (h)
													
														{
															
																	printf("%d\n", h->n);
																	
																			h = h->next;
																			
																					node += 1;
																					
																						}
												
													return (node);
													
								}i * j)
	
	print(max(array))i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

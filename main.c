# include "libft.h"
# include <stdio.h>

void print_lst(t_list *lst)
{
	while (lst) {
		int *val = (int*)lst->content;
		printf("%d\n", *val);
		lst = lst->next;
	}
}

int main() {
	int a[5] = {1, 2, 3, 4};

	t_list *lst = NULL;


	//ft_lstadd_front(&lst, ft_lstnew(&a[1]));
	//ft_lstadd_front(&lst, ft_lstnew(&a[2]));
	ft_lstadd_back(&lst, ft_lstnew(&a[3]));
	/*t_list *last = ft_lstlast(lst);
	if (last)
	{
		int *lastval = (int*)last->content;
		printf("%d\n", *lastval);
	}
	*/
	printf("\n===========\n");
	print_lst(lst);
	
}

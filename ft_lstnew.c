#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = malloc(sizeof(t_list));
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

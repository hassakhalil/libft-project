#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = malloc(sizeof(t_list));
  if (!lstnew)
    return (0);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

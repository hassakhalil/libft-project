#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list  *new;
  t_list  *head;
  t_list  *ptrlst;


	if (!lst || !f || !del)
		return (0);
  ptrlst = lst;
  head =  ft_lstnew(f(lst->content));
  ptrlst = ptrlst->next;
  while (ptrlst)
  {
    new = ft_lstnew(f(ptrlst->content)); 
    if (!new)
    {
      ft_lstclear(&new, del);
      return (0);
    }
    ft_lstadd_back(&head,new);
    ptrlst = ptrlst->next;
  }
  return (head);
}

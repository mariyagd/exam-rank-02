

```
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
```
---
#### Exemple: what this should do:

**Input :** list with content of type int
	
	t_list list = {2, 2, 3, 2, 4, 2, 5, 2, 2, 9}; 

	nbr to compare  = 2;
         
	ft_list_remove_if(...);

**Output :** 
	
	3, 4, 5, 9

**Input :** list with contents of type int

	t_list list{1, 2, 2, 2, 5, 6, 7}; 
	
	nbr to compare = 2;
        
	ft_list_remove_if(...);
	
**Output :** 
	
	1, 5, 6, 7
---

Please note that I used `content` instead of `data` so I can use the functions of my libft library in my main.
```
typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;
```
---
My `cmp` function is:

```
int cmp(int *a, int *b)
{
	if (*a == *b)
		return (0);
	else
		return (1);
}
```

It takes pointers as arguments because `(*begin_list)->content` and `data_ref` are indeed pointers to `int` values.

---

In my main I compare 10 elements with content of type `int` with one `int` value.

***

### Exemple of output of my program:

<img width="853" alt="Capture d’écran 2023-01-18 à 11 30 13" src="https://user-images.githubusercontent.com/109855801/213148632-ff1ddfa5-d7f0-49f8-ac4e-4ddbd3bc7d16.png">



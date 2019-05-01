/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 14:26:16 by tlorine           #+#    #+#             */
/*   Updated: 2019/05/01 15:14:59 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	fill_line(char *buff_p, char **line, int i)
{
	int	g;

	if (!(line[0] = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	g = i;
	i = 0;
	while (i < g)
	{
		line[0][i] = buff_p[i];
		i++;
	}
	line[0][i] = '\0';
	return (1);
}

static char	*fill_ost(int i, char *buff_p, char *ost)
{
	int	g;

	g = 0;
	while (buff_p[i])
	{
		i++;
		g++;
	}
	if (!(ost = (char *)malloc(sizeof(char) * g + 1)))
		return (NULL);
	i = i - g;
	g = 0;
	while (buff_p[i])
	{
		ost[g] = buff_p[i];
		i++;
		g++;
	}
	ost[g] = '\0';
	return (ost);
}

static int	search_n(char *buff, char **line)
{
	int i;

	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n' || buff[i] == '\0')
		{
			if (!(fill_line(buff, line, i)))
				return (-1);
			buff = ft_strdel(&buff);
			return (i);
		}
		i++;
	}
	return (i);
}

static int	gnl_main(char **ost, char *buff, char **line, int i)
{
	if (*ost != NULL)
	{
		*ost = ft_strdel(&*ost);
	}
	if ((i = search_n(buff, line)) < 0 || buff[i] == '\n')
	{
		if (i == -1 || !(*ost = fill_ost(i + 1, buff, *ost)))
			return (-1);
		return (-2);
	}
	return (i);
}

int			get_next_line(const int fd, char **line)
{
	int			i;
	int			re;
	char		*buff;
	static char	*ost;

	if (!(buff = (char *)malloc(sizeof(char) *\
	(BUFF_SIZE > 12000 ? BUFF_SIZE : 12000))) || !line\
	|| ((i = read(fd, buff, 0)) < 0) || BUFF_SIZE < 0)
		return (-1);
	if (ost != NULL && ost[0] != '\0')
	{
		if ((i = gnl_main(&ost, ft_strcpy(buff, ost), line, i)) < 0)
			return (i == -1 ? -1 : 1);
	}
	while ((re = read(fd, buff + i, BUFF_SIZE)))
	{
		buff[re + i] = '\0';
		if ((i = gnl_main(&ost, buff, line, i)) < 0)
			return (i == -1 ? -1 : 1);
	}
	if (i > 0)
		if (!(fill_line(buff, line, i)))
			return (-1);
	buff = ft_strdel(&buff);
	return (i > 0 ? 1 : 0);
}

int    main(int argc, char **argv)
{
	int        fd;
	char    *line;
	int i;
	i = 0;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
		i++;
	}
	ft_putnbr(i);
	if (argc == 2)
		close(fd);
}

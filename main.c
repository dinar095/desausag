
#include "get_next_line.h"

char 	*rd_reminder(char **line, char **reminder)
{
	char	*p_t;
	char	*tmp;

	p_t = NULL;
	if (*reminder)
	{
		if ((p_t = ft_strchr(*reminder, '\n')))
		{
			*p_t = '\0';
			p_t++;
			tmp = *line;
			*line = ft_strdup(*reminder);
			free(tmp);
			ft_memcpy(*reminder, p_t, ft_strlen(p_t) + 1);
			return (p_t);

		}
		tmp = *line;
		*line = ft_strdup(*reminder);
		free(tmp);
	}
	return (p_t);
}
int get_next_line(int fd, char **line)
{
	char buf[BUFFER_SIZE + 1];
	int rc;
	char *p_b;
	char *tmp;
	static char *reminder;

	if (!(rd_reminder(line, &reminder)))
	{
		while ((rc = read(fd, buf, BUFFER_SIZE)))
		{
			buf[rc] = '\0';
			if ((p_b = ft_strchr(buf, '\n')))
			{
				*p_b = '\0';
				p_b++;
				reminder = ft_strdup(p_b);
				tmp = *line;
				*line = ft_strjoin(*line, buf);
				free(tmp);
				return (1);
			}
			*line = ft_strjoin(*line, buf);
		}
		return (0);
	}
	return (-1);
}

int main()
{
	char *line;
	int fd;

	fd = open("/Users/desausag/Documents/gnl/desausag/tio.txt", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("GNL res: %s\n\n\n", line);
		free(line);
	}
	printf("GNL res: %s\n\n\n", line);


	return 0;
}
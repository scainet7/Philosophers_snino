/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:23:04 by snino             #+#    #+#             */
/*   Updated: 2022/06/15 15:23:07 by snino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

# define BLU "\033[34m"
# define GRE "\033[32m"
# define RED "\033[31m"
# define END "\033[0m\n"
# include <unistd.h> // usleep, write
# include <stdio.h> // printf
# include <string.h> // memset
# include <stdlib.h> // malloc, free
# include <sys/time.h> // gettimeofday
# include <pthread.h> //pthread_create
# include <semaphore.h> //
# include <signal.h> //

typedef struct s_parameters
{
	int				philo;
	int				time_eat;
	int				time_sleep;
	int				time_die;
	int				nums_eat;
	int				flag;
	pthread_t		*flow;
	sem_t			*sem;
	sem_t			*sem_printf;
	pid_t			*pid;

	int				id;
	long			t_time;
	long			start_eat;

}	t_p;
//libft
int		ft_atoi(const char *str);
int		ft_isdigit(int ch);
//check
int		ft_check_args(int argc, char **argv);
int		ft_check_eat(int *eat);
int		ft_check_death(t_p *params, long time);
//init
int		ft_init_params(int argc, char **argv, t_p *params);
//poc
void	ft_philo_process(t_p *params);
void	ft_write(t_p *params, char *str, long time);
long	time_now(void);
#endif //PHILO_BONUS_H

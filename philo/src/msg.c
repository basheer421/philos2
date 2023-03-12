/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:23:19 by bammar            #+#    #+#             */
/*   Updated: 2023/03/12 21:48:01 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_msg(t_thread_arg *targ, const char *state)
{
	pthread_mutex_lock(targ->print_mutex);
	printf(
		"%ld %lu %s\n",
		get_time() - targ->args->start_time, targ->philo->num, state
	);
	pthread_mutex_unlock(targ->print_mutex);
}

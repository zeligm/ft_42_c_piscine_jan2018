# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicholas_bauer.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmalamud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/18 19:14:18 by zmalamud          #+#    #+#              #
#    Updated: 2018/01/18 19:14:36 by zmalamud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 | grep -i "bomber" | grep -i "nicolas" | grep -v "nicolasbomber" | grep '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}'

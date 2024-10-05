/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgallais <mgallais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:26:52 by mgallais          #+#    #+#             */
/*   Updated: 2024/06/24 16:09:51 by mgallais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

class ScalarConverter {
	private :
		ScalarConverter();
		ScalarConverter( const ScalarConverter &toCopy );
		ScalarConverter & operator=( const ScalarConverter &toCopy );
	public :
		/// Canonical Form : 
		virtual ~ScalarConverter() = 0;
		
		/// Utility Function :
		static void	convert( const std::string &toConvert );
};

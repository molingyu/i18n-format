//        GNU LESSER GENERAL PUBLIC LICENSE
//                        Version 3, 29 June 2007
//
//  Copyright (C) 2024 I18n-format contributors.
//  Everyone is permitted to copy and distribute verbatim copies
//  of this license document, but changing it is not allowed.
//
//
//   This version of the GNU Lesser General Public License incorporates
// the terms and conditions of version 3 of the GNU General Public
// License, supplemented by the additional permissions listed below.
//
//   0. Additional Definitions.
//
//   As used herein, "this License" refers to version 3 of the GNU Lesser
// General Public License, and the "GNU GPL" refers to version 3 of the GNU
// General Public License.
//
//   "The Library" refers to a covered work governed by this License,
// other than an Application or a Combined Work as defined below.
//
//   An "Application" is any work that makes use of an interface provided
// by the Library, but which is not otherwise based on the Library.
// Defining a subclass of a class defined by the Library is deemed a mode
// of using an interface provided by the Library.
//
//   A "Combined Work" is a work produced by combining or linking an
// Application with the Library.  The particular version of the Library
// with which the Combined Work was made is also called the "Linked
// Version".
//
//   The "Minimal Corresponding Source" for a Combined Work means the
// Corresponding Source for the Combined Work, excluding any source code
// for portions of the Combined Work that, considered in isolation, are
// based on the Application, and not on the Linked Version.
//
//   The "Corresponding Application Code" for a Combined Work means the
// object code and/or source code for the Application, including any data
// and utility programs needed for reproducing the Combined Work from the
// Application, but excluding the System Libraries of the Combined Work.
//
//   1. Exception to Section 3 of the GNU GPL.
//
//   You may convey a covered work under sections 3 and 4 of this License
// without being bound by section 3 of the GNU GPL.
//
//   2. Conveying Modified Versions.
//
//   If you modify a copy of the Library, and, in your modifications, a
// facility refers to a function or data to be supplied by an Application
// that uses the facility (other than as an argument passed when the
// facility is invoked), then you may convey a copy of the modified
// version:
//
//    a) under this License, provided that you make a good faith effort to
//    ensure that, in the event an Application does not supply the
//    function or data, the facility still operates, and performs
//    whatever part of its purpose remains meaningful, or
//
//    b) under the GNU GPL, with none of the additional permissions of
//    this License applicable to that copy.
//
//   3. Object Code Incorporating Material from Library Header Files.
//
//   The object code form of an Application may incorporate material from
// a header file that is part of the Library.  You may convey such object
// code under terms of your choice, provided that, if the incorporated
// material is not limited to numerical parameters, data structure
// layouts and accessors, or small macros, inline functions and templates
// (ten or fewer lines in length), you do both of the following:
//
//    a) Give prominent notice with each copy of the object code that the
//    Library is used in it and that the Library and its use are
//    covered by this License.
//
//    b) Accompany the object code with a copy of the GNU GPL and this license
//    document.
//
//   4. Combined Works.
//
//   You may convey a Combined Work under terms of your choice that,
// taken together, effectively do not restrict modification of the
// portions of the Library contained in the Combined Work and reverse
// engineering for debugging such modifications, if you also do each of
// the following:
//
//    a) Give prominent notice with each copy of the Combined Work that
//    the Library is used in it and that the Library and its use are
//    covered by this License.
//
//    b) Accompany the Combined Work with a copy of the GNU GPL and this license
//    document.
//
//    c) For a Combined Work that displays copyright notices during
//    execution, include the copyright notice for the Library among
//    these notices, as well as a reference directing the user to the
//    copies of the GNU GPL and this license document.
//
//    d) Do one of the following:
//
//        0) Convey the Minimal Corresponding Source under the terms of this
//        License, and the Corresponding Application Code in a form
//        suitable for, and under terms that permit, the user to
//        recombine or relink the Application with a modified version of
//        the Linked Version to produce a modified Combined Work, in the
//        manner specified by section 6 of the GNU GPL for conveying
//        Corresponding Source.
//
//        1) Use a suitable shared library mechanism for linking with the
//        Library.  A suitable mechanism is one that (a) uses at run time
//        a copy of the Library already present on the user's computer
//        system, and (b) will operate properly with a modified version
//        of the Library that is interface-compatible with the Linked
//        Version.
//
//    e) Provide Installation Information, but only if you would otherwise
//    be required to provide such information under section 6 of the
//    GNU GPL, and only to the extent that such information is
//    necessary to install and execute a modified version of the
//    Combined Work produced by recombining or relinking the
//    Application with a modified version of the Linked Version. (If
//    you use option 4d0, the Installation Information must accompany
//    the Minimal Corresponding Source and Corresponding Application
//    Code. If you use option 4d1, you must provide the Installation
//    Information in the manner specified by section 6 of the GNU GPL
//    for conveying Corresponding Source.)
//
//   5. Combined Libraries.
//
//   You may place library facilities that are a work based on the
// Library side by side in a single library together with other library
// facilities that are not Applications and are not covered by this
// License, and convey such a combined library under terms of your
// choice, if you do both of the following:
//
//    a) Accompany the combined library with a copy of the same work based
//    on the Library, uncombined with any other library facilities,
//    conveyed under the terms of this License.
//
//    b) Give prominent notice with the combined library that part of it
//    is a work based on the Library, and explaining where to find the
//    accompanying uncombined form of the same work.
//
//   6. Revised Versions of the GNU Lesser General Public License.
//
//   The Free Software Foundation may publish revised and/or new versions
// of the GNU Lesser General Public License from time to time. Such new
// versions will be similar in spirit to the present version, but may
// differ in detail to address new problems or concerns.
//
//   Each version is given a distinguishing version number. If the
// Library as you received it specifies that a certain numbered version
// of the GNU Lesser General Public License "or any later version"
// applies to it, you have the option of following the terms and
// conditions either of that published version or of any later version
// published by the Free Software Foundation. If the Library as you
// received it does not specify a version number of the GNU Lesser
// General Public License, you may choose any version of the GNU Lesser
// General Public License ever published by the Free Software Foundation.
//
//   If the Library as you received it specifies that a proxy can decide
// whether future versions of the GNU Lesser General Public License shall
// apply, that proxy's public statement of acceptance of any version is
// permanent authorization for you to choose that version for the
// Library.

#include "word2number_zh_CN.h"

#include "../../core.h"
#include "../../word2number.h"

#include <errno.h>
#include <stdio.h>
#include <string.h>

struct number_system number_zh_CN[] = {
	{ u8"负", -2 },
	{ u8"点", -1 },
	{ u8"零", 0 },
	{ u8"一", 1 },
	{ u8"二", 2 },
	{ u8"三", 3 },
	{ u8"四", 4 },
	{ u8"五", 5 },
	{ u8"六", 6 },
	{ u8"七", 7 },
	{ u8"八", 8 },
	{ u8"九", 9 },
	{ u8"十", 10 },
	{ u8"百", 100 },
	{ u8"千", 1000 },
	{ u8"万", 10000 },
	{ u8"亿", 100000000 },
	{ u8"兆", 1000000000000 },
	{ u8"京", 10000000000000000 },
};

const size_t number_zh_CN_table_size = sizeof( number_zh_CN ) / sizeof( number_zh_CN[0] );

struct word2number_zh_CN_each_block_data
{
	long number[32];
	long data_index;
};

struct validate_word_block_data
{
	long long prev_char_number;
	int has_digit;
	int has_unit;
};

bool validate_word_block( size_t _, const char* chr, void* data )
{
	struct validate_word_block_data* block_data = data;
	const long long val = get_correspond_number( chr, number_zh_CN, number_zh_CN_table_size );
	if ( number_word_has( chr, number_zh_CN, number_zh_CN_table_size ) == false )
	{
		return false;
	}
	if ( val >= 10 )
	{
		if ( val < 10000 )
		{
			if ( block_data->prev_char_number > 10 && block_data->prev_char_number < 10000 )
			{
				return false;
			}
		}
		else
		{
			if ( block_data->prev_char_number >= 10000 )
			{
				return false;
			}
		}
	}
	if ( val >= 0 && val <= 9 )
	{
		block_data->has_digit = 1;
	}
	else if ( val >= 10 )
	{
		block_data->has_unit = 1;
	}
	block_data->prev_char_number = val;
	return true;
}

bool word2number_zh_CN_each_block( size_t _, const char* chr, void* data )
{
	struct word2number_zh_CN_each_block_data* block_data = data;
	block_data->number[block_data->data_index] = get_correspond_number( chr, number_zh_CN, number_zh_CN_table_size );
	block_data->data_index += 1;
	return true;
}

bool validate_word_zh_CN( const char* word )
{
	struct validate_word_block_data data = { .prev_char_number = 0, .has_digit = 0, .has_unit = 0 };
	return utf8_chr_each( word, &validate_word_block, &data );
}

long long word2number_zh_CN( const char* word )
{
	if ( validate_word_zh_CN( word ) == false )
	{
		TRACE( "input word error!(%s)\n", word );
		errno = EINVAL;
		return 1;
	}
	struct word2number_zh_CN_each_block_data data = { .data_index = 0 };
	utf8_chr_each( word, &word2number_zh_CN_each_block, &data );
	long long result = 0;
	long long large_temp = 0;
	long long temp = 0;
	long long large_unit = 0;
	bool is_negative = false;
	for ( size_t i = 0; i < data.data_index; i++ )
	{
		if ( data.number[i] == -2 )
		{
			if ( i == 0 )
			{
				is_negative = true;
			}
			else
			{
				TRACE( "input word error!(%s)\n", word );
				errno = EINVAL;
				return 1;
			}
		}
		if ( data.number[i] >= 10000 )
		{
			if ( temp == 0 )
			{
				temp = 1;
			}
			if ( large_unit != 0 )
			{
				large_temp += temp;
				large_temp *= data.number[i];
			}
			else
			{
				large_temp += temp * data.number[i];
			}
			result += large_temp;
			large_temp = 0;
			temp = 0;
			large_unit = data.number[i];
		}
		else if ( data.number[i] >= 10 )
		{
			if ( temp == 0 )
			{
				temp = 1;
			}

			temp *= data.number[i];
		}
		else if ( data.number[i] > 0 )
		{
			if ( temp > 10 )
			{
				if ( large_unit != 0 )
				{
					large_temp += temp;
				}
				else
				{
					result += temp;
				}

				temp = 0;
			}
			temp += data.number[i];
		}
	}
	result += large_temp + temp;
	return is_negative ? -result : result;
}

size_t calculate_required_size( long long number )
{
	size_t size = 0;

	if ( number < 0 )
	{
		size += 3; // 负号对应的"负"字占用3个字节
		number = -number;
	}

	int section = 0;
	while ( number > 0 )
	{
		int four_digits = number % 10000;
		number /= 10000;

		// 每四位数转换可能包括 4 个数字，最多 3 个单位，再加上可能的"万"或"亿"
		size += 4 * 3 + 3 * 3;

		section++;
	}

	return size;
}

char* number2word_zh_CN( long long number )
{
	return "test";
}

double word2numberf_zh_CN( const char* word )
{
	return 0;
}

char* number2wordf_zh_CN( double number )
{
	return 0;
}

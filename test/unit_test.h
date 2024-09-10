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

#pragma once

#ifdef __linux__
#include <sys/time.h>
#endif

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

extern int _utest_test_units_total;
extern int _utest_test_units_failed;
extern int _utest_test_units_passed;

extern int _utest_test_suite_total;
extern int _utest_test_suite_failed;
extern int _utest_test_suite_passed;

extern int _utest_test_closure_total;
extern int _utest_test_closure_failed;
extern int _utest_test_closure_passed;

extern char* _utest_current_test_unit_name;

extern int _utest_test_unit_return;
extern int _utest_test_repetition_count;

#ifdef __linux__
extern struct timeval _utest_test_start, _utest_test_end;
#define CURRENT_TIME( A ) gettimeofday( &A, NULL );
#define ELAPSED                                                                                                                  \
	(double)( ( 1000000 * ( _utest_test_end.tv_sec - _utest_test_start.tv_sec ) +                                                \
				( _utest_test_end.tv_usec - _utest_test_start.tv_usec ) ) /                                                      \
			  1000000.0 )
#else
extern struct timespec _utest_test_start, _utest_test_end;
#define CURRENT_TIME( A ) clock_gettime( CLOCK_MONOTONIC, &A );
#define ELAPSED                                                                                                                  \
	(double)( ( _utest_test_end.tv_sec - _utest_test_start.tv_sec ) +                                                            \
			  ( _utest_test_end.tv_nsec - _utest_test_start.tv_nsec ) / 1e9 )
#endif

#define EPSILON 1e-6

#define TEST_START( T, BLOCK )                                                                                                   \
	do                                                                                                                           \
	{                                                                                                                            \
		printf( "Tarting %s unit tests\n", T );                                                                                  \
		printf( "\n" );                                                                                                          \
		CURRENT_TIME( _utest_test_start );                                                                                       \
		BLOCK;                                                                                                                   \
		CURRENT_TIME( _utest_test_end );                                                                                         \
		printf( "\n" );                                                                                                          \
		printf( "\033[1mTest Suites:\033[0m \033[31m%d failed\033[0m, \033[32m%d passed\033[0m, %d total\n",                     \
				_utest_test_suite_failed, _utest_test_suite_passed, _utest_test_suite_total );                                   \
		printf( "\033[1mTest:\033[0m        \033[31m%d failed\033[0m, \033[32m%d passed\033[0m, %d total\n",                     \
				_utest_test_units_failed, _utest_test_units_passed, _utest_test_units_total );                                   \
		printf( "\033[1mTime:\033[0m        %.4f s\n", ELAPSED );                                                                \
		printf( "\nRan all test suites.\n" );                                                                                    \
		if ( _utest_test_units_failed == 0 )                                                                                     \
		{                                                                                                                        \
			return 0;                                                                                                            \
		}                                                                                                                        \
		else                                                                                                                     \
		{                                                                                                                        \
			return 1;                                                                                                            \
		}                                                                                                                        \
	}                                                                                                                            \
	while ( 0 )

#define RUN_TEST( T )                                                                                                            \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_current_test_unit_name = #T;                                                                                      \
		_utest_test_units_total += 1;                                                                                            \
		_utest_test_unit_return = 0;                                                                                             \
		int result = T();                                                                                                        \
		if ( result == 1 )                                                                                                       \
		{                                                                                                                        \
			_utest_test_units_failed += 1;                                                                                       \
		}                                                                                                                        \
		else                                                                                                                     \
		{                                                                                                                        \
			_utest_test_units_passed += 1;                                                                                       \
		}                                                                                                                        \
	}                                                                                                                            \
	while ( 0 )

#define UNIT_START printf( "Runs: %s\n", __FILE__ );
#define UNIT_END return _utest_test_unit_return;

#define DESCRIBE( NAME, BLOCK )                                                                                                  \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_current_test_unit_name = NAME;                                                                                    \
		BLOCK;                                                                                                                   \
	}                                                                                                                            \
	while ( 0 )

// Creates a test closure
#define UT_IT( DESC, BLOCK )                                                                                                     \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_test_suite_total += 1;                                                                                            \
		for ( int i = 0; i < _utest_test_repetition_count; i++ )                                                                 \
		{                                                                                                                        \
			_utest_test_closure_total = 0;                                                                                       \
			_utest_test_closure_failed = 0;                                                                                      \
			_utest_test_closure_passed = 0;                                                                                      \
			BLOCK;                                                                                                               \
			if ( _utest_test_closure_failed > 0 )                                                                                \
			{                                                                                                                    \
				break;                                                                                                           \
			}                                                                                                                    \
		}                                                                                                                        \
		if ( _utest_test_closure_failed > 0 )                                                                                    \
		{                                                                                                                        \
			_utest_test_suite_failed += 1;                                                                                       \
			printf( "  \033[31m● %s > %s\033[0m\n", _utest_current_test_unit_name, DESC );                                      \
			_utest_test_unit_return = 1;                                                                                         \
		}                                                                                                                        \
		else                                                                                                                     \
		{                                                                                                                        \
			_utest_test_suite_passed += 1;                                                                                       \
		}                                                                                                                        \
	}                                                                                                                            \
	while ( 0 )

#define EXPECT_TRUE( C )                                                                                                         \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_test_closure_total += 1;                                                                                          \
		if ( ( C ) == 0 )                                                                                                        \
		{                                                                                                                        \
			_utest_test_closure_failed += 1;                                                                                     \
			printf( "  \033[31m%s(%d):\n    '" #C "' not true.\033[0m\n", __FILE__, __LINE__ );                                  \
		}                                                                                                                        \
		_utest_test_closure_passed += 1;                                                                                         \
	}                                                                                                                            \
	while ( 0 )

#define EXPECT_FALSE( C )                                                                                                        \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_test_closure_total += 1;                                                                                          \
		if ( ( C ) != 0 )                                                                                                        \
		{                                                                                                                        \
			_utest_test_closure_failed += 1;                                                                                     \
			printf( "  \033[31m%s(%d):\n    '" #C "' not false.\033[0m\n", __FILE__, __LINE__ );                                 \
		}                                                                                                                        \
		_utest_test_closure_passed += 1;                                                                                         \
	}                                                                                                                            \
	while ( 0 )

#define EXPECT_EQUAL( A, B )                                                                                                     \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_test_closure_total += 1;                                                                                          \
		if ( ( A ) != ( B ) )                                                                                                    \
		{                                                                                                                        \
			_utest_test_closure_failed += 1;                                                                                     \
			printf( "  \033[31m%s(%d):\n    " #A " != " #B " (actual: %lld, %lld).\033[0m\n\n", __FILE__, __LINE__,              \
					(long long)( A ), (long long)( B ) );                                                                        \
		}                                                                                                                        \
		_utest_test_closure_passed += 1;                                                                                         \
	}                                                                                                                            \
	while ( 0 )

#define EXPECT_EQUAL_STR( A, B )                                                                                                 \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_test_closure_total += 1;                                                                                          \
		if ( strcmp( A, B ) != 0 )                                                                                               \
		{                                                                                                                        \
			_utest_test_closure_failed += 1;                                                                                     \
			printf( "  \033[31m%s(%d):\n    " #A " != " #B ". Actual: %s(size: %lu), %s(size: %lu).\033[0m\n\n", __FILE__,       \
					__LINE__, (char*)( A ), strlen( A ), (char*)( B ), strlen( B ) );                                            \
		}                                                                                                                        \
		_utest_test_closure_passed += 1;                                                                                         \
	}                                                                                                                            \
	while ( 0 )

#define EXPECT_EQUAL_INT( A, B )                                                                                                 \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_test_closure_total += 1;                                                                                          \
		if ( ( A ) != ( B ) )                                                                                                    \
		{                                                                                                                        \
			_utest_test_closure_failed += 1;                                                                                     \
			printf( "  \033[31m%s(%d):\n    " #A " != " #B " (actual: %d, %d).\033[0m\n\n", __FILE__, __LINE__, (int)( A ),      \
					(int)( B ) );                                                                                                \
		}                                                                                                                        \
		_utest_test_closure_passed += 1;                                                                                         \
	}                                                                                                                            \
	while ( 0 )

#define EXPECT_EQUAL_FLOAT( A, B )                                                                                               \
	do                                                                                                                           \
	{                                                                                                                            \
		_utest_test_closure_total += 1;                                                                                          \
		if ( fabs( A - B ) > EPSILON )                                                                                           \
		{                                                                                                                        \
			_utest_test_closure_failed += 1;                                                                                     \
			printf( "  \033[31m%s(%d):\n    " #A " != " #B " (actual: %f, %f).\033[0m\n\n", __FILE__, __LINE__, (float)( A ),    \
					(float)( B ) );                                                                                              \
		}                                                                                                                        \
		_utest_test_closure_passed += 1;                                                                                         \
	}                                                                                                                            \
	while ( 0 )

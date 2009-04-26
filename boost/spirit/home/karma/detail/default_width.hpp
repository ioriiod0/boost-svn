//  Copyright (c) 2001-2009 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_SPIRIT_KARMA_DEFAULT_WIDTH_APR_07_2009_0912PM)
#define BOOST_SPIRIT_KARMA_DEFAULT_WIDTH_APR_07_2009_0912PM

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once      // MS compatible compilers support #pragma once
#endif

///////////////////////////////////////////////////////////////////////////////
//
//  The BOOST_KARMA_DEFAULT_FIELD_LENGTH specifies the default field length
//  to be used for padding.
//
///////////////////////////////////////////////////////////////////////////////
#if !defined(BOOST_KARMA_DEFAULT_FIELD_LENGTH)
#define BOOST_KARMA_DEFAULT_FIELD_LENGTH 10
#endif

///////////////////////////////////////////////////////////////////////////////
//
//  The BOOST_KARMA_DEFAULT_FIELD_MAXWIDTH specifies the default maximal field 
//  length to be used for the maxwidth directive.
//
///////////////////////////////////////////////////////////////////////////////
#if !defined(BOOST_KARMA_DEFAULT_FIELD_MAXWIDTH)
#define BOOST_KARMA_DEFAULT_FIELD_MAXWIDTH 10
#endif

///////////////////////////////////////////////////////////////////////////////
namespace boost { namespace spirit { namespace karma { namespace detail
{
    ///////////////////////////////////////////////////////////////////////////
    struct default_width
    {
        operator int() const
        {
            return BOOST_KARMA_DEFAULT_FIELD_LENGTH;
        }
    };

    ///////////////////////////////////////////////////////////////////////////
    struct default_max_width
    {
        operator int() const
        {
            return BOOST_KARMA_DEFAULT_FIELD_MAXWIDTH;
        }
    };

}}}}

#endif

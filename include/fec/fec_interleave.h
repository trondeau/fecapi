/* -*- c++ -*- */
/*
 * Copyright 2013-2014 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_FEC_INTERLEAVE_H
#define INCLUDED_FEC_INTERLEAVE_H

#include <fec/fec_api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace fec {

    /*!
     * \brief interleave N coding blocks to a single output
     */
    class FEC_API interleave : virtual public block
    {
    public:
      // gr::fec::interleave::sptr
      typedef boost::shared_ptr<interleave> sptr;

      static sptr make(size_t itemsize, unsigned int blocksize);
    };

  } /* namespace fec */
} /* namespace gr */

#endif /* INCLUDED_FEC_INTERLEAVE_H */

/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_RADAR_EST_V_CW_H
#define INCLUDED_RADAR_EST_V_CW_H

#include <radar/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace radar {

    /*!
     * \brief <+description of block+>
     * \ingroup radar
     *
     */
    class RADAR_API est_v_cw : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<est_v_cw> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of radar::est_v_cw.
       *
       * To avoid accidental use of raw pointers, radar::est_v_cw's
       * constructor is in a private implementation
       * class. radar::est_v_cw::make is the public interface for
       * creating new instances.
       */
      static sptr make(float center_freq);
    };

  } // namespace radar
} // namespace gr

#endif /* INCLUDED_RADAR_EST_V_CW_H */


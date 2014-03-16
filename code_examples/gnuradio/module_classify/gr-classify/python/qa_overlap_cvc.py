#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# Copyright 2013 <+YOU OR YOUR COMPANY+>.
# 
# This is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
# 
# This software is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this software; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.
# 

from gnuradio import gr, gr_unittest
from gnuradio import blocks
import classify_swig as classify

class qa_overlap_cvc (gr_unittest.TestCase):

    def setUp (self):
        self.tb = gr.top_block ()

    def tearDown (self):
        self.tb = None

    def test_001_t (self):
        # set up fg
	in_data = (1,3,2,4,4,3);
	src = blocks.vector_source_c(in_data);
	snk = blocks.vector_sink_c(3);
	test = classify.overlap_cvc(3,2);
	self.tb.connect(src,test,snk);
        self.tb.run ()
        # check data
	ref_data = (1,3,0,2,4,1,4,3,2)
	self.assertTupleEqual(snk.data(),ref_data)
	#print snk.data()

if __name__ == '__main__':
    gr_unittest.run(qa_overlap_cvc, "qa_overlap_cvc.xml")

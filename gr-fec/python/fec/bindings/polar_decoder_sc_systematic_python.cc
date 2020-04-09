/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fec/polar_decoder_sc_systematic.h>
// pydoc.h is automatically generated in the build directory
#include <polar_decoder_sc_systematic_pydoc.h>

void bind_polar_decoder_sc_systematic(py::module& m)
{




        py::module m_code = m.def_submodule("code");

    using polar_decoder_sc_systematic    = ::gr::fec::code::polar_decoder_sc_systematic;


    py::class_<polar_decoder_sc_systematic, gr::fec::code::polar_decoder_common,
        std::shared_ptr<polar_decoder_sc_systematic>>(m_code, "polar_decoder_sc_systematic", D(code,polar_decoder_sc_systematic))

        .def_static("make",&polar_decoder_sc_systematic::make,
           py::arg("block_size"),
           py::arg("num_info_bits"),
           py::arg("frozen_bit_positions"),
           D(code,polar_decoder_sc_systematic,make)
        )
        




        .def("generic_work",&polar_decoder_sc_systematic::generic_work,
            py::arg("in_buffer"),
            py::arg("out_buffer"),
            D(code,polar_decoder_sc_systematic,generic_work)
        )

        ;






}








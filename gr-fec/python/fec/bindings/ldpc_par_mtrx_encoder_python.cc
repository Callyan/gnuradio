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

#include <gnuradio/fec/ldpc_par_mtrx_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <ldpc_par_mtrx_encoder_pydoc.h>

void bind_ldpc_par_mtrx_encoder(py::module& m)
{




        py::module m_code = m.def_submodule("code");

    using ldpc_par_mtrx_encoder    = ::gr::fec::code::ldpc_par_mtrx_encoder;


    py::class_<ldpc_par_mtrx_encoder, gr::fec::generic_encoder,
        std::shared_ptr<ldpc_par_mtrx_encoder>>(m_code, "ldpc_par_mtrx_encoder", D(code,ldpc_par_mtrx_encoder))

        .def_static("make",&ldpc_par_mtrx_encoder::make,
           py::arg("alist_file"),
           py::arg("gap") = 0,
           D(code,ldpc_par_mtrx_encoder,make)
        )
        




        .def_static("make_H",&ldpc_par_mtrx_encoder::make_H,
            py::arg("H_obj"),
            D(code,ldpc_par_mtrx_encoder,make_H)
        )


        .def("rate",&ldpc_par_mtrx_encoder::rate,
            D(code,ldpc_par_mtrx_encoder,rate)
        )


        .def("set_frame_size",&ldpc_par_mtrx_encoder::set_frame_size,
            py::arg("frame_size"),
            D(code,ldpc_par_mtrx_encoder,set_frame_size)
        )


        .def("get_output_size",&ldpc_par_mtrx_encoder::get_output_size,
            D(code,ldpc_par_mtrx_encoder,get_output_size)
        )


        .def("get_input_size",&ldpc_par_mtrx_encoder::get_input_size,
            D(code,ldpc_par_mtrx_encoder,get_input_size)
        )

        ;






}








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

#include <gnuradio/fec/encoder.h>
// pydoc.h is automatically generated in the build directory
#include <encoder_pydoc.h>

void bind_encoder(py::module& m)
{

    using encoder    = ::gr::fec::encoder;


    py::class_<encoder, gr::block, gr::basic_block,
        std::shared_ptr<encoder>>(m, "encoder", D(encoder))

        .def(py::init(&encoder::make),
           py::arg("my_encoder"),
           py::arg("input_item_size"),
           py::arg("output_item_size"),
           D(encoder,make)
        )
        




        .def("general_work",&encoder::general_work,
            py::arg("noutput_items"),
            py::arg("ninput_items"),
            py::arg("input_items"),
            py::arg("output_items"),
            D(encoder,general_work)
        )


        .def("fixed_rate_ninput_to_noutput",&encoder::fixed_rate_ninput_to_noutput,
            py::arg("ninput"),
            D(encoder,fixed_rate_ninput_to_noutput)
        )


        .def("fixed_rate_noutput_to_ninput",&encoder::fixed_rate_noutput_to_ninput,
            py::arg("noutput"),
            D(encoder,fixed_rate_noutput_to_ninput)
        )


        .def("forecast",&encoder::forecast,
            py::arg("noutput_items"),
            py::arg("ninput_items_required"),
            D(encoder,forecast)
        )

        ;




}








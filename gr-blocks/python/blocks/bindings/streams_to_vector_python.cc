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

#include <gnuradio/blocks/streams_to_vector.h>

void bind_streams_to_vector(py::module& m)
{
    using streams_to_vector    = gr::blocks::streams_to_vector;


    py::class_<streams_to_vector,gr::sync_block,
        std::shared_ptr<streams_to_vector>>(m, "streams_to_vector")

        .def(py::init(&streams_to_vector::make),
           py::arg("itemsize"), 
           py::arg("nstreams") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<streams_to_vector> p){
            return p->to_basic_block();
        })
        ;


} 

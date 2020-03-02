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

#include <gnuradio/blocks/annotator_1to1.h>

void bind_annotator_1to1(py::module& m)
{
    using annotator_1to1    = gr::blocks::annotator_1to1;


    py::class_<annotator_1to1,gr::sync_block,
        std::shared_ptr<annotator_1to1>>(m, "annotator_1to1")

        .def(py::init(&annotator_1to1::make),
           py::arg("when"), 
           py::arg("sizeof_stream_item") 
        )
        

        .def("data",&annotator_1to1::data)
        .def("to_basic_block",[](std::shared_ptr<annotator_1to1> p){
            return p->to_basic_block();
        })
        ;


} 

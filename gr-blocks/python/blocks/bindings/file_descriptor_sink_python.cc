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

#include <gnuradio/blocks/file_descriptor_sink.h>

void bind_file_descriptor_sink(py::module& m)
{
    using file_descriptor_sink    = gr::blocks::file_descriptor_sink;


    py::class_<file_descriptor_sink,gr::sync_block,
        std::shared_ptr<file_descriptor_sink>>(m, "file_descriptor_sink")

        .def(py::init(&file_descriptor_sink::make),
           py::arg("itemsize"), 
           py::arg("fd") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<file_descriptor_sink> p){
            return p->to_basic_block();
        })
        ;


} 

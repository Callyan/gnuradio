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

#include <gnuradio/blocks/file_descriptor_source.h>

void bind_file_descriptor_source(py::module& m)
{
    using file_descriptor_source    = gr::blocks::file_descriptor_source;


    py::class_<file_descriptor_source,gr::sync_block,
        std::shared_ptr<file_descriptor_source>>(m, "file_descriptor_source")

        .def(py::init(&file_descriptor_source::make),
           py::arg("itemsize"), 
           py::arg("fd"), 
           py::arg("repeat") = false 
        )
        

        .def("to_basic_block",[](std::shared_ptr<file_descriptor_source> p){
            return p->to_basic_block();
        })
        ;


} 

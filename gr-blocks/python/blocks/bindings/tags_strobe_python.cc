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

#include <gnuradio/blocks/tags_strobe.h>

void bind_tags_strobe(py::module& m)
{
    using tags_strobe    = gr::blocks::tags_strobe;


    py::class_<tags_strobe,gr::sync_block,
        std::shared_ptr<tags_strobe>>(m, "tags_strobe")

        .def(py::init(&tags_strobe::make),
           py::arg("sizeof_stream_item"), 
           py::arg("value"), 
           py::arg("nsamps"), 
           py::arg("key") = pmt::intern("strobe") 
        )
        

        .def("set_value",&tags_strobe::set_value,
            py::arg("value") 
        )
        .def("set_key",&tags_strobe::set_key,
            py::arg("key") 
        )
        .def("value",&tags_strobe::value)
        .def("key",&tags_strobe::key)
        .def("set_nsamps",&tags_strobe::set_nsamps,
            py::arg("nsamps") 
        )
        .def("nsamps",&tags_strobe::nsamps)
        .def("to_basic_block",[](std::shared_ptr<tags_strobe> p){
            return p->to_basic_block();
        })
        ;


} 

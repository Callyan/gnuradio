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

#include <gnuradio/blocks/vco_c.h>

void bind_vco_c(py::module& m)
{
    using vco_c    = gr::blocks::vco_c;


    py::class_<vco_c,gr::sync_block,
        std::shared_ptr<vco_c>>(m, "vco_c")

        .def(py::init(&vco_c::make),
           py::arg("sampling_rate"), 
           py::arg("sensitivity"), 
           py::arg("amplitude") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<vco_c> p){
            return p->to_basic_block();
        })
        ;


} 

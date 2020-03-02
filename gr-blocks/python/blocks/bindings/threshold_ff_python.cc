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

#include <gnuradio/blocks/threshold_ff.h>

void bind_threshold_ff(py::module& m)
{
    using threshold_ff    = gr::blocks::threshold_ff;


    py::class_<threshold_ff,gr::sync_block,
        std::shared_ptr<threshold_ff>>(m, "threshold_ff")

        .def(py::init(&threshold_ff::make),
           py::arg("lo"), 
           py::arg("hi"), 
           py::arg("initial_state") = 0 
        )
        

        .def("lo",&threshold_ff::lo)
        .def("set_lo",&threshold_ff::set_lo,
            py::arg("lo") 
        )
        .def("hi",&threshold_ff::hi)
        .def("set_hi",&threshold_ff::set_hi,
            py::arg("hi") 
        )
        .def("last_state",&threshold_ff::last_state)
        .def("set_last_state",&threshold_ff::set_last_state,
            py::arg("last_state") 
        )
        .def("to_basic_block",[](std::shared_ptr<threshold_ff> p){
            return p->to_basic_block();
        })
        ;


} 

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

#include <gnuradio/blocks/random_pdu.h>

void bind_random_pdu(py::module& m)
{
    using random_pdu    = gr::blocks::random_pdu;


    py::class_<random_pdu,gr::block,
        std::shared_ptr<random_pdu>>(m, "random_pdu")

        .def(py::init(&random_pdu::make),
           py::arg("mintime"), 
           py::arg("maxtime"), 
           py::arg("byte_mask") = 255, 
           py::arg("length_modulo") = 1 
        )
        

        .def("to_basic_block",[](std::shared_ptr<random_pdu> p){
            return p->to_basic_block();
        })
        ;


} 

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

#include <gnuradio/blocks/peak_detector.h>

template<typename T>
void bind_peak_detector_template(py::module& m, const char *classname)
{
    using peak_detector      = gr::blocks::peak_detector<T>;

    py::class_<peak_detector, gr::sync_block, std::shared_ptr<peak_detector>>(m, classname)
        .def(py::init(&gr::blocks::peak_detector<T>::make),
            py::arg("threshold_factor_rise") = .25,
            py::arg("threshold_factor_fall") = .40,
            py::arg("look_ahead") = 10,
            py::arg("alpha") = .001
        )

        .def("set_threshold_factor_rise",&peak_detector::set_threshold_factor_rise,
            py::arg("thr")
        )
        .def("set_threshold_factor_fall",&peak_detector::set_threshold_factor_fall,
            py::arg("thr")
        )
        .def("set_look_ahead",&peak_detector::set_look_ahead,
            py::arg("look")
        )
        .def("set_alpha",&peak_detector::set_alpha,
            py::arg("alpha")
        )
        .def("threshold_factor_rise",&peak_detector::threshold_factor_rise)
        .def("threshold_factor_fall",&peak_detector::threshold_factor_fall)
        .def("look_ahead",&peak_detector::look_ahead)
        .def("alpha",&peak_detector::alpha)                                               
        ;
} 

void bind_peak_detector(py::module& m)
{
    bind_peak_detector_template<std::int16_t>(m,"peak_detector_sb");
    bind_peak_detector_template<std::int32_t>(m,"peak_detector_ib");
    bind_peak_detector_template<float>(m,"peak_detector_fb");
} 


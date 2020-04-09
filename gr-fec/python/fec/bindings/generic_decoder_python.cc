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

#include <gnuradio/fec/generic_decoder.h>
// pydoc.h is automatically generated in the build directory
#include <generic_decoder_pydoc.h>

void bind_generic_decoder(py::module& m)
{

    using generic_decoder    = ::gr::fec::generic_decoder;


    py::class_<generic_decoder,
        std::shared_ptr<generic_decoder>>(m, "generic_decoder", D(generic_decoder))

        // .def(py::init<>(),D(generic_decoder,generic_decoder,0))
        // .def(py::init<std::string>(),           py::arg("name"),
        //    D(generic_decoder,generic_decoder,1)
        // )
        // .def(py::init<gr::fec::generic_decoder const &>(),           py::arg("arg0"),
        //    D(generic_decoder,generic_decoder,2)
        // )


        .def("generic_work",&generic_decoder::generic_work,
            py::arg("inbuffer"),
            py::arg("outbuffer"),
            D(generic_decoder,generic_work)
        )


        .def("unique_id",&generic_decoder::unique_id,
            D(generic_decoder,unique_id)
        )


        .def("alias",&generic_decoder::alias,
            D(generic_decoder,alias)
        )


        .def("rate",&generic_decoder::rate,
            D(generic_decoder,rate)
        )


        .def("get_input_size",&generic_decoder::get_input_size,
            D(generic_decoder,get_input_size)
        )


        .def("get_output_size",&generic_decoder::get_output_size,
            D(generic_decoder,get_output_size)
        )


        .def("get_history",&generic_decoder::get_history,
            D(generic_decoder,get_history)
        )


        .def("get_shift",&generic_decoder::get_shift,
            D(generic_decoder,get_shift)
        )


        .def("get_input_item_size",&generic_decoder::get_input_item_size,
            D(generic_decoder,get_input_item_size)
        )


        .def("get_output_item_size",&generic_decoder::get_output_item_size,
            D(generic_decoder,get_output_item_size)
        )


        .def("get_input_conversion",&generic_decoder::get_input_conversion,
            D(generic_decoder,get_input_conversion)
        )


        .def("get_output_conversion",&generic_decoder::get_output_conversion,
            D(generic_decoder,get_output_conversion)
        )


        .def("set_frame_size",&generic_decoder::set_frame_size,
            py::arg("frame_size"),
            D(generic_decoder,set_frame_size)
        )


        .def("get_iterations",&generic_decoder::get_iterations,
            D(generic_decoder,get_iterations)
        )

        ;



        m.def("get_decoder_output_size",&::gr::fec::get_decoder_output_size,
            py::arg("my_decoder"),
            D(get_decoder_output_size)
        );


        m.def("get_decoder_input_size",&::gr::fec::get_decoder_input_size,
            py::arg("my_decoder"),
            D(get_decoder_input_size)
        );


        m.def("get_shift",&::gr::fec::get_shift,
            py::arg("my_decoder"),
            D(get_shift)
        );


        m.def("get_history",&::gr::fec::get_history,
            py::arg("my_decoder"),
            D(get_history)
        );


        m.def("get_decoder_input_item_size",&::gr::fec::get_decoder_input_item_size,
            py::arg("my_decoder"),
            D(get_decoder_input_item_size)
        );


        m.def("get_decoder_output_item_size",&::gr::fec::get_decoder_output_item_size,
            py::arg("my_decoder"),
            D(get_decoder_output_item_size)
        );


        m.def("get_decoder_input_conversion",&::gr::fec::get_decoder_input_conversion,
            py::arg("my_decoder"),
            D(get_decoder_input_conversion)
        );


        m.def("get_decoder_output_conversion",&::gr::fec::get_decoder_output_conversion,
            py::arg("my_decoder"),
            D(get_decoder_output_conversion)
        );



}








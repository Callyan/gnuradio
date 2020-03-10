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

#include <pmt/pmt.h>

void bind_pmt(py::module& m)
{
    using pmt_base    = pmt::pmt_base;
    // using exception    = pmt::exception;
    // using wrong_type    = pmt::wrong_type;
    // using out_of_range    = pmt::out_of_range;
    // using notimplemented    = pmt::notimplemented;
    using comparator    = pmt::comparator;

    py::class_<pmt_base,
        std::shared_ptr<pmt_base>>(m, "pmt_base")

        .def(py::init<>())

        .def("is_bool",&pmt_base::is_bool)
        .def("is_symbol",&pmt_base::is_symbol)
        .def("is_number",&pmt_base::is_number)
        .def("is_integer",&pmt_base::is_integer)
        .def("is_uint64",&pmt_base::is_uint64)
        .def("is_real",&pmt_base::is_real)
        .def("is_complex",&pmt_base::is_complex)
        .def("is_null",&pmt_base::is_null)
        .def("is_pair",&pmt_base::is_pair)
        .def("is_tuple",&pmt_base::is_tuple)
        .def("is_vector",&pmt_base::is_vector)
        .def("is_dict",&pmt_base::is_dict)
        .def("is_any",&pmt_base::is_any)
        .def("is_uniform_vector",&pmt_base::is_uniform_vector)
        .def("is_u8vector",&pmt_base::is_u8vector)
        .def("is_s8vector",&pmt_base::is_s8vector)
        .def("is_u16vector",&pmt_base::is_u16vector)
        .def("is_s16vector",&pmt_base::is_s16vector)
        .def("is_u32vector",&pmt_base::is_u32vector)
        .def("is_s32vector",&pmt_base::is_s32vector)
        .def("is_u64vector",&pmt_base::is_u64vector)
        .def("is_s64vector",&pmt_base::is_s64vector)
        .def("is_f32vector",&pmt_base::is_f32vector)
        .def("is_f64vector",&pmt_base::is_f64vector)
        .def("is_c32vector",&pmt_base::is_c32vector)
        .def("is_c64vector",&pmt_base::is_c64vector)
        ;


    // py::class_<exception,std::logic_error,
    //     std::shared_ptr<exception>>(m, "exception")

    //     .def(py::init<std::string const &,pmt::pmt_t>(),           py::arg("msg"), 
    //        py::arg("obj") 
    //     )
    //     .def(py::init<pmt::exception const &>(),           py::arg("arg0") 
    //     )

    //     ;


    // py::class_<wrong_type,pmt::exception,
    //     std::shared_ptr<wrong_type>>(m, "wrong_type")

    //     .def(py::init<std::string const &,pmt::pmt_t>(),           py::arg("msg"), 
    //        py::arg("obj") 
    //     )
    //     .def(py::init<pmt::wrong_type const &>(),           py::arg("arg0") 
    //     )

    //     ;


    // py::class_<out_of_range,pmt::exception,
    //     std::shared_ptr<out_of_range>>(m, "out_of_range")

    //     .def(py::init<std::string const &,pmt::pmt_t>(),           py::arg("msg"), 
    //        py::arg("obj") 
    //     )
    //     .def(py::init<pmt::out_of_range const &>(),           py::arg("arg0") 
    //     )

    //     ;


    // py::class_<notimplemented,pmt::exception,
    //     std::shared_ptr<notimplemented>>(m, "notimplemented")

    //     .def(py::init<std::string const &,pmt::pmt_t>(),           py::arg("msg"), 
    //        py::arg("obj") 
    //     )
    //     .def(py::init<pmt::notimplemented const &>(),           py::arg("arg0") 
    //     )

    //     ;


    py::class_<comparator,
        std::shared_ptr<comparator>>(m, "comparator")

        .def(py::init<>())
        .def(py::init<pmt::comparator const &>(),           py::arg("arg0") 
        )

        ;


    m.def("get_PMT_NIL",&pmt::get_PMT_NIL);
    m.def("get_PMT_T",&pmt::get_PMT_T);
    m.def("get_PMT_F",&pmt::get_PMT_F);
    m.def("get_PMT_EOF",&pmt::get_PMT_EOF);
    m.def("is_bool",&pmt::is_bool,
        py::arg("obj") 
    );
    m.def("is_true",&pmt::is_true,
        py::arg("obj") 
    );
    m.def("is_false",&pmt::is_false,
        py::arg("obj") 
    );
    m.def("from_bool",&pmt::from_bool,
        py::arg("val") 
    );
    m.def("to_bool",&pmt::to_bool,
        py::arg("val") 
    );
    m.def("is_symbol",&pmt::is_symbol,
        py::arg("obj") 
    );
    m.def("string_to_symbol",&pmt::string_to_symbol,
        py::arg("s") 
    );
    m.def("intern",&pmt::intern,
        py::arg("s") 
    );
    m.def("symbol_to_string",&pmt::symbol_to_string,
        py::arg("sym") 
    );
    m.def("is_number",&pmt::is_number,
        py::arg("obj") 
    );
    m.def("is_integer",&pmt::is_integer,
        py::arg("x") 
    );
    m.def("from_long",&pmt::from_long,
        py::arg("x") 
    );
    m.def("to_long",&pmt::to_long,
        py::arg("x") 
    );
    m.def("is_uint64",&pmt::is_uint64,
        py::arg("x") 
    );
    m.def("from_uint64",&pmt::from_uint64,
        py::arg("x") 
    );
    m.def("to_uint64",&pmt::to_uint64,
        py::arg("x") 
    );
    m.def("is_real",&pmt::is_real,
        py::arg("obj") 
    );
    m.def("from_double",&pmt::from_double,
        py::arg("x") 
    );
    m.def("from_float",&pmt::from_float,
        py::arg("x") 
    );
    m.def("to_double",&pmt::to_double,
        py::arg("x") 
    );
    m.def("to_float",&pmt::to_float,
        py::arg("x") 
    );
    m.def("is_complex",&pmt::is_complex,
        py::arg("obj") 
    );
    m.def("make_rectangular",&pmt::make_rectangular,
        py::arg("re"), 
        py::arg("im") 
    );
    m.def("from_complex",(pmt::pmt_t (*)(double, double))&pmt::from_complex,
        py::arg("re"), 
        py::arg("im") 
    );
    m.def("from_complex",(pmt::pmt_t (*)(std::complex<double> const &))&pmt::from_complex,
        py::arg("z") 
    );
    m.def("pmt_from_complex",(pmt::pmt_t (*)(double, double))&pmt::pmt_from_complex,
        py::arg("re"), 
        py::arg("im") 
    );
    m.def("pmt_from_complex",(pmt::pmt_t (*)(std::complex<double> const &))&pmt::pmt_from_complex,
        py::arg("z") 
    );
    m.def("to_complex",&pmt::to_complex,
        py::arg("z") 
    );
    m.def("is_null",&pmt::is_null,
        py::arg("x") 
    );
    m.def("is_pair",&pmt::is_pair,
        py::arg("obj") 
    );
    m.def("cons",&pmt::cons,
        py::arg("x"), 
        py::arg("y") 
    );
    m.def("car",&pmt::car,
        py::arg("pair") 
    );
    m.def("cdr",&pmt::cdr,
        py::arg("pair") 
    );
    m.def("set_car",&pmt::set_car,
        py::arg("pair"), 
        py::arg("value") 
    );
    m.def("set_cdr",&pmt::set_cdr,
        py::arg("pair"), 
        py::arg("value") 
    );
    m.def("caar",&pmt::caar,
        py::arg("pair") 
    );
    m.def("cadr",&pmt::cadr,
        py::arg("pair") 
    );
    m.def("cdar",&pmt::cdar,
        py::arg("pair") 
    );
    m.def("cddr",&pmt::cddr,
        py::arg("pair") 
    );
    m.def("caddr",&pmt::caddr,
        py::arg("pair") 
    );
    m.def("cadddr",&pmt::cadddr,
        py::arg("pair") 
    );
    m.def("is_tuple",&pmt::is_tuple,
        py::arg("x") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)())&pmt::make_tuple);
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2"), 
        py::arg("e3") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2"), 
        py::arg("e3"), 
        py::arg("e4") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2"), 
        py::arg("e3"), 
        py::arg("e4"), 
        py::arg("e5") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2"), 
        py::arg("e3"), 
        py::arg("e4"), 
        py::arg("e5"), 
        py::arg("e6") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2"), 
        py::arg("e3"), 
        py::arg("e4"), 
        py::arg("e5"), 
        py::arg("e6"), 
        py::arg("e7") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2"), 
        py::arg("e3"), 
        py::arg("e4"), 
        py::arg("e5"), 
        py::arg("e6"), 
        py::arg("e7"), 
        py::arg("e8") 
    );
    m.def("make_tuple",(pmt::pmt_t (*)(pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &, pmt::pmt_t const &))&pmt::make_tuple,
        py::arg("e0"), 
        py::arg("e1"), 
        py::arg("e2"), 
        py::arg("e3"), 
        py::arg("e4"), 
        py::arg("e5"), 
        py::arg("e6"), 
        py::arg("e7"), 
        py::arg("e8"), 
        py::arg("e9") 
    );
    m.def("to_tuple",&pmt::to_tuple,
        py::arg("x") 
    );
    m.def("tuple_ref",&pmt::tuple_ref,
        py::arg("tuple"), 
        py::arg("k") 
    );
    m.def("is_vector",&pmt::is_vector,
        py::arg("x") 
    );
    m.def("make_vector",&pmt::make_vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("vector_ref",&pmt::vector_ref,
        py::arg("vector"), 
        py::arg("k") 
    );
    m.def("vector_set",&pmt::vector_set,
        py::arg("vector"), 
        py::arg("k"), 
        py::arg("obj") 
    );
    m.def("vector_fill",&pmt::vector_fill,
        py::arg("vector"), 
        py::arg("fill") 
    );
    m.def("is_blob",&pmt::is_blob,
        py::arg("x") 
    );
    m.def("make_blob",&pmt::make_blob,
        py::arg("buf"), 
        py::arg("len") 
    );
    m.def("blob_data",&pmt::blob_data,
        py::arg("blob") 
    );
    m.def("blob_length",&pmt::blob_length,
        py::arg("blob") 
    );
    m.def("is_uniform_vector",&pmt::is_uniform_vector,
        py::arg("x") 
    );
    m.def("is_u8vector",&pmt::is_u8vector,
        py::arg("x") 
    );
    m.def("is_s8vector",&pmt::is_s8vector,
        py::arg("x") 
    );
    m.def("is_u16vector",&pmt::is_u16vector,
        py::arg("x") 
    );
    m.def("is_s16vector",&pmt::is_s16vector,
        py::arg("x") 
    );
    m.def("is_u32vector",&pmt::is_u32vector,
        py::arg("x") 
    );
    m.def("is_s32vector",&pmt::is_s32vector,
        py::arg("x") 
    );
    m.def("is_u64vector",&pmt::is_u64vector,
        py::arg("x") 
    );
    m.def("is_s64vector",&pmt::is_s64vector,
        py::arg("x") 
    );
    m.def("is_f32vector",&pmt::is_f32vector,
        py::arg("x") 
    );
    m.def("is_f64vector",&pmt::is_f64vector,
        py::arg("x") 
    );
    m.def("is_c32vector",&pmt::is_c32vector,
        py::arg("x") 
    );
    m.def("is_c64vector",&pmt::is_c64vector,
        py::arg("x") 
    );
    m.def("uniform_vector_itemsize",&pmt::uniform_vector_itemsize,
        py::arg("x") 
    );
    m.def("make_u8vector",&pmt::make_u8vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_s8vector",&pmt::make_s8vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_u16vector",&pmt::make_u16vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_s16vector",&pmt::make_s16vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_u32vector",&pmt::make_u32vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_s32vector",&pmt::make_s32vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_u64vector",&pmt::make_u64vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_s64vector",&pmt::make_s64vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_f32vector",&pmt::make_f32vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_f64vector",&pmt::make_f64vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_c32vector",&pmt::make_c32vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("make_c64vector",&pmt::make_c64vector,
        py::arg("k"), 
        py::arg("fill") 
    );
    m.def("init_u8vector",(pmt::pmt_t (*)(size_t, uint8_t const *))&pmt::init_u8vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_u8vector",(pmt::pmt_t (*)(size_t, std::vector<unsigned char, std::allocator<unsigned char> > const &))&pmt::init_u8vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s8vector",(pmt::pmt_t (*)(size_t, int8_t const *))&pmt::init_s8vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s8vector",(pmt::pmt_t (*)(size_t, std::vector<signed char, std::allocator<signed char> > const &))&pmt::init_s8vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_u16vector",(pmt::pmt_t (*)(size_t, uint16_t const *))&pmt::init_u16vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_u16vector",(pmt::pmt_t (*)(size_t, std::vector<unsigned short, std::allocator<unsigned short> > const &))&pmt::init_u16vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s16vector",(pmt::pmt_t (*)(size_t, int16_t const *))&pmt::init_s16vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s16vector",(pmt::pmt_t (*)(size_t, std::vector<short, std::allocator<short> > const &))&pmt::init_s16vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_u32vector",(pmt::pmt_t (*)(size_t, uint32_t const *))&pmt::init_u32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_u32vector",(pmt::pmt_t (*)(size_t, std::vector<unsigned int, std::allocator<unsigned int> > const &))&pmt::init_u32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s32vector",(pmt::pmt_t (*)(size_t, int32_t const *))&pmt::init_s32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s32vector",(pmt::pmt_t (*)(size_t, std::vector<int, std::allocator<int> > const &))&pmt::init_s32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_u64vector",(pmt::pmt_t (*)(size_t, uint64_t const *))&pmt::init_u64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_u64vector",(pmt::pmt_t (*)(size_t, std::vector<unsigned long, std::allocator<unsigned long> > const &))&pmt::init_u64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s64vector",(pmt::pmt_t (*)(size_t, int64_t const *))&pmt::init_s64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_s64vector",(pmt::pmt_t (*)(size_t, std::vector<long, std::allocator<long> > const &))&pmt::init_s64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_f32vector",(pmt::pmt_t (*)(size_t, float const *))&pmt::init_f32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_f32vector",(pmt::pmt_t (*)(size_t, std::vector<float, std::allocator<float> > const &))&pmt::init_f32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_f64vector",(pmt::pmt_t (*)(size_t, double const *))&pmt::init_f64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_f64vector",(pmt::pmt_t (*)(size_t, std::vector<double, std::allocator<double> > const &))&pmt::init_f64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_c32vector",(pmt::pmt_t (*)(size_t, std::complex<float> const *))&pmt::init_c32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_c32vector",(pmt::pmt_t (*)(size_t, std::vector<std::complex<float>, std::allocator<std::complex<float> > > const &))&pmt::init_c32vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_c64vector",(pmt::pmt_t (*)(size_t, std::complex<double> const *))&pmt::init_c64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("init_c64vector",(pmt::pmt_t (*)(size_t, std::vector<std::complex<double>, std::allocator<std::complex<double> > > const &))&pmt::init_c64vector,
        py::arg("k"), 
        py::arg("data") 
    );
    m.def("u8vector_ref",&pmt::u8vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("s8vector_ref",&pmt::s8vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("u16vector_ref",&pmt::u16vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("s16vector_ref",&pmt::s16vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("u32vector_ref",&pmt::u32vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("s32vector_ref",&pmt::s32vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("u64vector_ref",&pmt::u64vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("s64vector_ref",&pmt::s64vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("f32vector_ref",&pmt::f32vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("f64vector_ref",&pmt::f64vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("c32vector_ref",&pmt::c32vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("c64vector_ref",&pmt::c64vector_ref,
        py::arg("v"), 
        py::arg("k") 
    );
    m.def("u8vector_set",&pmt::u8vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("s8vector_set",&pmt::s8vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("u16vector_set",&pmt::u16vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("s16vector_set",&pmt::s16vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("u32vector_set",&pmt::u32vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("s32vector_set",&pmt::s32vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("u64vector_set",&pmt::u64vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("s64vector_set",&pmt::s64vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("f32vector_set",&pmt::f32vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("f64vector_set",&pmt::f64vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("c32vector_set",&pmt::c32vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("c64vector_set",&pmt::c64vector_set,
        py::arg("v"), 
        py::arg("k"), 
        py::arg("x") 
    );
    m.def("uniform_vector_elements",&pmt::uniform_vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u8vector_elements",(uint8_t const * (*)(pmt::pmt_t, size_t &))&pmt::u8vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s8vector_elements",(int8_t const * (*)(pmt::pmt_t, size_t &))&pmt::s8vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u16vector_elements",(uint16_t const * (*)(pmt::pmt_t, size_t &))&pmt::u16vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s16vector_elements",(int16_t const * (*)(pmt::pmt_t, size_t &))&pmt::s16vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u32vector_elements",(uint32_t const * (*)(pmt::pmt_t, size_t &))&pmt::u32vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s32vector_elements",(int32_t const * (*)(pmt::pmt_t, size_t &))&pmt::s32vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u64vector_elements",(uint64_t const * (*)(pmt::pmt_t, size_t &))&pmt::u64vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s64vector_elements",(int64_t const * (*)(pmt::pmt_t, size_t &))&pmt::s64vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("f32vector_elements",(float const * (*)(pmt::pmt_t, size_t &))&pmt::f32vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("f64vector_elements",(double const * (*)(pmt::pmt_t, size_t &))&pmt::f64vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("c32vector_elements",(std::complex<float> const * (*)(pmt::pmt_t, size_t &))&pmt::c32vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("c64vector_elements",(std::complex<double> const * (*)(pmt::pmt_t, size_t &))&pmt::c64vector_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u8vector_elements",(std::vector<unsigned char, std::allocator<unsigned char> > const (*)(pmt::pmt_t))&pmt::u8vector_elements,
        py::arg("v") 
    );
    m.def("s8vector_elements",(std::vector<signed char, std::allocator<signed char> > const (*)(pmt::pmt_t))&pmt::s8vector_elements,
        py::arg("v") 
    );
    m.def("u16vector_elements",(std::vector<unsigned short, std::allocator<unsigned short> > const (*)(pmt::pmt_t))&pmt::u16vector_elements,
        py::arg("v") 
    );
    m.def("s16vector_elements",(std::vector<short, std::allocator<short> > const (*)(pmt::pmt_t))&pmt::s16vector_elements,
        py::arg("v") 
    );
    m.def("u32vector_elements",(std::vector<unsigned int, std::allocator<unsigned int> > const (*)(pmt::pmt_t))&pmt::u32vector_elements,
        py::arg("v") 
    );
    m.def("s32vector_elements",(std::vector<int, std::allocator<int> > const (*)(pmt::pmt_t))&pmt::s32vector_elements,
        py::arg("v") 
    );
    m.def("u64vector_elements",(std::vector<unsigned long, std::allocator<unsigned long> > const (*)(pmt::pmt_t))&pmt::u64vector_elements,
        py::arg("v") 
    );
    m.def("s64vector_elements",(std::vector<long, std::allocator<long> > const (*)(pmt::pmt_t))&pmt::s64vector_elements,
        py::arg("v") 
    );
    m.def("f32vector_elements",(std::vector<float, std::allocator<float> > const (*)(pmt::pmt_t))&pmt::f32vector_elements,
        py::arg("v") 
    );
    m.def("f64vector_elements",(std::vector<double, std::allocator<double> > const (*)(pmt::pmt_t))&pmt::f64vector_elements,
        py::arg("v") 
    );
    m.def("c32vector_elements",(std::vector<std::complex<float>, std::allocator<std::complex<float> > > const (*)(pmt::pmt_t))&pmt::c32vector_elements,
        py::arg("v") 
    );
    m.def("c64vector_elements",(std::vector<std::complex<double>, std::allocator<std::complex<double> > > const (*)(pmt::pmt_t))&pmt::c64vector_elements,
        py::arg("v") 
    );

    // The following functions are not implemented in pmt.cc
    // m.def("pmt_u8vector_elements",&pmt::pmt_u8vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_s8vector_elements",&pmt::pmt_s8vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_u16vector_elements",&pmt::pmt_u16vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_s16vector_elements",&pmt::pmt_s16vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_u32vector_elements",&pmt::pmt_u32vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_s32vector_elements",&pmt::pmt_s32vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_u64vector_elements",&pmt::pmt_u64vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_s64vector_elements",&pmt::pmt_s64vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_f32vector_elements",&pmt::pmt_f32vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_f64vector_elements",&pmt::pmt_f64vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_c32vector_elements",&pmt::pmt_c32vector_elements,
    //     py::arg("v") 
    // );
    // m.def("pmt_c64vector_elements",&pmt::pmt_c64vector_elements,
    //     py::arg("v") 
    // );
    m.def("uniform_vector_writable_elements",&pmt::uniform_vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u8vector_writable_elements",&pmt::u8vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s8vector_writable_elements",&pmt::s8vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u16vector_writable_elements",&pmt::u16vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s16vector_writable_elements",&pmt::s16vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u32vector_writable_elements",&pmt::u32vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s32vector_writable_elements",&pmt::s32vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("u64vector_writable_elements",&pmt::u64vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("s64vector_writable_elements",&pmt::s64vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("f32vector_writable_elements",&pmt::f32vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("f64vector_writable_elements",&pmt::f64vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("c32vector_writable_elements",&pmt::c32vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("c64vector_writable_elements",&pmt::c64vector_writable_elements,
        py::arg("v"), 
        py::arg("len") 
    );
    m.def("is_dict",&pmt::is_dict,
        py::arg("obj") 
    );
    m.def("make_dict",&pmt::make_dict);
    m.def("dict_add",&pmt::dict_add,
        py::arg("dict"), 
        py::arg("key"), 
        py::arg("value") 
    );
    m.def("dict_delete",&pmt::dict_delete,
        py::arg("dict"), 
        py::arg("key") 
    );
    m.def("dict_has_key",&pmt::dict_has_key,
        py::arg("dict"), 
        py::arg("key") 
    );
    m.def("dict_ref",&pmt::dict_ref,
        py::arg("dict"), 
        py::arg("key"), 
        py::arg("not_found") 
    );
    m.def("dict_items",&pmt::dict_items,
        py::arg("dict") 
    );
    m.def("dict_keys",&pmt::dict_keys,
        py::arg("dict") 
    );
    m.def("dict_update",&pmt::dict_update,
        py::arg("dict1"), 
        py::arg("dict2") 
    );
    m.def("dict_values",&pmt::dict_values,
        py::arg("dict") 
    );
    m.def("is_any",&pmt::is_any,
        py::arg("obj") 
    );
    m.def("make_any",&pmt::make_any,
        py::arg("any") 
    );
    m.def("any_ref",&pmt::any_ref,
        py::arg("obj") 
    );
    m.def("any_set",&pmt::any_set,
        py::arg("obj"), 
        py::arg("any") 
    );
    // m.def("is_msg_accepter",&pmt::is_msg_accepter,
    //     py::arg("obj") 
    // );
    // m.def("make_msg_accepter",&pmt::make_msg_accepter,
    //     py::arg("ma") 
    // );
    // m.def("msg_accepter_ref",&pmt::msg_accepter_ref,
    //     py::arg("obj") 
    // );
    m.def("eq",&pmt::eq,
        py::arg("x"), 
        py::arg("y") 
    );
    m.def("eqv",&pmt::eqv,
        py::arg("x"), 
        py::arg("y") 
    );
    m.def("equal",&pmt::equal,
        py::arg("x"), 
        py::arg("y") 
    );
    m.def("length",&pmt::length,
        py::arg("v")
    );
    m.def("assq",&pmt::assq,
        py::arg("obj"), 
        py::arg("alist") 
    );
    m.def("assv",&pmt::assv,
        py::arg("obj"), 
        py::arg("alist") 
    );
    m.def("assoc",&pmt::assoc,
        py::arg("obj"), 
        py::arg("alist") 
    );
    m.def("map",&pmt::map,
        py::arg("proc"), 
        py::arg("list") 
    );
    m.def("reverse",&pmt::reverse,
        py::arg("list") 
    );
    m.def("reverse_x",&pmt::reverse_x,
        py::arg("list") 
    );
    m.def("acons",&pmt::acons,
        py::arg("x"), 
        py::arg("y"), 
        py::arg("a") 
    );
    m.def("nth",&pmt::nth,
        py::arg("n"), 
        py::arg("list") 
    );
    m.def("nthcdr",&pmt::nthcdr,
        py::arg("n"), 
        py::arg("list") 
    );
    m.def("memq",&pmt::memq,
        py::arg("obj"), 
        py::arg("list") 
    );
    m.def("memv",&pmt::memv,
        py::arg("obj"), 
        py::arg("list") 
    );
    m.def("member",&pmt::member,
        py::arg("obj"), 
        py::arg("list") 
    );
    m.def("subsetp",&pmt::subsetp,
        py::arg("list1"), 
        py::arg("list2") 
    );
    m.def("list1",&pmt::list1,
        py::arg("x1") 
    );
    m.def("list2",&pmt::list2,
        py::arg("x1"), 
        py::arg("x2") 
    );
    m.def("list3",&pmt::list3,
        py::arg("x1"), 
        py::arg("x2"), 
        py::arg("x3") 
    );
    m.def("list4",&pmt::list4,
        py::arg("x1"), 
        py::arg("x2"), 
        py::arg("x3"), 
        py::arg("x4") 
    );
    m.def("list5",&pmt::list5,
        py::arg("x1"), 
        py::arg("x2"), 
        py::arg("x3"), 
        py::arg("x4"), 
        py::arg("x5") 
    );
    m.def("list6",&pmt::list6,
        py::arg("x1"), 
        py::arg("x2"), 
        py::arg("x3"), 
        py::arg("x4"), 
        py::arg("x5"), 
        py::arg("x6") 
    );
    m.def("list_add",&pmt::list_add,
        py::arg("list"), 
        py::arg("item") 
    );
    m.def("list_rm",&pmt::list_rm,
        py::arg("list"), 
        py::arg("item") 
    );
    m.def("list_has",&pmt::list_has,
        py::arg("list"), 
        py::arg("item") 
    );
    m.def("is_eof_object",&pmt::is_eof_object,
        py::arg("obj") 
    );
    m.def("read",&pmt::read,
        py::arg("port") 
    );
    m.def("write",&pmt::write,
        py::arg("obj"), 
        py::arg("port") 
    );
    m.def("write_string",&pmt::write_string,
        py::arg("obj") 
    );
    m.def("print",&pmt::print,
        py::arg("v") 
    );
    m.def("serialize",&pmt::serialize,
        py::arg("obj"), 
        py::arg("sink") 
    );
    m.def("deserialize",&pmt::deserialize,
        py::arg("source") 
    );
    m.def("dump_sizeof",&pmt::dump_sizeof);
    m.def("serialize_str",&pmt::serialize_str,
        py::arg("obj") 
    );
    m.def("deserialize_str",&pmt::deserialize_str,
        py::arg("str") 
    );
} 

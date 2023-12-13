cmake_minimum_required (VERSION 3.10)
project(MyProject)

add_library(MyLibrary STATIC
complex.cpp abs/abs.cpp acos/acos.cpp arg/arg.cpp asin/asin.cpp atan/atan.cpp conj/conj.cpp cos/cos.cpp cosh/cosh.cpp exp/exp.cpp imag/imag.cpp inserter/inserter.cpp log/log.cpp log10/log10.cpp norm/norm.cpp polar/polar.cpp pow/pow.cpp real/real.cpp sin/sin.cpp sinh/sinh.cpp sqrt/sqrt.cpp tan/tan.cpp tanh/tanh.cpp
complex.h abs/abs.h acos/acos.h arg/arg.h asin/asin.h atan/atan.h conj/conj.h cos/cos.h cosh/cosh.h exp/exp.h imag/imag.h inserter/inserter.h log/log.h log10/log10.h norm/norm.h polar/polar.h pow/pow.h real/real.h sin/sin.h sinh/sinh.h sqrt/sqrt.h tan/tan.h tanh/tanh.h)

add_executable(MyProgram main_test.cpp complex.h abs/abs.h acos/acos.h arg/arg.h asin/asin.h atan/atan.h conj/conj.h cos/cos.h cosh/cosh.h exp/exp.h imag/imag.h inserter/inserter.h log/log.h log10/log10.h norm/norm.h polar/polar.h pow/pow.h real/real.h sin/sin.h sinh/sinh.h sqrt/sqrt.h tan/tan.h tanh/tanh.h)

target_link_libraries(MyProgram PRIVATE MyLibrary)
target_link_libraries(MyProgram PRIVATE m)
target_link_libraries(MyProgram PRIVATE /home/runner/KomplexKanban-V3-ved4/komplexkanbanv3-team74/tests/catch_amalgamated.o) # change KomplexKanban-V3-JustinWickelgren to your repl name

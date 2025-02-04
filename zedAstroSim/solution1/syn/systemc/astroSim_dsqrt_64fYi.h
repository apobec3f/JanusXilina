// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __astroSim_dsqrt_64fYi__HH__
#define __astroSim_dsqrt_64fYi__HH__
#include "ACMP_dsqrt.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(astroSim_dsqrt_64fYi) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_dsqrt<ID, 14, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_dsqrt_U;

    SC_CTOR(astroSim_dsqrt_64fYi):  ACMP_dsqrt_U ("ACMP_dsqrt_U") {
        ACMP_dsqrt_U.clk(clk);
        ACMP_dsqrt_U.reset(reset);
        ACMP_dsqrt_U.ce(ce);
        ACMP_dsqrt_U.din0(din0);
        ACMP_dsqrt_U.din1(din1);
        ACMP_dsqrt_U.dout(dout);

    }

};

#endif //

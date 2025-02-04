// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _astroSim_HH_
#define _astroSim_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "janus_run.h"

namespace ap_rtl {

struct astroSim : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<6> > result_address0;
    sc_out< sc_logic > result_ce0;
    sc_out< sc_logic > result_we0;
    sc_out< sc_lv<64> > result_d0;
    sc_out< sc_lv<6> > result_address1;
    sc_out< sc_logic > result_ce1;
    sc_out< sc_logic > result_we1;
    sc_out< sc_lv<64> > result_d1;


    // Module declarations
    astroSim(sc_module_name name);
    SC_HAS_PROCESS(astroSim);

    ~astroSim();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    janus_run* grp_janus_run_fu_120;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > grp_janus_run_fu_120_ap_start;
    sc_signal< sc_logic > grp_janus_run_fu_120_ap_done;
    sc_signal< sc_logic > grp_janus_run_fu_120_ap_idle;
    sc_signal< sc_logic > grp_janus_run_fu_120_ap_ready;
    sc_signal< sc_lv<6> > grp_janus_run_fu_120_p_int_out_address0;
    sc_signal< sc_logic > grp_janus_run_fu_120_p_int_out_ce0;
    sc_signal< sc_logic > grp_janus_run_fu_120_p_int_out_we0;
    sc_signal< sc_lv<64> > grp_janus_run_fu_120_p_int_out_d0;
    sc_signal< sc_lv<6> > grp_janus_run_fu_120_p_int_out_address1;
    sc_signal< sc_logic > grp_janus_run_fu_120_p_int_out_ce1;
    sc_signal< sc_logic > grp_janus_run_fu_120_p_int_out_we1;
    sc_signal< sc_lv<64> > grp_janus_run_fu_120_p_int_out_d1;
    sc_signal< sc_logic > ap_reg_grp_janus_run_fu_120_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_grp_janus_run_fu_120_ap_start();
    void thread_result_address0();
    void thread_result_address1();
    void thread_result_ce0();
    void thread_result_ce1();
    void thread_result_d0();
    void thread_result_d1();
    void thread_result_we0();
    void thread_result_we1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif

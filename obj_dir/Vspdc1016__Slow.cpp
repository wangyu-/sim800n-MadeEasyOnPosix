// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspdc1016.h for the primary calling header

#include "Vspdc1016.h"
#include "Vspdc1016__Syms.h"

//==========
VlUnpacked<CData/*0:0*/, 128> Vspdc1016::__Vtable1_spdc1016__DOT__we;
VlUnpacked<CData/*0:0*/, 256> Vspdc1016::__Vtable2_spdc1016__DOT__cpu__DOT__write_register;
VlUnpacked<CData/*1:0*/, 2048> Vspdc1016::__Vtable3_spdc1016__DOT__cpu__DOT__regsel;
VlUnpacked<CData/*3:0*/, 2048> Vspdc1016::__Vtable4_spdc1016__DOT__cpu__DOT__alu_op;
VlUnpacked<CData/*0:0*/, 128> Vspdc1016::__Vtable5_spdc1016__DOT__cpu__DOT__cond_true;

Vspdc1016::Vspdc1016(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModule{_vcname__}
 {
    Vspdc1016__Syms* __restrict vlSymsp = __VlSymsp = new Vspdc1016__Syms(_vcontextp__, this, name());
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values

    // Reset structure values
    _ctor_var_reset(this);
}

void Vspdc1016::__Vconfigure(Vspdc1016__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    vlSymsp->_vm_contextp__->timeunit(-12);
    vlSymsp->_vm_contextp__->timeprecision(-12);
}

Vspdc1016::~Vspdc1016() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vspdc1016::_initial__TOP__1(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_initial__TOP__1\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    vlTOPp->spdc1016__DOT__cpu__DOT__Z = 0U;
    vlTOPp->spdc1016__DOT__cpu__DOT__V = 0U;
    vlTOPp->spdc1016__DOT__cpu__DOT__N = 0U;
    vlTOPp->spdc1016__DOT__cpu__DOT__I = 0U;
    vlTOPp->spdc1016__DOT__cpu__DOT__C = 0U;
    vlTOPp->spdc1016__DOT__cpucnt = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_int_enable = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_general_ctrl = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__timer0run = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__timer1run = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__timerbasecounter = 0x3998U;
    vlTOPp->spdc1016__DOT__hub__DOT__nmicounter = 0x1c1fffU;
    vlTOPp->spdc1016__DOT__cpu__DOT__NMI_1 = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__irqcnter = 0U;
    vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge = 0U;
    vlTOPp->spdc1016__DOT__nmi = 0U;
    vlTOPp->spdc1016__DOT__cpu__DOT__D = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__offsetzb = 0x40U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_int_status = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timer1_val = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_port3 = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_zp_bsw = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timerA_val = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timerB_val = 0U;
    vlTOPp->spdc1016__DOT__hub__DOT__io_port4 = 0U;
    VL_READMEM_N(true, 8, 12582912, 0, std::string("brom.hex")
                 ,  &(vlTOPp->spdc1016__DOT__hub__DOT__brommem)
                 , 0, ~0ULL);
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x63383030U;
    __Vtemp1[2U] = 0x63U;
    VL_READMEM_N(true, 8, 524288, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 ,  &(vlTOPp->spdc1016__DOT__hub__DOT__normem)
                 , 0, ~0ULL);
}

void Vspdc1016::_settle__TOP__4(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_settle__TOP__4\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->lcd_CP = (0x11U < (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__cpcounter));
    vlTOPp->lcd_LP = ((0x16U > (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter)) 
                      & (0xdU < (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter)));
    vlTOPp->lcd_FP = (0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__fpcounter));
    vlTOPp->lcd_DO = vlTOPp->spdc1016__DOT__ram_lcd_dat_o;
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__store) 
                             << 6U) | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state));
    vlTOPp->spdc1016__DOT__we = vlTOPp->__Vtable1_spdc1016__DOT__we
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__plp) 
                             << 7U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_reg) 
                                        << 6U) | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)));
    vlTOPp->spdc1016__DOT__cpu__DOT__write_register 
        = vlTOPp->__Vtable2_spdc1016__DOT__cpu__DOT__write_register
        [vlTOPp->__Vtableidx2];
    vlTOPp->spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD 
        = ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adc_bcd) 
           & (0xdU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)));
    vlTOPp->spdc1016__DOT__cpu__DOT__alu_shift_right 
        = ((((0xdU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
             | (0x24U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
            | (0x23U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
           & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift_right));
    vlTOPp->spdc1016__DOT__cpu__DOT__BI = (0xffU & 
                                           ((0x20U 
                                             & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                             ? ((0x10U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                 ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                 : 
                                                ((8U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0U
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu_di))))))
                                             : ((0x10U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0U
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))
                                                  : (IData)(vlTOPp->spdc1016__DOT__cpu_di))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu_di))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu_di))))))));
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__backwards) 
                             << 0xaU) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__op) 
                                          << 6U) | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)));
    vlTOPp->spdc1016__DOT__cpu__DOT__alu_op = vlTOPp->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__dst_reg) 
                             << 9U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__index_y) 
                                        << 8U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__src_reg) 
                                                   << 6U) 
                                                  | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))));
    vlTOPp->spdc1016__DOT__cpu__DOT__regsel = vlTOPp->__Vtable3_spdc1016__DOT__cpu__DOT__regsel
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__N) 
                             << 6U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__V) 
                                        << 5U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__Z) 
                                                      << 3U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__cond_code)))));
    vlTOPp->spdc1016__DOT__cpu__DOT__cond_true = vlTOPp->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true
        [vlTOPp->__Vtableidx5];
    vlTOPp->spdc1016__DOT__cpu__DOT__CI = (1U & ((0x20U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((~ 
                                                   ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                    >> 4U)) 
                                                  & ((8U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(
                                                                (2U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 
                                                      (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                        >> 1U) 
                                                       | ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                          | ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__rotate)
                                                              ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)
                                                              : 
                                                             ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift)
                                                               ? 0U
                                                               : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__inc)))))
                                                       : 
                                                      (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                        >> 1U) 
                                                       & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                          & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__rotate)
                                                              ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)
                                                              : 
                                                             ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift)
                                                               ? 0U
                                                               : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__inc))))))))
                                                  : 
                                                 ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(
                                                              (6U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((~ 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                       >> 1U)) 
                                                     & ((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)))
                                                     : (IData)(
                                                               (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                     >> 2U) 
                                                    & ((2U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                        ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)
                                                        : 
                                                       ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                        & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__rotate)
                                                            ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)
                                                            : 
                                                           ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__compare)
                                                             ? 1U
                                                             : 
                                                            (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift) 
                                                              | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_only))
                                                              ? 0U
                                                              : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)))))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      >> 1U) 
                                                     & ((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      >> 1U) 
                                                     & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO))))))));
    vlTOPp->spdc1016__DOT__clk = (1U & ((IData)(vlTOPp->spdc1016__DOT__cpucnt) 
                                        >> 1U));
    vlTOPp->spdc1016__DOT__cpu__DOT__PC_inc = (1U & 
                                               ((0x20U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                 ? (IData)(
                                                           (9U 
                                                            == 
                                                            (0x1bU 
                                                             & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? (IData)(
                                                             (1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                   : (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((~ 
                                                     ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      >> 1U)) 
                                                    & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                       | (~ 
                                                          (((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I)) 
                                                            & (0U 
                                                               != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter))) 
                                                           | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge)))))
                                                    : 
                                                   (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                     >> 1U) 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                     | (~ 
                                                        ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO) 
                                                         ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__backwards))))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    : 
                                                   (~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))))));
    vlTOPp->spdc1016__DOT__cpu__DOT__IR = ((((0U != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter)) 
                                             & (~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I))) 
                                            | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge))
                                            ? 0U : 
                                           ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD_valid)
                                             ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD)
                                             : (IData)(vlTOPp->spdc1016__DOT__cpu_di)));
    vlTOPp->spdc1016__DOT__cpu__DOT__PC_temp = ((0x20U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                   : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                       << 8U) 
                                                      | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                      : 
                                                     ((((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I)) 
                                                        & (0U 
                                                           != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter))) 
                                                       | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge))
                                                       ? 
                                                      (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                        << 8U) 
                                                       | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                      : 
                                                     ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__res)
                                                       ? 0xfffcU
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge)
                                                        ? 0xfffaU
                                                        : 0xfffeU)))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                      : 
                                                     (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                       << 8U) 
                                                      | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))));
    vlTOPp->spdc1016__DOT__cpu__DOT__P = (0x30U | (
                                                   ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__N) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__V) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__D) 
                                                          << 3U) 
                                                         | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I) 
                                                             << 2U) 
                                                            | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__Z) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)))))));
    vlTOPp->spdc1016__DOT__cpu__DOT__regfile = vlTOPp->spdc1016__DOT__cpu__DOT__AXYS
        [vlTOPp->spdc1016__DOT__cpu__DOT__regsel];
    if ((0x20U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__addr = ((0x10U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                        ? ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))))
                                        : ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))))
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   (0x100U 
                                                    | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))));
        vlTOPp->spdc1016__DOT__cpu_do = (0xffU & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__php)
                                                        ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__P)
                                                        : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))))));
        vlTOPp->spdc1016__DOT__cpu__DOT__AI = (0xffU 
                                               & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 0U))))));
    } else {
        vlTOPp->spdc1016__DOT__addr = ((0x10U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                        ? ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))))
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu_di))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))))
                                        : ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))))
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))));
        vlTOPp->spdc1016__DOT__cpu_do = (0xffU & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC) 
                                                       >> 8U))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 
                                                      (((0U 
                                                         != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter)) 
                                                        | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge))
                                                        ? 
                                                       (0xefU 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__P))
                                                        : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__P)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC) 
                                                       >> 8U))))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))));
        vlTOPp->spdc1016__DOT__cpu__DOT__AI = (0xffU 
                                               & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0U
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_only)
                                                        ? 0U
                                                        : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 0U)))));
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic 
        = ((2U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
            ? ((1U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI)
                : ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                   ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI)))
            : ((1U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))
                : ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                   | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))));
    if (vlTOPp->spdc1016__DOT__cpu__DOT__alu_shift_right) {
        vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic 
            = ((0x100U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                          << 8U)) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CI) 
                                      << 7U) | (0x7fU 
                                                & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                                                   >> 1U))));
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI 
        = (0xffU & ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                     ? ((4U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                         ? 0U : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic))
                     : ((4U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                         ? (~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))
                         : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l 
        = (0x1fU & (((0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic)) 
                     + (0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI))) 
                    + (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_shift_right) 
                        | (3U == (3U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op) 
                                        >> 2U)))) ? 0U
                        : (1U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CI)))));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC 
        = (1U & (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l) 
                  >> 4U) | ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD) 
                            & (5U <= (7U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l) 
                                            >> 1U))))));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h 
        = (0x1fU & ((((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic) 
                      >> 4U) + (0xfU & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI) 
                                        >> 4U))) + (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC)));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp 
        = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h) 
            << 4U) | (0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l)));
}

void Vspdc1016::_eval_initial(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_eval_initial\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk4x = vlTOPp->clk4x;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__spdc1016__DOT__clk = vlTOPp->spdc1016__DOT__clk;
}

void Vspdc1016::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::final\n"); );
    // Variables
    Vspdc1016__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vspdc1016::_eval_settle(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_eval_settle\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

void Vspdc1016::_ctor_var_reset(Vspdc1016* self) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_ctor_var_reset\n"); );
    // Body
    if (false && self) {}  // Prevent unused
    self->clk4x = VL_RAND_RESET_I(1);
    self->reset = VL_RAND_RESET_I(1);
    self->lcd_CP = VL_RAND_RESET_I(1);
    self->lcd_DO = VL_RAND_RESET_I(1);
    self->lcd_FP = VL_RAND_RESET_I(1);
    self->lcd_LP = VL_RAND_RESET_I(1);
    self->lcd_FM = VL_RAND_RESET_I(1);
    self->lcd_CKV = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpucnt = VL_RAND_RESET_I(2);
    self->spdc1016__DOT__clk = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__addr = VL_RAND_RESET_I(16);
    self->spdc1016__DOT__cpu_di = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu_do = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__we = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__nmi = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__ram_lcd_dat_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16384; ++__Vi0) {
        self->spdc1016__DOT__hub__DOT__sram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<12582912; ++__Vi0) {
        self->spdc1016__DOT__hub__DOT__brommem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<524288; ++__Vi0) {
        self->spdc1016__DOT__hub__DOT__normem[__Vi0] = VL_RAND_RESET_I(8);
    }
    self->spdc1016__DOT__hub__DOT__irqcnter = VL_RAND_RESET_I(4);
    self->spdc1016__DOT__hub__DOT__is_4000_nor = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__hub__DOT__offsetzb = VL_RAND_RESET_I(12);
    self->spdc1016__DOT__hub__DOT__io_bank_switch = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_int_status = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_int_enable = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_timer0_val = VL_RAND_RESET_I(9);
    self->spdc1016__DOT__hub__DOT__io_timer1_val = VL_RAND_RESET_I(16);
    self->spdc1016__DOT__hub__DOT__io_general_ctrl = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_bios_bsw = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_port3 = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_lcd_segment = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_zp_bsw = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__io_timerA_val = VL_RAND_RESET_I(16);
    self->spdc1016__DOT__hub__DOT__io_timerB_val = VL_RAND_RESET_I(12);
    self->spdc1016__DOT__hub__DOT__io_port4 = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__hub__DOT__timer0run = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__hub__DOT__timer1run = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__hub__DOT__timerbasecounter = VL_RAND_RESET_I(15);
    self->spdc1016__DOT__hub__DOT__nmicounter = VL_RAND_RESET_I(22);
    self->spdc1016__DOT__cpu__DOT__PC = VL_RAND_RESET_I(16);
    self->spdc1016__DOT__cpu__DOT__ABL = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__ABH = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__ADD = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__IRHOLD = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__IRHOLD_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        self->spdc1016__DOT__cpu__DOT__AXYS[__Vi0] = VL_RAND_RESET_I(8);
    }
    self->spdc1016__DOT__cpu__DOT__C = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__Z = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__I = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__D = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__V = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__N = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__AN = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__HC = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__AI = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__BI = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__IR = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__CI = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__CO = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__NMI_edge = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__regsel = VL_RAND_RESET_I(2);
    self->spdc1016__DOT__cpu__DOT__regfile = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__P = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__state = VL_RAND_RESET_I(6);
    self->spdc1016__DOT__cpu__DOT__PC_inc = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__PC_temp = VL_RAND_RESET_I(16);
    self->spdc1016__DOT__cpu__DOT__src_reg = VL_RAND_RESET_I(2);
    self->spdc1016__DOT__cpu__DOT__dst_reg = VL_RAND_RESET_I(2);
    self->spdc1016__DOT__cpu__DOT__index_y = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__load_reg = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__inc = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__write_back = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__load_only = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__store = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__adc_sbc = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__compare = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__shift = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__rotate = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__backwards = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__cond_true = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__cond_code = VL_RAND_RESET_I(3);
    self->spdc1016__DOT__cpu__DOT__shift_right = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__alu_shift_right = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__op = VL_RAND_RESET_I(4);
    self->spdc1016__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    self->spdc1016__DOT__cpu__DOT__adc_bcd = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__adj_bcd = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__bit_ins = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__plp = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__php = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__clc = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__sec = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__cld = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__sed = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__cli = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__sei = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__clv = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__res = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__write_register = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__NMI_1 = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__AI7 = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__BI7 = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic = VL_RAND_RESET_I(9);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI = VL_RAND_RESET_I(8);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l = VL_RAND_RESET_I(5);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h = VL_RAND_RESET_I(5);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__temp = VL_RAND_RESET_I(9);
    self->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC = VL_RAND_RESET_I(1);
    self->spdc1016__DOT__lcd__DOT__cpcounter = VL_RAND_RESET_I(6);
    self->spdc1016__DOT__lcd__DOT__lpcounter = VL_RAND_RESET_I(13);
    self->spdc1016__DOT__lcd__DOT__fpcounter = VL_RAND_RESET_I(7);
    self->spdc1016__DOT__lcd__DOT__ckvcounter = VL_RAND_RESET_I(4);
    self->spdc1016__DOT__lcd__DOT__pixeladdr = VL_RAND_RESET_I(14);
    self->__Vtableidx1 = 0;
    self->__Vtable1_spdc1016__DOT__we[0] = 0U;
    self->__Vtable1_spdc1016__DOT__we[1] = 0U;
    self->__Vtable1_spdc1016__DOT__we[2] = 0U;
    self->__Vtable1_spdc1016__DOT__we[3] = 0U;
    self->__Vtable1_spdc1016__DOT__we[4] = 0U;
    self->__Vtable1_spdc1016__DOT__we[5] = 0U;
    self->__Vtable1_spdc1016__DOT__we[6] = 0U;
    self->__Vtable1_spdc1016__DOT__we[7] = 0U;
    self->__Vtable1_spdc1016__DOT__we[8] = 1U;
    self->__Vtable1_spdc1016__DOT__we[9] = 1U;
    self->__Vtable1_spdc1016__DOT__we[10] = 1U;
    self->__Vtable1_spdc1016__DOT__we[11] = 0U;
    self->__Vtable1_spdc1016__DOT__we[12] = 0U;
    self->__Vtable1_spdc1016__DOT__we[13] = 0U;
    self->__Vtable1_spdc1016__DOT__we[14] = 0U;
    self->__Vtable1_spdc1016__DOT__we[15] = 0U;
    self->__Vtable1_spdc1016__DOT__we[16] = 0U;
    self->__Vtable1_spdc1016__DOT__we[17] = 0U;
    self->__Vtable1_spdc1016__DOT__we[18] = 0U;
    self->__Vtable1_spdc1016__DOT__we[19] = 0U;
    self->__Vtable1_spdc1016__DOT__we[20] = 0U;
    self->__Vtable1_spdc1016__DOT__we[21] = 0U;
    self->__Vtable1_spdc1016__DOT__we[22] = 0U;
    self->__Vtable1_spdc1016__DOT__we[23] = 0U;
    self->__Vtable1_spdc1016__DOT__we[24] = 0U;
    self->__Vtable1_spdc1016__DOT__we[25] = 0U;
    self->__Vtable1_spdc1016__DOT__we[26] = 1U;
    self->__Vtable1_spdc1016__DOT__we[27] = 1U;
    self->__Vtable1_spdc1016__DOT__we[28] = 0U;
    self->__Vtable1_spdc1016__DOT__we[29] = 0U;
    self->__Vtable1_spdc1016__DOT__we[30] = 0U;
    self->__Vtable1_spdc1016__DOT__we[31] = 0U;
    self->__Vtable1_spdc1016__DOT__we[32] = 0U;
    self->__Vtable1_spdc1016__DOT__we[33] = 0U;
    self->__Vtable1_spdc1016__DOT__we[34] = 1U;
    self->__Vtable1_spdc1016__DOT__we[35] = 0U;
    self->__Vtable1_spdc1016__DOT__we[36] = 0U;
    self->__Vtable1_spdc1016__DOT__we[37] = 0U;
    self->__Vtable1_spdc1016__DOT__we[38] = 0U;
    self->__Vtable1_spdc1016__DOT__we[39] = 0U;
    self->__Vtable1_spdc1016__DOT__we[40] = 0U;
    self->__Vtable1_spdc1016__DOT__we[41] = 0U;
    self->__Vtable1_spdc1016__DOT__we[42] = 0U;
    self->__Vtable1_spdc1016__DOT__we[43] = 0U;
    self->__Vtable1_spdc1016__DOT__we[44] = 0U;
    self->__Vtable1_spdc1016__DOT__we[45] = 0U;
    self->__Vtable1_spdc1016__DOT__we[46] = 1U;
    self->__Vtable1_spdc1016__DOT__we[47] = 0U;
    self->__Vtable1_spdc1016__DOT__we[48] = 0U;
    self->__Vtable1_spdc1016__DOT__we[49] = 0U;
    self->__Vtable1_spdc1016__DOT__we[50] = 0U;
    self->__Vtable1_spdc1016__DOT__we[51] = 0U;
    self->__Vtable1_spdc1016__DOT__we[52] = 0U;
    self->__Vtable1_spdc1016__DOT__we[53] = 0U;
    self->__Vtable1_spdc1016__DOT__we[54] = 0U;
    self->__Vtable1_spdc1016__DOT__we[55] = 0U;
    self->__Vtable1_spdc1016__DOT__we[56] = 0U;
    self->__Vtable1_spdc1016__DOT__we[57] = 0U;
    self->__Vtable1_spdc1016__DOT__we[58] = 0U;
    self->__Vtable1_spdc1016__DOT__we[59] = 0U;
    self->__Vtable1_spdc1016__DOT__we[60] = 0U;
    self->__Vtable1_spdc1016__DOT__we[61] = 0U;
    self->__Vtable1_spdc1016__DOT__we[62] = 0U;
    self->__Vtable1_spdc1016__DOT__we[63] = 0U;
    self->__Vtable1_spdc1016__DOT__we[64] = 0U;
    self->__Vtable1_spdc1016__DOT__we[65] = 1U;
    self->__Vtable1_spdc1016__DOT__we[66] = 0U;
    self->__Vtable1_spdc1016__DOT__we[67] = 0U;
    self->__Vtable1_spdc1016__DOT__we[68] = 1U;
    self->__Vtable1_spdc1016__DOT__we[69] = 0U;
    self->__Vtable1_spdc1016__DOT__we[70] = 0U;
    self->__Vtable1_spdc1016__DOT__we[71] = 0U;
    self->__Vtable1_spdc1016__DOT__we[72] = 1U;
    self->__Vtable1_spdc1016__DOT__we[73] = 1U;
    self->__Vtable1_spdc1016__DOT__we[74] = 1U;
    self->__Vtable1_spdc1016__DOT__we[75] = 0U;
    self->__Vtable1_spdc1016__DOT__we[76] = 0U;
    self->__Vtable1_spdc1016__DOT__we[77] = 0U;
    self->__Vtable1_spdc1016__DOT__we[78] = 0U;
    self->__Vtable1_spdc1016__DOT__we[79] = 0U;
    self->__Vtable1_spdc1016__DOT__we[80] = 0U;
    self->__Vtable1_spdc1016__DOT__we[81] = 1U;
    self->__Vtable1_spdc1016__DOT__we[82] = 0U;
    self->__Vtable1_spdc1016__DOT__we[83] = 0U;
    self->__Vtable1_spdc1016__DOT__we[84] = 0U;
    self->__Vtable1_spdc1016__DOT__we[85] = 1U;
    self->__Vtable1_spdc1016__DOT__we[86] = 0U;
    self->__Vtable1_spdc1016__DOT__we[87] = 0U;
    self->__Vtable1_spdc1016__DOT__we[88] = 0U;
    self->__Vtable1_spdc1016__DOT__we[89] = 0U;
    self->__Vtable1_spdc1016__DOT__we[90] = 1U;
    self->__Vtable1_spdc1016__DOT__we[91] = 1U;
    self->__Vtable1_spdc1016__DOT__we[92] = 0U;
    self->__Vtable1_spdc1016__DOT__we[93] = 0U;
    self->__Vtable1_spdc1016__DOT__we[94] = 0U;
    self->__Vtable1_spdc1016__DOT__we[95] = 0U;
    self->__Vtable1_spdc1016__DOT__we[96] = 0U;
    self->__Vtable1_spdc1016__DOT__we[97] = 0U;
    self->__Vtable1_spdc1016__DOT__we[98] = 1U;
    self->__Vtable1_spdc1016__DOT__we[99] = 0U;
    self->__Vtable1_spdc1016__DOT__we[100] = 0U;
    self->__Vtable1_spdc1016__DOT__we[101] = 0U;
    self->__Vtable1_spdc1016__DOT__we[102] = 0U;
    self->__Vtable1_spdc1016__DOT__we[103] = 0U;
    self->__Vtable1_spdc1016__DOT__we[104] = 0U;
    self->__Vtable1_spdc1016__DOT__we[105] = 0U;
    self->__Vtable1_spdc1016__DOT__we[106] = 0U;
    self->__Vtable1_spdc1016__DOT__we[107] = 0U;
    self->__Vtable1_spdc1016__DOT__we[108] = 0U;
    self->__Vtable1_spdc1016__DOT__we[109] = 0U;
    self->__Vtable1_spdc1016__DOT__we[110] = 1U;
    self->__Vtable1_spdc1016__DOT__we[111] = 1U;
    self->__Vtable1_spdc1016__DOT__we[112] = 0U;
    self->__Vtable1_spdc1016__DOT__we[113] = 1U;
    self->__Vtable1_spdc1016__DOT__we[114] = 0U;
    self->__Vtable1_spdc1016__DOT__we[115] = 0U;
    self->__Vtable1_spdc1016__DOT__we[116] = 0U;
    self->__Vtable1_spdc1016__DOT__we[117] = 0U;
    self->__Vtable1_spdc1016__DOT__we[118] = 0U;
    self->__Vtable1_spdc1016__DOT__we[119] = 0U;
    self->__Vtable1_spdc1016__DOT__we[120] = 0U;
    self->__Vtable1_spdc1016__DOT__we[121] = 0U;
    self->__Vtable1_spdc1016__DOT__we[122] = 0U;
    self->__Vtable1_spdc1016__DOT__we[123] = 0U;
    self->__Vtable1_spdc1016__DOT__we[124] = 0U;
    self->__Vtable1_spdc1016__DOT__we[125] = 0U;
    self->__Vtable1_spdc1016__DOT__we[126] = 0U;
    self->__Vtable1_spdc1016__DOT__we[127] = 0U;
    self->__Vtableidx2 = 0;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[0] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[1] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[2] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[3] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[4] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[5] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[6] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[7] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[8] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[9] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[10] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[11] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[12] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[13] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[14] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[15] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[16] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[17] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[18] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[19] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[20] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[21] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[22] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[23] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[24] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[25] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[26] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[27] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[28] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[29] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[30] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[31] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[32] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[33] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[34] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[35] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[36] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[37] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[38] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[39] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[40] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[41] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[42] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[43] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[44] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[45] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[46] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[47] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[48] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[49] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[50] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[51] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[52] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[53] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[54] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[55] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[56] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[57] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[58] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[59] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[60] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[61] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[62] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[63] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[64] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[65] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[66] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[67] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[68] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[69] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[70] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[71] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[72] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[73] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[74] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[75] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[76] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[77] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[78] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[79] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[80] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[81] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[82] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[83] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[84] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[85] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[86] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[87] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[88] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[89] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[90] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[91] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[92] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[93] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[94] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[95] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[96] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[97] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[98] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[99] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[100] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[101] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[102] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[103] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[104] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[105] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[106] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[107] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[108] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[109] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[110] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[111] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[112] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[113] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[114] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[115] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[116] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[117] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[118] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[119] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[120] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[121] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[122] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[123] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[124] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[125] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[126] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[127] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[128] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[129] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[130] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[131] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[132] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[133] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[134] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[135] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[136] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[137] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[138] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[139] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[140] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[141] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[142] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[143] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[144] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[145] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[146] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[147] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[148] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[149] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[150] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[151] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[152] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[153] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[154] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[155] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[156] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[157] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[158] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[159] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[160] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[161] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[162] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[163] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[164] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[165] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[166] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[167] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[168] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[169] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[170] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[171] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[172] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[173] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[174] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[175] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[176] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[177] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[178] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[179] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[180] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[181] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[182] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[183] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[184] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[185] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[186] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[187] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[188] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[189] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[190] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[191] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[192] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[193] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[194] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[195] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[196] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[197] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[198] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[199] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[200] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[201] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[202] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[203] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[204] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[205] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[206] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[207] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[208] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[209] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[210] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[211] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[212] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[213] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[214] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[215] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[216] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[217] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[218] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[219] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[220] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[221] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[222] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[223] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[224] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[225] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[226] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[227] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[228] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[229] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[230] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[231] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[232] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[233] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[234] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[235] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[236] = 1U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[237] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[238] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[239] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[240] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[241] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[242] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[243] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[244] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[245] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[246] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[247] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[248] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[249] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[250] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[251] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[252] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[253] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[254] = 0U;
    self->__Vtable2_spdc1016__DOT__cpu__DOT__write_register[255] = 0U;
    self->__Vtableidx3 = 0;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[0] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[3] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[4] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[5] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[6] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[7] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[8] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[9] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[10] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[11] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[12] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[13] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[14] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[15] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[16] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[17] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[18] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[19] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[20] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[21] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[22] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[23] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[24] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[25] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[26] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[27] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[28] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[29] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[30] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[31] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[32] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[33] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[34] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[35] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[36] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[37] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[38] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[39] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[40] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[41] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[42] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[43] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[44] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[45] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[46] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[47] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[48] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[49] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[50] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[51] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[52] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[53] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[54] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[55] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[56] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[57] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[58] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[59] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[60] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[61] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[62] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[63] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[64] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[65] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[66] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[67] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[68] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[69] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[70] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[71] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[72] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[73] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[74] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[75] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[76] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[77] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[78] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[79] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[80] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[81] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[82] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[83] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[84] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[85] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[86] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[87] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[88] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[89] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[90] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[91] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[92] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[93] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[94] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[95] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[96] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[97] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[98] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[99] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[100] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[101] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[102] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[103] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[104] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[105] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[106] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[107] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[108] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[109] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[110] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[111] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[112] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[113] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[114] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[115] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[116] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[117] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[118] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[119] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[120] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[121] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[122] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[123] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[124] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[125] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[126] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[127] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[128] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[129] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[130] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[131] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[132] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[133] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[134] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[135] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[136] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[137] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[138] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[139] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[140] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[141] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[142] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[143] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[144] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[145] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[146] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[147] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[148] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[149] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[150] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[151] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[152] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[153] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[154] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[155] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[156] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[157] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[158] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[159] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[160] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[161] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[162] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[163] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[164] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[165] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[166] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[167] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[168] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[169] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[170] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[171] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[172] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[173] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[174] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[175] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[176] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[177] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[178] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[179] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[180] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[181] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[182] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[183] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[184] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[185] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[186] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[187] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[188] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[189] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[190] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[191] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[192] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[193] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[194] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[195] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[196] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[197] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[198] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[199] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[200] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[201] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[202] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[203] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[204] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[205] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[206] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[207] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[208] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[209] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[210] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[211] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[212] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[213] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[214] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[215] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[216] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[217] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[218] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[219] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[220] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[221] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[222] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[223] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[224] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[225] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[226] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[227] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[228] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[229] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[230] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[231] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[232] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[233] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[234] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[235] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[236] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[237] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[238] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[239] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[240] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[241] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[242] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[243] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[244] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[245] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[246] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[247] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[248] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[249] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[250] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[251] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[252] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[253] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[254] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[255] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[256] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[257] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[258] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[259] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[260] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[261] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[262] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[263] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[264] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[265] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[266] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[267] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[268] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[269] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[270] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[271] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[272] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[273] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[274] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[275] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[276] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[277] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[278] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[279] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[280] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[281] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[282] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[283] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[284] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[285] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[286] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[287] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[288] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[289] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[290] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[291] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[292] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[293] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[294] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[295] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[296] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[297] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[298] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[299] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[300] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[301] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[302] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[303] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[304] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[305] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[306] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[307] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[308] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[309] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[310] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[311] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[312] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[313] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[314] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[315] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[316] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[317] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[318] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[319] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[320] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[321] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[322] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[323] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[324] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[325] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[326] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[327] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[328] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[329] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[330] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[331] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[332] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[333] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[334] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[335] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[336] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[337] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[338] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[339] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[340] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[341] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[342] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[343] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[344] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[345] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[346] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[347] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[348] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[349] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[350] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[351] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[352] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[353] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[354] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[355] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[356] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[357] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[358] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[359] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[360] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[361] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[362] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[363] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[364] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[365] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[366] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[367] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[368] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[369] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[370] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[371] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[372] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[373] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[374] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[375] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[376] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[377] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[378] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[379] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[380] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[381] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[382] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[383] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[384] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[385] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[386] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[387] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[388] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[389] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[390] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[391] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[392] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[393] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[394] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[395] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[396] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[397] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[398] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[399] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[400] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[401] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[402] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[403] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[404] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[405] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[406] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[407] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[408] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[409] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[410] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[411] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[412] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[413] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[414] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[415] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[416] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[417] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[418] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[419] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[420] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[421] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[422] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[423] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[424] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[425] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[426] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[427] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[428] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[429] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[430] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[431] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[432] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[433] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[434] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[435] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[436] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[437] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[438] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[439] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[440] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[441] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[442] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[443] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[444] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[445] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[446] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[447] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[448] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[449] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[450] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[451] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[452] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[453] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[454] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[455] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[456] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[457] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[458] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[459] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[460] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[461] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[462] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[463] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[464] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[465] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[466] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[467] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[468] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[469] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[470] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[471] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[472] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[473] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[474] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[475] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[476] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[477] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[478] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[479] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[480] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[481] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[482] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[483] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[484] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[485] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[486] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[487] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[488] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[489] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[490] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[491] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[492] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[493] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[494] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[495] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[496] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[497] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[498] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[499] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[500] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[501] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[502] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[503] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[504] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[505] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[506] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[507] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[508] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[509] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[510] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[511] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[512] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[513] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[514] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[515] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[516] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[517] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[518] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[519] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[520] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[521] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[522] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[523] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[524] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[525] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[526] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[527] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[528] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[529] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[530] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[531] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[532] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[533] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[534] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[535] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[536] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[537] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[538] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[539] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[540] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[541] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[542] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[543] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[544] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[545] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[546] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[547] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[548] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[549] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[550] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[551] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[552] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[553] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[554] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[555] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[556] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[557] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[558] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[559] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[560] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[561] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[562] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[563] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[564] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[565] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[566] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[567] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[568] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[569] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[570] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[571] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[572] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[573] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[574] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[575] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[576] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[577] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[578] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[579] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[580] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[581] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[582] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[583] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[584] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[585] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[586] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[587] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[588] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[589] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[590] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[591] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[592] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[593] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[594] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[595] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[596] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[597] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[598] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[599] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[600] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[601] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[602] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[603] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[604] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[605] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[606] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[607] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[608] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[609] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[610] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[611] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[612] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[613] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[614] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[615] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[616] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[617] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[618] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[619] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[620] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[621] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[622] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[623] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[624] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[625] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[626] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[627] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[628] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[629] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[630] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[631] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[632] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[633] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[634] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[635] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[636] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[637] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[638] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[639] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[640] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[641] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[642] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[643] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[644] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[645] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[646] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[647] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[648] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[649] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[650] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[651] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[652] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[653] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[654] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[655] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[656] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[657] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[658] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[659] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[660] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[661] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[662] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[663] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[664] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[665] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[666] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[667] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[668] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[669] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[670] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[671] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[672] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[673] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[674] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[675] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[676] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[677] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[678] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[679] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[680] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[681] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[682] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[683] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[684] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[685] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[686] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[687] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[688] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[689] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[690] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[691] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[692] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[693] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[694] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[695] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[696] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[697] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[698] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[699] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[700] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[701] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[702] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[703] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[704] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[705] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[706] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[707] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[708] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[709] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[710] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[711] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[712] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[713] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[714] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[715] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[716] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[717] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[718] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[719] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[720] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[721] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[722] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[723] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[724] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[725] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[726] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[727] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[728] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[729] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[730] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[731] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[732] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[733] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[734] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[735] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[736] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[737] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[738] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[739] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[740] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[741] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[742] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[743] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[744] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[745] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[746] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[747] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[748] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[749] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[750] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[751] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[752] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[753] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[754] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[755] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[756] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[757] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[758] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[759] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[760] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[761] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[762] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[763] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[764] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[765] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[766] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[767] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[768] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[769] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[770] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[771] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[772] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[773] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[774] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[775] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[776] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[777] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[778] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[779] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[780] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[781] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[782] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[783] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[784] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[785] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[786] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[787] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[788] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[789] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[790] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[791] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[792] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[793] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[794] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[795] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[796] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[797] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[798] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[799] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[800] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[801] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[802] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[803] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[804] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[805] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[806] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[807] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[808] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[809] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[810] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[811] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[812] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[813] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[814] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[815] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[816] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[817] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[818] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[819] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[820] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[821] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[822] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[823] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[824] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[825] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[826] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[827] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[828] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[829] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[830] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[831] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[832] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[833] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[834] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[835] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[836] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[837] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[838] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[839] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[840] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[841] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[842] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[843] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[844] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[845] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[846] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[847] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[848] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[849] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[850] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[851] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[852] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[853] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[854] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[855] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[856] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[857] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[858] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[859] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[860] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[861] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[862] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[863] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[864] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[865] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[866] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[867] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[868] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[869] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[870] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[871] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[872] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[873] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[874] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[875] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[876] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[877] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[878] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[879] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[880] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[881] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[882] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[883] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[884] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[885] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[886] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[887] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[888] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[889] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[890] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[891] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[892] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[893] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[894] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[895] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[896] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[897] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[898] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[899] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[900] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[901] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[902] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[903] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[904] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[905] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[906] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[907] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[908] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[909] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[910] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[911] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[912] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[913] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[914] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[915] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[916] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[917] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[918] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[919] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[920] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[921] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[922] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[923] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[924] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[925] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[926] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[927] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[928] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[929] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[930] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[931] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[932] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[933] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[934] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[935] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[936] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[937] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[938] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[939] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[940] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[941] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[942] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[943] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[944] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[945] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[946] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[947] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[948] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[949] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[950] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[951] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[952] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[953] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[954] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[955] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[956] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[957] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[958] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[959] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[960] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[961] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[962] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[963] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[964] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[965] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[966] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[967] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[968] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[969] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[970] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[971] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[972] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[973] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[974] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[975] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[976] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[977] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[978] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[979] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[980] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[981] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[982] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[983] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[984] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[985] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[986] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[987] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[988] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[989] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[990] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[991] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[992] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[993] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[994] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[995] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[996] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[997] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[998] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[999] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1000] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1001] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1002] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1003] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1004] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1005] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1006] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1007] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1008] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1009] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1010] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1011] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1012] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1013] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1014] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1015] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1016] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1017] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1018] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1019] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1020] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1021] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1022] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1023] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1024] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1025] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1026] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1027] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1028] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1029] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1030] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1031] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1032] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1033] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1034] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1035] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1036] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1037] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1038] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1039] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1040] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1041] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1042] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1043] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1044] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1045] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1046] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1047] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1048] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1049] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1050] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1051] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1052] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1053] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1054] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1055] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1056] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1057] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1058] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1059] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1060] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1061] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1062] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1063] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1064] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1065] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1066] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1067] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1068] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1069] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1070] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1071] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1072] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1073] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1074] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1075] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1076] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1077] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1078] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1079] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1080] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1081] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1082] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1083] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1084] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1085] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1086] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1087] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1088] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1089] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1090] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1091] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1092] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1093] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1094] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1095] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1096] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1097] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1098] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1099] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1100] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1101] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1102] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1103] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1104] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1105] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1106] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1107] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1108] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1109] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1110] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1111] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1112] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1113] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1114] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1115] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1116] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1117] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1118] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1119] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1120] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1121] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1122] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1123] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1124] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1125] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1126] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1127] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1128] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1129] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1130] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1131] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1132] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1133] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1134] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1135] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1136] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1137] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1138] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1139] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1140] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1141] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1142] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1143] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1144] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1145] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1146] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1147] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1148] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1149] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1150] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1151] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1152] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1153] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1154] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1155] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1156] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1157] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1158] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1159] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1160] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1161] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1162] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1163] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1164] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1165] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1166] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1167] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1168] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1169] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1170] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1171] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1172] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1173] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1174] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1175] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1176] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1177] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1178] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1179] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1180] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1181] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1182] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1183] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1184] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1185] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1186] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1187] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1188] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1189] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1190] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1191] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1192] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1193] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1194] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1195] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1196] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1197] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1198] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1199] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1200] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1201] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1202] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1203] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1204] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1205] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1206] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1207] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1208] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1209] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1210] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1211] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1212] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1213] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1214] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1215] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1216] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1217] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1218] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1219] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1220] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1221] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1222] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1223] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1224] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1225] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1226] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1227] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1228] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1229] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1230] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1231] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1232] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1233] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1234] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1235] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1236] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1237] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1238] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1239] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1240] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1241] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1242] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1243] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1244] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1245] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1246] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1247] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1248] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1249] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1250] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1251] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1252] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1253] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1254] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1255] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1256] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1257] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1258] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1259] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1260] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1261] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1262] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1263] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1264] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1265] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1266] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1267] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1268] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1269] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1270] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1271] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1272] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1273] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1274] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1275] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1276] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1277] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1278] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1279] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1280] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1281] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1282] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1283] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1284] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1285] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1286] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1287] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1288] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1289] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1290] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1291] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1292] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1293] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1294] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1295] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1296] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1297] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1298] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1299] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1300] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1301] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1302] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1303] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1304] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1305] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1306] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1307] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1308] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1309] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1310] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1311] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1312] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1313] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1314] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1315] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1316] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1317] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1318] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1319] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1320] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1321] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1322] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1323] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1324] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1325] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1326] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1327] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1328] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1329] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1330] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1331] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1332] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1333] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1334] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1335] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1336] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1337] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1338] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1339] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1340] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1341] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1342] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1343] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1344] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1345] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1346] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1347] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1348] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1349] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1350] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1351] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1352] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1353] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1354] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1355] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1356] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1357] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1358] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1359] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1360] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1361] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1362] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1363] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1364] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1365] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1366] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1367] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1368] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1369] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1370] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1371] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1372] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1373] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1374] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1375] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1376] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1377] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1378] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1379] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1380] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1381] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1382] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1383] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1384] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1385] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1386] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1387] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1388] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1389] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1390] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1391] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1392] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1393] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1394] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1395] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1396] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1397] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1398] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1399] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1400] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1401] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1402] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1403] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1404] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1405] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1406] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1407] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1408] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1409] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1410] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1411] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1412] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1413] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1414] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1415] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1416] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1417] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1418] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1419] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1420] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1421] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1422] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1423] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1424] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1425] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1426] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1427] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1428] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1429] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1430] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1431] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1432] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1433] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1434] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1435] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1436] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1437] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1438] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1439] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1440] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1441] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1442] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1443] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1444] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1445] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1446] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1447] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1448] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1449] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1450] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1451] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1452] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1453] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1454] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1455] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1456] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1457] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1458] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1459] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1460] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1461] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1462] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1463] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1464] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1465] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1466] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1467] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1468] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1469] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1470] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1471] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1472] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1473] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1474] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1475] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1476] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1477] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1478] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1479] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1480] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1481] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1482] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1483] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1484] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1485] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1486] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1487] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1488] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1489] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1490] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1491] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1492] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1493] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1494] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1495] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1496] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1497] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1498] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1499] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1500] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1501] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1502] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1503] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1504] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1505] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1506] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1507] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1508] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1509] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1510] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1511] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1512] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1513] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1514] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1515] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1516] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1517] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1518] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1519] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1520] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1521] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1522] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1523] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1524] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1525] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1526] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1527] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1528] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1529] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1530] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1531] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1532] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1533] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1534] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1535] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1536] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1537] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1538] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1539] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1540] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1541] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1542] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1543] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1544] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1545] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1546] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1547] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1548] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1549] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1550] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1551] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1552] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1553] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1554] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1555] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1556] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1557] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1558] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1559] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1560] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1561] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1562] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1563] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1564] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1565] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1566] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1567] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1568] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1569] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1570] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1571] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1572] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1573] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1574] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1575] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1576] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1577] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1578] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1579] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1580] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1581] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1582] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1583] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1584] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1585] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1586] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1587] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1588] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1589] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1590] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1591] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1592] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1593] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1594] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1595] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1596] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1597] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1598] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1599] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1600] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1601] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1602] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1603] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1604] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1605] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1606] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1607] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1608] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1609] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1610] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1611] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1612] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1613] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1614] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1615] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1616] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1617] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1618] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1619] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1620] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1621] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1622] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1623] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1624] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1625] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1626] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1627] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1628] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1629] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1630] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1631] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1632] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1633] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1634] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1635] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1636] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1637] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1638] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1639] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1640] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1641] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1642] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1643] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1644] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1645] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1646] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1647] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1648] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1649] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1650] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1651] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1652] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1653] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1654] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1655] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1656] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1657] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1658] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1659] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1660] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1661] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1662] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1663] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1664] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1665] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1666] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1667] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1668] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1669] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1670] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1671] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1672] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1673] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1674] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1675] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1676] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1677] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1678] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1679] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1680] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1681] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1682] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1683] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1684] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1685] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1686] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1687] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1688] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1689] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1690] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1691] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1692] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1693] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1694] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1695] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1696] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1697] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1698] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1699] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1700] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1701] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1702] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1703] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1704] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1705] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1706] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1707] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1708] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1709] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1710] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1711] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1712] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1713] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1714] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1715] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1716] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1717] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1718] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1719] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1720] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1721] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1722] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1723] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1724] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1725] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1726] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1727] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1728] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1729] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1730] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1731] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1732] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1733] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1734] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1735] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1736] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1737] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1738] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1739] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1740] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1741] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1742] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1743] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1744] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1745] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1746] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1747] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1748] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1749] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1750] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1751] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1752] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1753] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1754] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1755] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1756] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1757] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1758] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1759] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1760] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1761] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1762] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1763] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1764] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1765] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1766] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1767] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1768] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1769] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1770] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1771] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1772] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1773] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1774] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1775] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1776] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1777] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1778] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1779] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1780] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1781] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1782] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1783] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1784] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1785] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1786] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1787] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1788] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1789] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1790] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1791] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1792] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1793] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1794] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1795] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1796] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1797] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1798] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1799] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1800] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1801] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1802] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1803] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1804] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1805] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1806] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1807] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1808] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1809] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1810] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1811] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1812] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1813] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1814] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1815] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1816] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1817] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1818] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1819] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1820] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1821] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1822] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1823] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1824] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1825] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1826] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1827] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1828] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1829] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1830] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1831] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1832] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1833] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1834] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1835] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1836] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1837] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1838] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1839] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1840] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1841] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1842] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1843] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1844] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1845] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1846] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1847] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1848] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1849] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1850] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1851] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1852] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1853] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1854] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1855] = 0U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1856] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1857] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1858] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1859] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1860] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1861] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1862] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1863] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1864] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1865] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1866] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1867] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1868] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1869] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1870] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1871] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1872] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1873] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1874] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1875] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1876] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1877] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1878] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1879] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1880] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1881] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1882] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1883] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1884] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1885] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1886] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1887] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1888] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1889] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1890] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1891] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1892] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1893] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1894] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1895] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1896] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1897] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1898] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1899] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1900] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1901] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1902] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1903] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1904] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1905] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1906] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1907] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1908] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1909] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1910] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1911] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1912] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1913] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1914] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1915] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1916] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1917] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1918] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1919] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1920] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1921] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1922] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1923] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1924] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1925] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1926] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1927] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1928] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1929] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1930] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1931] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1932] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1933] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1934] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1935] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1936] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1937] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1938] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1939] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1940] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1941] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1942] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1943] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1944] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1945] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1946] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1947] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1948] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1949] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1950] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1951] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1952] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1953] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1954] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1955] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1956] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1957] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1958] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1959] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1960] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1961] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1962] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1963] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1964] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1965] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1966] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1967] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1968] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1969] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1970] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1971] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1972] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1973] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1974] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1975] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1976] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1977] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1978] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1979] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1980] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1981] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1982] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1983] = 2U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1984] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1985] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1986] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1987] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1988] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1989] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1990] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1991] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1992] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1993] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1994] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1995] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1996] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1997] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1998] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[1999] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2000] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2001] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2002] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2003] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2004] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2005] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2006] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2007] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2008] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2009] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2010] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2011] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2012] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2013] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2014] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2015] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2016] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2017] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2018] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2019] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2020] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2021] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2022] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2023] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2024] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2025] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2026] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2027] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2028] = 1U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2029] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2030] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2031] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2032] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2033] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2034] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2035] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2036] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2037] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2038] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2039] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2040] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2041] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2042] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2043] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2044] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2045] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2046] = 3U;
    self->__Vtable3_spdc1016__DOT__cpu__DOT__regsel[2047] = 3U;
    self->__Vtableidx4 = 0;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[0] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[3] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[4] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[5] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[6] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[7] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[8] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[9] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[10] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[11] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[12] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[13] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[14] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[15] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[16] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[17] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[18] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[19] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[20] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[21] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[22] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[23] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[24] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[25] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[26] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[27] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[28] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[29] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[30] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[31] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[32] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[33] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[34] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[35] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[36] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[37] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[38] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[39] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[40] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[41] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[42] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[43] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[44] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[45] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[46] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[47] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[48] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[49] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[50] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[51] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[52] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[53] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[54] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[55] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[56] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[57] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[58] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[59] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[60] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[61] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[62] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[63] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[64] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[65] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[66] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[67] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[68] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[69] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[70] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[71] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[72] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[73] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[74] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[75] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[76] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[77] = 1U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[78] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[79] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[80] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[81] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[82] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[83] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[84] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[85] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[86] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[87] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[88] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[89] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[90] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[91] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[92] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[93] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[94] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[95] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[96] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[97] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[98] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[99] = 1U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[100] = 1U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[101] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[102] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[103] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[104] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[105] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[106] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[107] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[108] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[109] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[110] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[111] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[112] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[113] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[114] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[115] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[116] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[117] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[118] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[119] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[120] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[121] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[122] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[123] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[124] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[125] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[126] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[127] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[128] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[129] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[130] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[131] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[132] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[133] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[134] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[135] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[136] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[137] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[138] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[139] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[140] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[141] = 2U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[142] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[143] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[144] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[145] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[146] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[147] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[148] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[149] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[150] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[151] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[152] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[153] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[154] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[155] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[156] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[157] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[158] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[159] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[160] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[161] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[162] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[163] = 2U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[164] = 2U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[165] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[166] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[167] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[168] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[169] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[170] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[171] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[172] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[173] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[174] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[175] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[176] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[177] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[178] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[179] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[180] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[181] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[182] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[183] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[184] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[185] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[186] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[187] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[188] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[189] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[190] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[191] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[192] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[193] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[194] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[195] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[196] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[197] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[198] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[199] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[200] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[201] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[202] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[203] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[204] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[205] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[206] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[207] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[208] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[209] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[210] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[211] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[212] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[213] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[214] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[215] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[216] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[217] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[218] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[219] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[220] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[221] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[222] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[223] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[224] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[225] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[226] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[227] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[228] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[229] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[230] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[231] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[232] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[233] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[234] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[235] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[236] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[237] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[238] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[239] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[240] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[241] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[242] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[243] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[244] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[245] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[246] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[247] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[248] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[249] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[250] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[251] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[252] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[253] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[254] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[255] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[256] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[257] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[258] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[259] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[260] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[261] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[262] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[263] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[264] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[265] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[266] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[267] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[268] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[269] = 4U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[270] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[271] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[272] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[273] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[274] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[275] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[276] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[277] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[278] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[279] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[280] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[281] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[282] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[283] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[284] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[285] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[286] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[287] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[288] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[289] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[290] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[291] = 4U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[292] = 4U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[293] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[294] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[295] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[296] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[297] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[298] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[299] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[300] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[301] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[302] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[303] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[304] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[305] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[306] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[307] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[308] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[309] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[310] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[311] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[312] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[313] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[314] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[315] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[316] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[317] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[318] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[319] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[320] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[321] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[322] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[323] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[324] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[325] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[326] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[327] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[328] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[329] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[330] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[331] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[332] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[333] = 5U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[334] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[335] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[336] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[337] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[338] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[339] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[340] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[341] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[342] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[343] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[344] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[345] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[346] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[347] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[348] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[349] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[350] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[351] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[352] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[353] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[354] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[355] = 5U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[356] = 5U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[357] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[358] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[359] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[360] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[361] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[362] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[363] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[364] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[365] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[366] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[367] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[368] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[369] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[370] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[371] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[372] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[373] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[374] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[375] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[376] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[377] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[378] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[379] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[380] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[381] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[382] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[383] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[384] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[385] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[386] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[387] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[388] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[389] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[390] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[391] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[392] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[393] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[394] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[395] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[396] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[397] = 6U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[398] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[399] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[400] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[401] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[402] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[403] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[404] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[405] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[406] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[407] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[408] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[409] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[410] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[411] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[412] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[413] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[414] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[415] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[416] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[417] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[418] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[419] = 6U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[420] = 6U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[421] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[422] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[423] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[424] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[425] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[426] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[427] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[428] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[429] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[430] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[431] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[432] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[433] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[434] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[435] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[436] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[437] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[438] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[439] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[440] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[441] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[442] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[443] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[444] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[445] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[446] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[447] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[448] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[449] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[450] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[451] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[452] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[453] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[454] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[455] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[456] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[457] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[458] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[459] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[460] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[461] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[462] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[463] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[464] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[465] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[466] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[467] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[468] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[469] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[470] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[471] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[472] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[473] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[474] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[475] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[476] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[477] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[478] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[479] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[480] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[481] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[482] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[483] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[484] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[485] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[486] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[487] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[488] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[489] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[490] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[491] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[492] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[493] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[494] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[495] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[496] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[497] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[498] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[499] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[500] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[501] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[502] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[503] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[504] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[505] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[506] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[507] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[508] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[509] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[510] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[511] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[512] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[513] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[514] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[515] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[516] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[517] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[518] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[519] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[520] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[521] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[522] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[523] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[524] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[525] = 8U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[526] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[527] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[528] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[529] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[530] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[531] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[532] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[533] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[534] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[535] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[536] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[537] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[538] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[539] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[540] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[541] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[542] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[543] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[544] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[545] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[546] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[547] = 8U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[548] = 8U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[549] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[550] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[551] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[552] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[553] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[554] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[555] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[556] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[557] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[558] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[559] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[560] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[561] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[562] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[563] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[564] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[565] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[566] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[567] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[568] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[569] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[570] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[571] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[572] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[573] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[574] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[575] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[576] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[577] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[578] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[579] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[580] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[581] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[582] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[583] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[584] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[585] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[586] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[587] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[588] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[589] = 9U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[590] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[591] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[592] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[593] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[594] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[595] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[596] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[597] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[598] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[599] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[600] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[601] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[602] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[603] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[604] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[605] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[606] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[607] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[608] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[609] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[610] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[611] = 9U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[612] = 9U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[613] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[614] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[615] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[616] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[617] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[618] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[619] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[620] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[621] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[622] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[623] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[624] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[625] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[626] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[627] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[628] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[629] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[630] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[631] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[632] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[633] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[634] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[635] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[636] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[637] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[638] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[639] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[640] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[641] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[642] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[643] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[644] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[645] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[646] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[647] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[648] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[649] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[650] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[651] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[652] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[653] = 0xaU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[654] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[655] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[656] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[657] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[658] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[659] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[660] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[661] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[662] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[663] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[664] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[665] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[666] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[667] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[668] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[669] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[670] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[671] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[672] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[673] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[674] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[675] = 0xaU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[676] = 0xaU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[677] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[678] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[679] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[680] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[681] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[682] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[683] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[684] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[685] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[686] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[687] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[688] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[689] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[690] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[691] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[692] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[693] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[694] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[695] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[696] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[697] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[698] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[699] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[700] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[701] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[702] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[703] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[704] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[705] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[706] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[707] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[708] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[709] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[710] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[711] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[712] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[713] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[714] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[715] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[716] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[717] = 0xbU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[718] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[719] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[720] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[721] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[722] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[723] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[724] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[725] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[726] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[727] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[728] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[729] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[730] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[731] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[732] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[733] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[734] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[735] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[736] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[737] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[738] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[739] = 0xbU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[740] = 0xbU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[741] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[742] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[743] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[744] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[745] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[746] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[747] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[748] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[749] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[750] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[751] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[752] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[753] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[754] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[755] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[756] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[757] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[758] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[759] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[760] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[761] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[762] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[763] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[764] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[765] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[766] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[767] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[768] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[769] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[770] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[771] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[772] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[773] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[774] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[775] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[776] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[777] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[778] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[779] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[780] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[781] = 0xcU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[782] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[783] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[784] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[785] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[786] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[787] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[788] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[789] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[790] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[791] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[792] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[793] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[794] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[795] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[796] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[797] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[798] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[799] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[800] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[801] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[802] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[803] = 0xcU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[804] = 0xcU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[805] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[806] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[807] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[808] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[809] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[810] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[811] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[812] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[813] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[814] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[815] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[816] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[817] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[818] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[819] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[820] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[821] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[822] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[823] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[824] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[825] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[826] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[827] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[828] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[829] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[830] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[831] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[832] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[833] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[834] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[835] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[836] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[837] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[838] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[839] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[840] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[841] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[842] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[843] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[844] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[845] = 0xdU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[846] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[847] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[848] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[849] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[850] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[851] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[852] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[853] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[854] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[855] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[856] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[857] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[858] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[859] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[860] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[861] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[862] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[863] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[864] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[865] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[866] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[867] = 0xdU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[868] = 0xdU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[869] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[870] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[871] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[872] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[873] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[874] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[875] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[876] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[877] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[878] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[879] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[880] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[881] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[882] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[883] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[884] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[885] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[886] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[887] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[888] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[889] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[890] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[891] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[892] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[893] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[894] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[895] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[896] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[897] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[898] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[899] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[900] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[901] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[902] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[903] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[904] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[905] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[906] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[907] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[908] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[909] = 0xeU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[910] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[911] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[912] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[913] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[914] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[915] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[916] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[917] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[918] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[919] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[920] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[921] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[922] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[923] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[924] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[925] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[926] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[927] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[928] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[929] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[930] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[931] = 0xeU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[932] = 0xeU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[933] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[934] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[935] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[936] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[937] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[938] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[939] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[940] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[941] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[942] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[943] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[944] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[945] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[946] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[947] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[948] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[949] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[950] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[951] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[952] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[953] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[954] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[955] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[956] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[957] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[958] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[959] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[960] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[961] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[962] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[963] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[964] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[965] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[966] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[967] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[968] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[969] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[970] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[971] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[972] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[973] = 0xfU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[974] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[975] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[976] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[977] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[978] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[979] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[980] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[981] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[982] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[983] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[984] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[985] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[986] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[987] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[988] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[989] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[990] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[991] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[992] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[993] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[994] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[995] = 0xfU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[996] = 0xfU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[997] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[998] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[999] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1000] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1001] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1002] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1003] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1004] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1005] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1006] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1007] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1008] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1009] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1010] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1011] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1012] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1013] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1014] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1015] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1016] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1017] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1018] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1019] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1020] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1021] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1022] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1023] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1024] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1025] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1026] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1027] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1028] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1029] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1030] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1031] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1032] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1033] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1034] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1035] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1036] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1037] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1038] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1039] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1040] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1041] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1042] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1043] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1044] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1045] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1046] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1047] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1048] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1049] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1050] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1051] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1052] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1053] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1054] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1055] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1056] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1057] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1058] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1059] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1060] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1061] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1062] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1063] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1064] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1065] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1066] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1067] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1068] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1069] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1070] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1071] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1072] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1073] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1074] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1075] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1076] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1077] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1078] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1079] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1080] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1081] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1082] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1083] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1084] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1085] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1086] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1087] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1088] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1089] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1090] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1091] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1092] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1093] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1094] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1095] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1096] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1097] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1098] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1099] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1100] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1101] = 1U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1102] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1103] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1104] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1105] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1106] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1107] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1108] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1109] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1110] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1111] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1112] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1113] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1114] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1115] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1116] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1117] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1118] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1119] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1120] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1121] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1122] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1123] = 1U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1124] = 1U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1125] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1126] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1127] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1128] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1129] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1130] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1131] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1132] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1133] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1134] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1135] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1136] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1137] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1138] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1139] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1140] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1141] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1142] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1143] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1144] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1145] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1146] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1147] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1148] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1149] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1150] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1151] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1152] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1153] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1154] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1155] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1156] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1157] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1158] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1159] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1160] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1161] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1162] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1163] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1164] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1165] = 2U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1166] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1167] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1168] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1169] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1170] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1171] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1172] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1173] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1174] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1175] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1176] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1177] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1178] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1179] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1180] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1181] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1182] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1183] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1184] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1185] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1186] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1187] = 2U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1188] = 2U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1189] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1190] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1191] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1192] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1193] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1194] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1195] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1196] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1197] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1198] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1199] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1200] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1201] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1202] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1203] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1204] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1205] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1206] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1207] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1208] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1209] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1210] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1211] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1212] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1213] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1214] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1215] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1216] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1217] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1218] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1219] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1220] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1221] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1222] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1223] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1224] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1225] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1226] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1227] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1228] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1229] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1230] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1231] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1232] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1233] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1234] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1235] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1236] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1237] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1238] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1239] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1240] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1241] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1242] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1243] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1244] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1245] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1246] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1247] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1248] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1249] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1250] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1251] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1252] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1253] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1254] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1255] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1256] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1257] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1258] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1259] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1260] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1261] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1262] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1263] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1264] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1265] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1266] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1267] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1268] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1269] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1270] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1271] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1272] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1273] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1274] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1275] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1276] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1277] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1278] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1279] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1280] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1281] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1282] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1283] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1284] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1285] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1286] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1287] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1288] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1289] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1290] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1291] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1292] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1293] = 4U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1294] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1295] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1296] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1297] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1298] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1299] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1300] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1301] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1302] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1303] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1304] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1305] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1306] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1307] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1308] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1309] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1310] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1311] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1312] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1313] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1314] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1315] = 4U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1316] = 4U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1317] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1318] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1319] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1320] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1321] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1322] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1323] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1324] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1325] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1326] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1327] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1328] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1329] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1330] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1331] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1332] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1333] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1334] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1335] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1336] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1337] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1338] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1339] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1340] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1341] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1342] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1343] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1344] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1345] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1346] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1347] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1348] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1349] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1350] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1351] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1352] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1353] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1354] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1355] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1356] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1357] = 5U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1358] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1359] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1360] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1361] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1362] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1363] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1364] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1365] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1366] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1367] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1368] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1369] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1370] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1371] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1372] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1373] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1374] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1375] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1376] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1377] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1378] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1379] = 5U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1380] = 5U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1381] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1382] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1383] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1384] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1385] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1386] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1387] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1388] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1389] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1390] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1391] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1392] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1393] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1394] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1395] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1396] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1397] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1398] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1399] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1400] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1401] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1402] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1403] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1404] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1405] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1406] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1407] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1408] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1409] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1410] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1411] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1412] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1413] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1414] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1415] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1416] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1417] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1418] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1419] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1420] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1421] = 6U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1422] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1423] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1424] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1425] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1426] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1427] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1428] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1429] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1430] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1431] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1432] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1433] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1434] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1435] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1436] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1437] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1438] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1439] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1440] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1441] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1442] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1443] = 6U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1444] = 6U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1445] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1446] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1447] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1448] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1449] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1450] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1451] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1452] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1453] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1454] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1455] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1456] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1457] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1458] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1459] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1460] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1461] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1462] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1463] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1464] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1465] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1466] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1467] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1468] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1469] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1470] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1471] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1472] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1473] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1474] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1475] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1476] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1477] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1478] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1479] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1480] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1481] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1482] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1483] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1484] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1485] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1486] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1487] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1488] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1489] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1490] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1491] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1492] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1493] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1494] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1495] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1496] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1497] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1498] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1499] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1500] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1501] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1502] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1503] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1504] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1505] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1506] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1507] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1508] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1509] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1510] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1511] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1512] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1513] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1514] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1515] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1516] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1517] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1518] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1519] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1520] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1521] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1522] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1523] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1524] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1525] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1526] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1527] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1528] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1529] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1530] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1531] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1532] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1533] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1534] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1535] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1536] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1537] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1538] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1539] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1540] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1541] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1542] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1543] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1544] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1545] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1546] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1547] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1548] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1549] = 8U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1550] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1551] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1552] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1553] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1554] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1555] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1556] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1557] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1558] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1559] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1560] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1561] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1562] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1563] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1564] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1565] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1566] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1567] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1568] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1569] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1570] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1571] = 8U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1572] = 8U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1573] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1574] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1575] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1576] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1577] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1578] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1579] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1580] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1581] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1582] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1583] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1584] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1585] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1586] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1587] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1588] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1589] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1590] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1591] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1592] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1593] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1594] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1595] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1596] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1597] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1598] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1599] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1600] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1601] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1602] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1603] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1604] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1605] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1606] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1607] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1608] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1609] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1610] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1611] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1612] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1613] = 9U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1614] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1615] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1616] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1617] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1618] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1619] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1620] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1621] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1622] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1623] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1624] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1625] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1626] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1627] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1628] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1629] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1630] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1631] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1632] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1633] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1634] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1635] = 9U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1636] = 9U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1637] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1638] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1639] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1640] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1641] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1642] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1643] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1644] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1645] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1646] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1647] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1648] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1649] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1650] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1651] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1652] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1653] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1654] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1655] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1656] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1657] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1658] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1659] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1660] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1661] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1662] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1663] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1664] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1665] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1666] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1667] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1668] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1669] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1670] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1671] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1672] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1673] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1674] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1675] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1676] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1677] = 0xaU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1678] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1679] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1680] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1681] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1682] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1683] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1684] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1685] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1686] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1687] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1688] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1689] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1690] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1691] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1692] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1693] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1694] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1695] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1696] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1697] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1698] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1699] = 0xaU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1700] = 0xaU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1701] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1702] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1703] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1704] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1705] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1706] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1707] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1708] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1709] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1710] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1711] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1712] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1713] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1714] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1715] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1716] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1717] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1718] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1719] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1720] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1721] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1722] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1723] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1724] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1725] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1726] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1727] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1728] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1729] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1730] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1731] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1732] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1733] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1734] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1735] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1736] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1737] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1738] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1739] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1740] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1741] = 0xbU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1742] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1743] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1744] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1745] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1746] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1747] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1748] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1749] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1750] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1751] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1752] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1753] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1754] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1755] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1756] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1757] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1758] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1759] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1760] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1761] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1762] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1763] = 0xbU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1764] = 0xbU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1765] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1766] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1767] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1768] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1769] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1770] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1771] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1772] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1773] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1774] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1775] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1776] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1777] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1778] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1779] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1780] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1781] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1782] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1783] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1784] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1785] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1786] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1787] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1788] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1789] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1790] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1791] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1792] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1793] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1794] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1795] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1796] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1797] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1798] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1799] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1800] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1801] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1802] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1803] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1804] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1805] = 0xcU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1806] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1807] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1808] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1809] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1810] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1811] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1812] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1813] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1814] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1815] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1816] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1817] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1818] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1819] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1820] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1821] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1822] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1823] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1824] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1825] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1826] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1827] = 0xcU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1828] = 0xcU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1829] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1830] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1831] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1832] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1833] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1834] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1835] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1836] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1837] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1838] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1839] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1840] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1841] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1842] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1843] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1844] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1845] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1846] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1847] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1848] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1849] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1850] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1851] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1852] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1853] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1854] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1855] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1856] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1857] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1858] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1859] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1860] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1861] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1862] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1863] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1864] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1865] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1866] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1867] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1868] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1869] = 0xdU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1870] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1871] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1872] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1873] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1874] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1875] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1876] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1877] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1878] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1879] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1880] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1881] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1882] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1883] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1884] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1885] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1886] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1887] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1888] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1889] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1890] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1891] = 0xdU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1892] = 0xdU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1893] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1894] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1895] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1896] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1897] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1898] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1899] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1900] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1901] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1902] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1903] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1904] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1905] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1906] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1907] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1908] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1909] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1910] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1911] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1912] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1913] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1914] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1915] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1916] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1917] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1918] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1919] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1920] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1921] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1922] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1923] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1924] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1925] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1926] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1927] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1928] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1929] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1930] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1931] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1932] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1933] = 0xeU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1934] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1935] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1936] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1937] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1938] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1939] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1940] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1941] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1942] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1943] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1944] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1945] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1946] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1947] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1948] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1949] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1950] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1951] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1952] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1953] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1954] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1955] = 0xeU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1956] = 0xeU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1957] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1958] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1959] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1960] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1961] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1962] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1963] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1964] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1965] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1966] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1967] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1968] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1969] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1970] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1971] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1972] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1973] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1974] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1975] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1976] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1977] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1978] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1979] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1980] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1981] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1982] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1983] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1984] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1985] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1986] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1987] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1988] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1989] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1990] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1991] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1992] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1993] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1994] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1995] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1996] = 0U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1997] = 0xfU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1998] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[1999] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2000] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2001] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2002] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2003] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2004] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2005] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2006] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2007] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2008] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2009] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2010] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2011] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2012] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2013] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2014] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2015] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2016] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2017] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2018] = 7U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2019] = 0xfU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2020] = 0xfU;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2021] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2022] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2023] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2024] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2025] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2026] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2027] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2028] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2029] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2030] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2031] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2032] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2033] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2034] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2035] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2036] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2037] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2038] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2039] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2040] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2041] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2042] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2043] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2044] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2045] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2046] = 3U;
    self->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op[2047] = 3U;
    self->__Vtableidx5 = 0;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[0] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[1] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[2] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[3] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[4] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[5] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[6] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[7] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[8] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[9] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[10] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[11] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[12] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[13] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[14] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[15] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[16] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[17] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[18] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[19] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[20] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[21] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[22] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[23] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[24] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[25] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[26] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[27] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[28] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[29] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[30] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[31] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[32] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[33] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[34] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[35] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[36] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[37] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[38] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[39] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[40] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[41] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[42] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[43] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[44] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[45] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[46] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[47] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[48] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[49] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[50] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[51] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[52] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[53] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[54] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[55] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[56] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[57] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[58] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[59] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[60] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[61] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[62] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[63] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[64] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[65] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[66] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[67] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[68] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[69] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[70] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[71] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[72] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[73] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[74] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[75] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[76] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[77] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[78] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[79] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[80] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[81] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[82] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[83] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[84] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[85] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[86] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[87] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[88] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[89] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[90] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[91] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[92] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[93] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[94] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[95] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[96] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[97] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[98] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[99] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[100] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[101] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[102] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[103] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[104] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[105] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[106] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[107] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[108] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[109] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[110] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[111] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[112] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[113] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[114] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[115] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[116] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[117] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[118] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[119] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[120] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[121] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[122] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[123] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[124] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[125] = 1U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[126] = 0U;
    self->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true[127] = 1U;
    self->__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor = VL_RAND_RESET_I(1);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch = VL_RAND_RESET_I(8);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw = VL_RAND_RESET_I(8);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment = VL_RAND_RESET_I(8);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw = VL_RAND_RESET_I(8);
    self->__Vdly__spdc1016__DOT__hub__DOT__offsetzb = VL_RAND_RESET_I(12);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val = VL_RAND_RESET_I(9);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val = VL_RAND_RESET_I(16);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_port4 = VL_RAND_RESET_I(8);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_port3 = VL_RAND_RESET_I(8);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_int_status = VL_RAND_RESET_I(8);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val = VL_RAND_RESET_I(16);
    self->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val = VL_RAND_RESET_I(12);
    self->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v0 = 0;
    self->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v1 = 0;
    self->__Vdly__spdc1016__DOT__cpu__DOT__state = VL_RAND_RESET_I(6);
    self->__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr = VL_RAND_RESET_I(14);
}

verilator -cc spdc1016.v ALU.v cpu.v memhub_sim.v spld_pump.v  -Wno-CASEX -Wno-CASEOVERLAP -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-WIDTHCONCAT -Wno-CASEINCOMPLETE  --exe

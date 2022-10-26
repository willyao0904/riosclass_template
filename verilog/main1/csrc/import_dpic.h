
 extern void inst_log(/* INPUT */int instruction);

 extern void reg_monitor(/* INPUT */unsigned char alu_valid, /* INPUT */unsigned char lsu_valid, /* INPUT */int alu_data_in, /* INPUT */int lsu_data_in, /* INPUT */int alu_address, /* INPUT */int lsu_address);

 extern void rcu_monitor(/* INPUT */unsigned char rob_cm_valid, /* INPUT */int rob_cm_exp_pc, /* INPUT */int co_rob_rd, /* INPUT */int co_prf_name);

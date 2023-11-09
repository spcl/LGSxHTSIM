# Incast Small, 100GB BW - 400NS Latency
RES_FOLDER="SCALING_INCAST_800_32"
CMD="rm -r ${RES_FOLDER}"
echo ${CMD}
eval ${CMD}
CMD="mkdir ${RES_FOLDER}"
echo ${CMD}
eval ${CMD}


for Item in incast_1024_32_4096.bin incast_1024_32_8192.bin incast_1024_32_16384.bin  incast_1024_32_32768.bin incast_1024_32_65536.bin incast_1024_32_131072.bin  incast_1024_32_262144.bin incast_1024_32_524288.bin incast_1024_32_1048576.bin incast_1024_32_2097152.bin incast_1024_32_4194304.bin incast_1024_32_8388608.bin incast_1024_32_16777216.bin incast_1024_32_33554432.bin;
  do
    echo $Item
    FILE_NAME="uecComposite.tmp"
    CMD="../sim/datacenter/htsim_uec_entry_modern -o uec_entry -k 1 -algorithm delayB -nodes 1024 -q 4452000 -strat ecmp_host_random2_ecn -number_entropies 256 -kmin 20 -kmax 80 -target_rtt_percentage_over_base 50  -use_fast_increase 1 -use_super_fast_increase 1 -fast_drop 1 -linkspeed 800000 -mtu 4096 -seed 919 -queue_type composite -hop_latency 700 -switch_latency 0 -reuse_entropy 1 -goal incast_scaling_32/${Item} -ignore_ecn_data 1 -ignore_ecn_ack 1 -x_gain 1.25 -y_gain 5 -w_gain 2 -z_gain 0.8 -bonus_drop 0.8 -collect_data 0 -drop_value_buffer 1.0 > ${RES_FOLDER}/${FILE_NAME}"
    echo ${CMD}
    eval ${CMD}
    CMD="python3 generate_report.py --scaling_plot=1 --input_file=${FILE_NAME} --folder=${RES_FOLDER}"
    echo ${CMD}
    eval ${CMD}
    FILE_NAME="uecComposite.tmp"
    CMD="../sim/datacenter/htsim_swift_entry -o uec_entry -k 1 -nodes 1024 -q 4452000 -strat ecmp_host_random2_ecn -number_entropies 256 -kmin 20 -kmax 80 -target_rtt_percentage_over_base 50  -use_fast_increase 1 -use_super_fast_increase 1 -fast_drop 1 -linkspeed 800000 -mtu 4096 -seed 919 -queue_type composite -hop_latency 700 -switch_latency 0 -reuse_entropy 1 -goal incast_scaling_32/${Item} -ignore_ecn_data 1 -ignore_ecn_ack 1 -x_gain 0.25 -y_gain 2 -w_gain 2 -z_gain 0.8 -bonus_drop 0.8 -collect_data 0 -drop_value_buffer 1.0 > ${RES_FOLDER}/${FILE_NAME}"
    echo ${CMD}
    eval ${CMD}
    CMD="python3 generate_report.py --scaling_plot=1 --input_file=${FILE_NAME} --folder=${RES_FOLDER}"
    echo ${CMD}
    eval ${CMD}
    FILE_NAME="ndp.tmp"
    CMD="../sim/datacenter/htsim_ndp_entry_modern -o uec_entry -nodes 1024 -k 1 -kmin 20 -kmax 80 -ratio_os_stage_1 1 -cwnd 864000 -q 864000 -strat ecmp_host_random2_ecn -linkspeed 800000 -mtu 4096 -seed 95 -hop_latency 700 -switch_latency 0 -goal incast_scaling_32/${Item} -collect_data 0 -number_entropies 256 > ${RES_FOLDER}/${FILE_NAME}"
    echo ${CMD}
    eval ${CMD}
    CMD="python3 generate_report.py --scaling_plot=1 --input_file=${FILE_NAME} --folder=${RES_FOLDER}"
    echo ${CMD}
    eval ${CMD}
  done

CMD="python3 scaling_normalized.py --bdp=864000 --folder=${RES_FOLDER} --incast_degree=32 --latency=700 --link_speed=800"
echo ${CMD}
eval ${CMD}
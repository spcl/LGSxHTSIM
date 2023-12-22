import seaborn as sns
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker

# Your data
data_list_1 = [
    354.30,
    358.40,
    362.50,
    366.59,
    370.69,
    374.78,
    378.88,
    382.98,
    387.07,
    391.17,
    395.26,
    399.36,
    403.46,
    407.55,
    411.65,
    415.74,
    419.84,
    423.94,
    428.03,
    432.13,
    436.22,
    440.32,
    444.42,
    448.51,
    452.61,
    456.70,
    460.80,
    464.90,
    468.99,
    473.09,
    477.18,
    481.28,
    485.38,
    489.47,
    493.57,
    497.66,
    501.76,
    505.86,
    509.95,
    514.05,
    518.14,
    522.24,
    526.34,
    530.43,
    534.53,
    538.62,
    542.72,
    546.82,
    550.91,
    555.01,
    559.10,
    563.20,
    567.30,
    571.39,
    575.49,
    579.58,
    583.68,
    587.78,
    591.87,
    595.97,
    600.06,
    608.26,
    620.54,
    632.83,
]

data_list_2 = [
    10332,
    12970,
    27712,
    37820,
    11950,
    6904,
    9461,
    16011,
    9732,
    4377,
    2940,
    3119,
    2823,
    3108,
    2875,
    2358,
    3802,
    4643,
    4495,
    3896,
    2293,
    1325,
    1421,
    2405,
    9126,
    48755,
    130342,
    193066,
    203641,
    170236,
    165157,
    271431,
    451127,
    553217,
    509495,
    356208,
    190906,
    128339,
    131258,
    121840,
    100671,
    83218,
    76412,
    61892,
    34044,
    11759,
    2731,
    456,
    96,
    37,
    20,
    8,
    11,
    5,
    7,
    6,
    4,
    2,
    1,
    1,
    3,
    2,
    1,
    1,
]

data_list_3 = [
    354.30,
    358.40,
    362.50,
    366.59,
    370.69,
    374.78,
    378.88,
    382.98,
    387.07,
    391.17,
    395.26,
    399.36,
    403.46,
    407.55,
    411.65,
    415.74,
    419.84,
    423.94,
    428.03,
    432.13,
    436.22,
    440.32,
    444.42,
    448.51,
    452.61,
    456.70,
    460.80,
    464.90,
    468.99,
    473.09,
    477.18,
    481.28,
    485.38,
    489.47,
    493.57,
    497.66,
    501.76,
    505.86,
    509.95,
    514.05,
    518.14,
    522.24,
    526.34,
    530.43,
    534.53,
    538.62,
    542.72,
    546.82,
    550.91,
    555.01,
    559.10,
    563.20,
    567.30,
    571.39,
    575.49,
    579.58,
    583.68,
    587.78,
    591.87,
    595.97,
    600.06,
    604.16,
    608.26,
    612.35,
    616.45,
    620.54,
    624.64,
    628.74,
    632.83,
    636.93,
    641.02,
    645.12,
    649.22,
    653.31,
    657.41,
    661.50,
    665.60,
    669.70,
    673.79,
    677.89,
    681.98,
    686.08,
    690.18,
    694.27,
    698.37,
    702.46,
    706.56,
    710.66,
    714.75,
    718.85,
    722.94,
    727.04,
    731.14,
    735.23,
    739.33,
    743.42,
    747.52,
    751.62,
    755.71,
    759.81,
    763.90,
    768.00,
    772.10,
    776.19,
    780.29,
    784.38,
    788.48,
    792.58,
    796.67,
    800.77,
    804.86,
    808.96,
    813.06,
    817.15,
    821.25,
    825.34,
    829.44,
    833.54,
    837.63,
    841.73,
    845.82,
    849.92,
    854.02,
    858.11,
    862.21,
    866.30,
    870.40,
    874.50,
    878.59,
    882.69,
    886.78,
    890.88,
    894.98,
    899.07,
    903.17,
    907.26,
    911.36,
    915.46,
    919.55,
    923.65,
    927.74,
    931.84,
    935.94,
    940.03,
    944.13,
    948.22,
    952.32,
    956.42,
    960.51,
    964.61,
    968.70,
    972.80,
    976.90,
    980.99,
    985.09,
    989.18,
    993.28,
    997.38,
    1001.47,
    1005.57,
    1009.66,
    1013.76,
    1017.86,
    1021.95,
    1026.05,
    1030.14,
    1034.24,
    1038.34,
    1042.43,
    1046.53,
    1050.62,
    1054.72,
    1058.82,
    1062.91,
    1067.01,
    1071.10,
    1075.20,
    1079.30,
    1083.39,
    1091.58,
    1095.68,
    1099.78,
    1107.97,
    1112.06,
    1124.35,
    1202.18,
]

data_list_4 = [
    618,
    8833,
    1367,
    117,
    6,
    25,
    70,
    113,
    153,
    224,
    305,
    385,
    508,
    619,
    732,
    851,
    956,
    1059,
    1148,
    1245,
    1275,
    1359,
    1425,
    1473,
    1564,
    1535,
    1673,
    1665,
    1716,
    1863,
    1915,
    2077,
    2161,
    2402,
    2544,
    2658,
    2981,
    3119,
    3372,
    3705,
    3923,
    4166,
    4411,
    4711,
    4811,
    5230,
    5388,
    5601,
    6069,
    6165,
    6638,
    6989,
    7540,
    8293,
    8787,
    9674,
    10662,
    11739,
    13239,
    14614,
    16663,
    18680,
    20962,
    23279,
    26551,
    29582,
    32969,
    36874,
    40684,
    44859,
    49571,
    54033,
    59202,
    63303,
    68888,
    72953,
    77885,
    82178,
    86596,
    90901,
    94701,
    98607,
    101543,
    104640,
    107043,
    108602,
    109796,
    110135,
    110196,
    109737,
    108906,
    107393,
    106874,
    104296,
    101401,
    98446,
    95006,
    91284,
    87655,
    83416,
    79363,
    74609,
    70586,
    66616,
    61774,
    57629,
    53752,
    49355,
    45428,
    41736,
    38134,
    34622,
    31368,
    28100,
    25742,
    23189,
    20538,
    18194,
    16582,
    14536,
    12708,
    11158,
    9711,
    8530,
    7407,
    6458,
    5701,
    4905,
    4377,
    3629,
    3071,
    2714,
    2202,
    2000,
    1630,
    1461,
    1215,
    1063,
    861,
    725,
    645,
    525,
    428,
    392,
    306,
    304,
    214,
    198,
    191,
    150,
    127,
    94,
    77,
    80,
    60,
    48,
    45,
    33,
    30,
    24,
    22,
    23,
    21,
    17,
    17,
    15,
    15,
    8,
    4,
    11,
    5,
    5,
    9,
    1,
    2,
    5,
    3,
    1,
    3,
    1,
    3,
    2,
    1,
    1,
    2,
    1,
]


data = {
    'REPS_bin': data_list_1,
    'REPS_value': data_list_2,

}

data2 = {
    'Oblivious_Packet_Spray_bin': data_list_3,
    'Oblivious_Packet_Spray_value': data_list_4
}

# Create a DataFrame
import pandas as pd
df = pd.DataFrame(data)
df2 = pd.DataFrame(data2)
# Set up the matplotlib figure
plt.figure(figsize=(7.4, 5))
plt.grid()  #just add this



# Plot the data
sns.lineplot(x='REPS_bin', y='REPS_value', linewidth = 3, data=df, label='REPS', color="#3274a1")
ax =sns.lineplot(x='Oblivious_Packet_Spray_bin', y='Oblivious_Packet_Spray_value', linewidth = 3, data=df2, label='Oblivious Packet Spray', color="#3a923a")
plt.ylim(0, 600000)
plt.xlim(0, 1220)
ax.set_xticklabels([str(i) for i in ax.get_xticks()], fontsize = 14)
ax.set_yticklabels([str(round(i,1)) for i in ax.get_yticks()], fontsize = 14)
ax.yaxis.set_major_formatter(ticker.EngFormatter())
ax.set_xticklabels( ax.get_xticks().astype(int))

plt.text(560, 415000, 'REPS', color='#3274a1', ha='center', va='center', fontsize=14)
plt.text(870, 130000, 'Oblivious Packet\nSpraying', color='#3a923a', ha='center', va='center', fontsize=14)


# Set plot labels and title
plt.xlabel('Flow Completion Time (μs)', fontsize=15)
plt.ylabel('# Messages', fontsize=15)
plt.title('Impact of REPS on FCT distribution in\noversubscribed asymmetric network', fontsize=15.7)
ax.set_axisbelow(True)

# Display the legend
plt.legend([],[], frameon=False)

# Show the plot
plt.tight_layout()
plt.savefig("custom4.png", bbox_inches='tight')
plt.savefig("custom4.pdf", bbox_inches='tight')
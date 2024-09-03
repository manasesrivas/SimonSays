
#define C_1 32.70
#define Cchart_Db1	34.65
#define D_1 36.71
#define Dchart_Eb1	38.89
#define E_1 41.20
#define F_1 43.65
#define Fchart_Gb1	46.25
#define G_1 49.00
#define Gchart_Ab1	51.91
#define A_1 55.00
#define Achart_Bb1	58.27
#define B_1 61.74
#define C_2 65.41
#define Cchart_Db2	69.30
#define D_2 73.42
#define Dchart_Eb2	77.78
#define E_2 82.41
#define F_2 87.31
#define Fchart_Gb2	92.50
#define G_2 98.00
#define Gchart_Ab2	103.83
#define A_2 110.00
#define Achart_Bb2	116.54
#define B_2 123.47
#define C_3 130.81
#define Cchart_Db3	138.59
#define D_3 146.83
#define Dchart_Eb3	155.56
#define E_3 164.81
#define F_3 174.61
#define Fchart_Gb3	185.00
#define G_3 196.00
#define Gchart_Ab3	207.65
#define A_3 220.00
#define Achart_Bb3	233.08
#define B_3 246.94
#define C_4 261.63
#define Cchart_Db4	277.18
#define D_4 293.66
#define Dchart_Eb4	311.13
#define E_4 329.63
#define F_4 349.23
#define Fchart_Gb4	369.99
#define G_4 392.00
#define Gchart_Ab4	415.30
#define A_4 440.00
#define Achart_Bb4	466.16
#define B_4 493.88
#define C_5 523.25
#define Cchart_Db5	554.37
#define D_5 587.33
#define Dchart_Eb5	622.25
#define E_5 659.26
#define F_5 698.46
#define Fchart_Gb5	739.99
#define G_5 783.99
#define Gchart_Ab5	830.61
#define A_5 880.00
#define Achart_Bb5	932.33
#define B_5 987.77
#define C_6 1046.50
#define Cchart_Db6	1108.73
#define D_6 1174.66
#define Dchart_Eb6	1244.51
#define E_6 1318.51
#define F_6 1396.91
#define Fchart_Gb6	1479.98
#define G_6 1567.98
#define Gchart_Ab6	1661.22
#define A_6 1760.00
#define Achart_Bb6	1864.66
#define B_6 1975.53
#define C_7 2093.00
#define Cchart_Db7	2217.46
#define D_7 2349.32
#define Dchart_Eb7	2489.02
#define E_7 2637.02
#define F_7 2793.83
#define Fchart_Gb7	2959.96
#define G_7 3135.96
#define Gchart_Ab7	3322.44
#define A_7 3520.00
#define Achart_Bb7	3729.31
#define B_7 3951.07
#define C_8 4186.01

#define Blanca 2 // Dura 2 tiempos.
#define Negra 1// Dura 1 tiempo.
#define Corchea 1/2// Dura 1/2 tiempo.
#define Semicorchea 1/4 //Dura 1/4 tiempo.
// #define Fusa // Dura 1/8 tiempo (más raramente usada en la práctica cotidiana).

#define MUTE 0


struct pentagrama
{
    float note;
    float tempo;
};

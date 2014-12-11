from sage.interfaces.tides import *
VSHIFT = (-0.01895)
THSYN = (-0.03)
ESYN = (-0.0625)
GSYN = (-0.0005*0.8)
ENA = (0.045)
GNA = (160.0)
EK = (-0.07)
GK2 = (30.0)
EL = (-0.046)
GL = (8.0)
C = (0.5)
TNA = (0.0405)
TK2 = (0.9)
IAPP = (0.006)

var('x0,x1,x2,x3,x4,x5,x6,x7,x8')

gamma0 = 1.0 / (1.0 + exp (-1000.0*(x0 - THSYN)));
gamma1 = 1.0 / (1.0 + exp (-1000.0*(x3 - THSYN)));
gamma2 = 1.0 / (1.0 + exp (-1000.0*(x6 - THSYN)));


I_syn_0 = GSYN * (x0 - ESYN) * (gamma1+gamma2);
I_syn_1 = GSYN * (x3 - ESYN) * (gamma0+gamma2);
I_syn_2 = GSYN * (x6 - ESYN) * (gamma0+gamma1);

m_NaInf_0 = 1.0 / (1.0 + exp (-150.0*(x0 + 0.0305)));
m_NaInf_1 = 1.0 / (1.0 + exp (-150.0*(x3 + 0.0305)));
m_NaInf_2 = 1.0 / (1.0 + exp (-150.0*(x6 + 0.0305)));

h_NaInf_0 = 1.0 / (1.0 + exp (500.0*(x0 + 0.0325)));
h_NaInf_1 = 1.0 / (1.0 + exp (500.0*(x3 + 0.0325)));
h_NaInf_2 = 1.0 / (1.0 + exp (500.0*(x6 + 0.0325)));

m_K2Inf_0 = 1.0 / (1.0 + exp (-83.0*(x0 + 0.018 + VSHIFT)));
m_K2Inf_1 = 1.0 / (1.0 + exp (-83.0*(x3 + 0.018 + VSHIFT)));
m_K2Inf_2 = 1.0 / (1.0 + exp (-83.0*(x6 + 0.018 + VSHIFT)));

I_Na_0 = GNA * (x0 - ENA) * x1 * m_NaInf_0 * m_NaInf_0 * m_NaInf_0;
I_Na_1 = GNA * (x3 - ENA) * x4 * m_NaInf_1 * m_NaInf_1 * m_NaInf_1;
I_Na_2 = GNA * (x6 - ENA) * x7 * m_NaInf_2 * m_NaInf_2 * m_NaInf_2;

I_K2_0 = GK2 * (x0 - EK) * x2 * x2;
I_K2_1 = GK2 * (x3 - EK) * x5 * x5;
I_K2_2 = GK2 * (x6 - EK) * x8 * x8;

I_L_0 = GL * (x0 - EL);
I_L_1 = GL * (x3 - EL);
I_L_2 = GL * (x6 - EL);

f0 = [(-I_Na_0 - I_K2_0 - I_L_0 - IAPP + I_syn_0) / C, (h_NaInf_0 - x1) / TNA, (m_K2Inf_0 - x2) / TK2]
f1 = [(-I_Na_1 - I_K2_1 - I_L_1 - IAPP + I_syn_1) / C, (h_NaInf_1 - x4) / TNA, (m_K2Inf_1 - x5) / TK2]
f2 = [(-I_Na_2 - I_K2_2 - I_L_2 - IAPP + I_syn_2) / C, (h_NaInf_2 - x7) / TNA, (m_K2Inf_2 - x8) / TK2]

f(t,x0,x1,x2,x3,x4,x5,x6,x7,x8) = f0 + f1 + f2


ics = [-0.04, 0.0210000000000000, 0.01000000000000000, -0.04, 0.0310000000000000, 0.00000000000000000, -0.01, 0.0210000000000000, 0.01000000000000000]

intfile = '/home/marcos/testTides/test01/testSage.c'
drfile = '/home/marcos/testTides/test01/dr_testSage.c'
t = 100

%time genfiles_mintides(intfile, drfile, f, ics, 0, t, t, output = 'Screen')


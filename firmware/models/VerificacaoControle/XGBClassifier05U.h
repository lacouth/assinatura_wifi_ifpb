#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class XGBClassifier05U {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[18] = { 0.0f };
                        // tree #1
                        if (x[22] <= -79.0) {
                            votes[0] += -0.350831;
                        }

                        else {
                            votes[0] += 1.3574053;
                        }

                        // tree #2
                        if (x[25] <= -90.0) {
                            votes[1] += -0.34725833;
                        }

                        else {
                            votes[1] += 1.3574053;
                        }

                        // tree #3
                        if (x[22] <= -91.0) {
                            if (x[26] <= -90.0) {
                                votes[2] += 0.9649021;
                            }

                            else {
                                votes[2] += -0.2461545;
                            }
                        }

                        else {
                            votes[2] += -0.32325816;
                        }

                        // tree #4
                        if (x[18] <= -86.0) {
                            votes[3] += -0.40176174;
                        }

                        else {
                            votes[3] += 2.6400094;
                        }

                        // tree #5
                        if (x[14] <= -85.0) {
                            votes[4] += -0.3499724;
                        }

                        else {
                            votes[4] += 1.3574053;
                        }

                        // tree #6
                        if (x[3] <= -77.0) {
                            votes[5] += -0.3975274;
                        }

                        else {
                            votes[5] += 2.1052713;
                        }

                        // tree #7
                        if (x[26] <= -81.0) {
                            votes[6] += -0.34909135;
                        }

                        else {
                            votes[6] += 0.9649021;
                        }

                        // tree #8
                        if (x[26] <= -77.0) {
                            votes[7] += -0.39587587;
                        }

                        else {
                            votes[7] += 1.7684282;
                        }

                        // tree #9
                        if (x[14] <= -77.0) {
                            votes[8] += -0.3999996;
                        }

                        else {
                            votes[8] += 1.5600061;
                        }

                        // tree #10
                        if (x[42] <= -80.0) {
                            votes[9] += -0.34630442;
                        }

                        else {
                            votes[9] += 0.535079;
                        }

                        // tree #11
                        if (x[42] <= -79.0) {
                            votes[10] += -0.35248423;
                        }

                        else {
                            votes[10] += 1.3574053;
                        }

                        // tree #12
                        if (x[11] <= -70.0) {
                            votes[11] += -0.39953065;
                        }

                        else {
                            votes[11] += 2.6400094;
                        }

                        // tree #13
                        if (x[3] <= -83.0) {
                            votes[12] += -0.33243868;
                        }

                        else {
                            if (x[22] <= -89.0) {
                                votes[12] += 1.3574053;
                            }

                            else {
                                votes[12] += -0.2461545;
                            }
                        }

                        // tree #14
                        if (x[33] <= -91.0) {
                            votes[13] += -0.3975274;
                        }

                        else {
                            votes[13] += 2.4805453;
                        }

                        // tree #15
                        if (x[14] <= -90.0) {
                            votes[14] += -0.351668;
                        }

                        else {
                            votes[14] += 0.9649021;
                        }

                        // tree #16
                        if (x[29] <= -90.0) {
                            votes[15] += -0.35627902;
                        }

                        else {
                            votes[15] += 1.3574053;
                        }

                        // tree #17
                        if (x[28] <= -89.0) {
                            votes[16] += -0.34909135;
                        }

                        else {
                            votes[16] += 1.3574053;
                        }

                        // tree #18
                        if (x[35] <= -85.0) {
                            votes[17] += -0.351668;
                        }

                        else {
                            votes[17] += 1.2904866;
                        }

                        // tree #19
                        if (x[0] <= -90.0) {
                            votes[0] += -0.34215078;
                        }

                        else {
                            votes[0] += 0.9093092;
                        }

                        // tree #20
                        if (x[25] <= -79.0) {
                            votes[1] += -0.34581205;
                        }

                        else {
                            votes[1] += 1.2281736;
                        }

                        // tree #21
                        if (x[43] <= -84.0) {
                            votes[2] += -0.34923843;
                        }

                        else {
                            votes[2] += 0.87551844;
                        }

                        // tree #22
                        if (x[18] <= -86.0) {
                            votes[3] += -0.3555033;
                        }

                        else {
                            votes[3] += 0.47839555;
                        }

                        // tree #23
                        if (x[15] <= -74.0) {
                            votes[4] += -0.32630622;
                        }

                        else {
                            votes[4] += 0.12932575;
                        }

                        // tree #24
                        if (x[11] <= -76.0) {
                            votes[5] += -0.40642723;
                        }

                        else {
                            votes[5] += 0.52229124;
                        }

                        // tree #25
                        if (x[26] <= -77.0) {
                            votes[6] += -0.327396;
                        }

                        else {
                            votes[6] += 0.120111085;
                        }

                        // tree #26
                        if (x[2] <= -79.0) {
                            votes[7] += -0.403545;
                        }

                        else {
                            if (x[42] <= -82.0) {
                                votes[7] += 0.11978751;
                            }

                            else {
                                votes[7] += 0.9345345;
                            }
                        }

                        // tree #27
                        if (x[34] <= -84.0) {
                            votes[8] += -0.39192003;
                        }

                        else {
                            if (x[26] <= -87.0) {
                                votes[8] += 0.13014461;
                            }

                            else {
                                votes[8] += 1.0710438;
                            }
                        }

                        // tree #28
                        if (x[42] <= -73.0) {
                            votes[9] += -0.3193743;
                        }

                        else {
                            votes[9] += 1.318283;
                        }

                        // tree #29
                        if (x[28] <= -89.0) {
                            votes[10] += -0.35419288;
                        }

                        else {
                            votes[10] += 0.9158985;
                        }

                        // tree #30
                        if (x[10] <= -70.0) {
                            votes[11] += -0.35992774;
                        }

                        else {
                            votes[11] += 0.4818506;
                        }

                        // tree #31
                        if (x[20] <= -89.0) {
                            votes[12] += -0.34791547;
                        }

                        else {
                            votes[12] += 1.1796334;
                        }

                        // tree #32
                        if (x[32] <= -89.0) {
                            votes[13] += -0.36465824;
                        }

                        else {
                            votes[13] += 0.4946311;
                        }

                        // tree #33
                        if (x[35] <= -81.0) {
                            votes[14] += -0.33221194;
                        }

                        else {
                            votes[14] += 0.9831611;
                        }

                        // tree #34
                        if (x[28] <= -88.0) {
                            votes[15] += -0.33262393;
                        }

                        else {
                            if (x[22] <= -86.0) {
                                votes[15] += 0.55821806;
                            }

                            else {
                                votes[15] += 0.13297582;
                            }
                        }

                        // tree #35
                        if (x[30] <= -83.0) {
                            votes[16] += -0.35399845;
                        }

                        else {
                            votes[16] += 0.92925215;
                        }

                        // tree #36
                        if (x[34] <= -76.0) {
                            votes[17] += -0.35853648;
                        }

                        else {
                            votes[17] += 0.80084497;
                        }

                        // tree #37
                        if (x[30] <= -75.0) {
                            votes[0] += -0.3171059;
                        }

                        else {
                            votes[0] += 0.61309075;
                        }

                        // tree #38
                        if (x[24] <= -61.0) {
                            votes[1] += -0.342127;
                        }

                        else {
                            votes[1] += 0.525521;
                        }

                        // tree #39
                        if (x[43] <= -85.0) {
                            votes[2] += -0.31001136;
                        }

                        else {
                            if (x[27] <= -91.0) {
                                votes[2] += 0.6779568;
                            }

                            else {
                                votes[2] += -0.2792739;
                            }
                        }

                        // tree #40
                        if (x[18] <= -86.0) {
                            votes[3] += -0.32723773;
                        }

                        else {
                            votes[3] += 0.3381223;
                        }

                        // tree #41
                        if (x[14] <= -73.0) {
                            votes[4] += -0.3230815;
                        }

                        else {
                            votes[4] += 1.2079377;
                        }

                        // tree #42
                        if (x[10] <= -77.0) {
                            votes[5] += -0.3681084;
                        }

                        else {
                            if (x[23] <= -85.0) {
                                votes[5] += -0.0655256;
                            }

                            else {
                                votes[5] += 0.42931685;
                            }
                        }

                        // tree #43
                        if (x[0] <= -90.0) {
                            votes[6] += -0.3045908;
                        }

                        else {
                            votes[6] += 1.234298;
                        }

                        // tree #44
                        if (x[3] <= -80.0) {
                            votes[7] += -0.40285572;
                        }

                        else {
                            if (x[26] <= -84.0) {
                                votes[7] += -0.2180142;
                            }

                            else {
                                votes[7] += 0.6614942;
                            }
                        }

                        // tree #45
                        if (x[27] <= -88.0) {
                            votes[8] += -0.3876155;
                        }

                        else {
                            if (x[14] <= -90.0) {
                                votes[8] += -0.2404987;
                            }

                            else {
                                votes[8] += 0.6327449;
                            }
                        }

                        // tree #46
                        if (x[26] <= -84.0) {
                            votes[9] += -0.3192676;
                        }

                        else {
                            votes[9] += 0.27959865;
                        }

                        // tree #47
                        if (x[42] <= -65.0) {
                            votes[10] += -0.37536952;
                        }

                        else {
                            votes[10] += 0.4485022;
                        }

                        // tree #48
                        if (x[10] <= -70.0) {
                            votes[11] += -0.3335038;
                        }

                        else {
                            votes[11] += 0.34937796;
                        }

                        // tree #49
                        if (x[20] <= -89.0) {
                            votes[12] += -0.3047304;
                        }

                        else {
                            votes[12] += 0.4522801;
                        }

                        // tree #50
                        if (x[33] <= -91.0) {
                            votes[13] += -0.3245562;
                        }

                        else {
                            votes[13] += 0.40854773;
                        }

                        // tree #51
                        if (x[25] <= -86.0) {
                            votes[14] += -0.33826622;
                        }

                        else {
                            votes[14] += 0.9370557;
                        }

                        // tree #52
                        if (x[42] <= -84.0) {
                            votes[15] += -0.32708624;
                        }

                        else {
                            if (x[2] <= -85.0) {
                                votes[15] += 0.6900167;
                            }

                            else {
                                votes[15] += -0.23913363;
                            }
                        }

                        // tree #53
                        if (x[28] <= -85.0) {
                            votes[16] += -0.30943438;
                        }

                        else {
                            votes[16] += 0.69207174;
                        }

                        // tree #54
                        if (x[34] <= -64.0) {
                            votes[17] += -0.34508306;
                        }

                        else {
                            votes[17] += 0.7201807;
                        }

                        // tree #55
                        if (x[30] <= -75.0) {
                            votes[0] += -0.26477632;
                        }

                        else {
                            votes[0] += 0.43588853;
                        }

                        // tree #56
                        if (x[24] <= -61.0) {
                            votes[1] += -0.3018809;
                        }

                        else {
                            votes[1] += 0.3666422;
                        }

                        // tree #57
                        if (x[22] <= -91.0) {
                            if (x[42] <= -85.0) {
                                votes[2] += -0.21750598;
                            }

                            else {
                                votes[2] += 0.40246758;
                            }
                        }

                        else {
                            votes[2] += -0.29085472;
                        }

                        // tree #58
                        if (x[18] <= -86.0) {
                            votes[3] += -0.29423168;
                        }

                        else {
                            votes[3] += 0.27202883;
                        }

                        // tree #59
                        if (x[14] <= -64.0) {
                            votes[4] += -0.30738592;
                        }

                        else {
                            votes[4] += 0.5247026;
                        }

                        // tree #60
                        if (x[10] <= -77.0) {
                            votes[5] += -0.30863455;
                        }

                        else {
                            if (x[3] <= -72.0) {
                                votes[5] += 0.066732995;
                            }

                            else {
                                votes[5] += 0.27859885;
                            }
                        }

                        // tree #61
                        if (x[26] <= -77.0) {
                            votes[6] += -0.28775662;
                        }

                        else {
                            votes[6] += 0.53396004;
                        }

                        // tree #62
                        if (x[26] <= -71.0) {
                            votes[7] += -0.34387264;
                        }

                        else {
                            votes[7] += 0.40994176;
                        }

                        // tree #63
                        if (x[26] <= -87.0) {
                            votes[8] += -0.32663354;
                        }

                        else {
                            if (x[14] <= -75.0) {
                                votes[8] += -0.036338832;
                            }

                            else {
                                votes[8] += 0.33925262;
                            }
                        }

                        // tree #64
                        if (x[42] <= -70.0) {
                            votes[9] += -0.27490625;
                        }

                        else {
                            votes[9] += 0.37398776;
                        }

                        // tree #65
                        if (x[42] <= -63.0) {
                            votes[10] += -0.3697019;
                        }

                        else {
                            votes[10] += 0.6324732;
                        }

                        // tree #66
                        if (x[10] <= -70.0) {
                            votes[11] += -0.2914341;
                        }

                        else {
                            votes[11] += 0.27007222;
                        }

                        // tree #67
                        if (x[20] <= -89.0) {
                            votes[12] += -0.27143285;
                        }

                        else {
                            votes[12] += 0.25735286;
                        }

                        // tree #68
                        if (x[22] <= -81.0) {
                            votes[13] += -0.28097245;
                        }

                        else {
                            votes[13] += 0.23824404;
                        }

                        // tree #69
                        if (x[24] <= -87.0) {
                            votes[14] += -0.29250565;
                        }

                        else {
                            votes[14] += 0.48762107;
                        }

                        // tree #70
                        if (x[3] <= -89.0) {
                            if (x[42] <= -84.0) {
                                votes[15] += -0.22186688;
                            }

                            else {
                                votes[15] += 0.6280274;
                            }
                        }

                        else {
                            votes[15] += -0.3135694;
                        }

                        // tree #71
                        if (x[28] <= -82.0) {
                            votes[16] += -0.2921646;
                        }

                        else {
                            votes[16] += 0.37032858;
                        }

                        // tree #72
                        if (x[34] <= -64.0) {
                            votes[17] += -0.30153963;
                        }

                        else {
                            votes[17] += 0.42255282;
                        }

                        // tree #73
                        if (x[22] <= -78.0) {
                            votes[0] += -0.21658643;
                        }

                        else {
                            votes[0] += 0.12690513;
                        }

                        // tree #74
                        if (x[31] <= -88.0) {
                            votes[1] += -0.21096388;
                        }

                        else {
                            votes[1] += 0.10446846;
                        }

                        // tree #75
                        if (x[3] <= -85.0) {
                            votes[2] += -0.2663457;
                        }

                        else {
                            if (x[29] <= -89.0) {
                                votes[2] += -0.049639944;
                            }

                            else {
                                votes[2] += 0.25390399;
                            }
                        }

                        // tree #76
                        if (x[18] <= -90.0) {
                            votes[3] += -0.25282833;
                        }

                        else {
                            votes[3] += 0.22725892;
                        }

                        // tree #77
                        if (x[14] <= -64.0) {
                            votes[4] += -0.25855654;
                        }

                        else {
                            votes[4] += 0.35654163;
                        }

                        // tree #78
                        if (x[10] <= -77.0) {
                            votes[5] += -0.27534798;
                        }

                        else {
                            if (x[22] <= -84.0) {
                                votes[5] += 0.055637296;
                            }

                            else {
                                votes[5] += 0.24421413;
                            }
                        }

                        // tree #79
                        if (x[0] <= -90.0) {
                            votes[6] += -0.25516677;
                        }

                        else {
                            votes[6] += 0.31897956;
                        }

                        // tree #80
                        if (x[2] <= -79.0) {
                            votes[7] += -0.25517818;
                        }

                        else {
                            votes[7] += 0.26906568;
                        }

                        // tree #81
                        if (x[34] <= -84.0) {
                            votes[8] += -0.27082276;
                        }

                        else {
                            votes[8] += 0.27966928;
                        }

                        // tree #82
                        if (x[26] <= -84.0) {
                            votes[9] += -0.25771114;
                        }

                        else {
                            votes[9] += 0.34668472;
                        }

                        // tree #83
                        if (x[42] <= -63.0) {
                            votes[10] += -0.31976482;
                        }

                        else {
                            votes[10] += 0.45074245;
                        }

                        // tree #84
                        if (x[11] <= -79.0) {
                            votes[11] += -0.24421306;
                        }

                        else {
                            votes[11] += 0.14847253;
                        }

                        // tree #85
                        if (x[20] <= -89.0) {
                            votes[12] += -0.24167609;
                        }

                        else {
                            votes[12] += 0.2589135;
                        }

                        // tree #86
                        if (x[33] <= -91.0) {
                            votes[13] += -0.26503;
                        }

                        else {
                            votes[13] += 0.2619489;
                        }

                        // tree #87
                        if (x[25] <= -86.0) {
                            votes[14] += -0.24241908;
                        }

                        else {
                            votes[14] += 0.33712968;
                        }

                        // tree #88
                        if (x[42] <= -84.0) {
                            votes[15] += -0.22034633;
                        }

                        else {
                            if (x[3] <= -89.0) {
                                votes[15] += 0.39761874;
                            }

                            else {
                                votes[15] += 0.03566168;
                            }
                        }

                        // tree #89
                        if (x[29] <= -82.0) {
                            votes[16] += -0.27405486;
                        }

                        else {
                            votes[16] += 0.31098664;
                        }

                        // tree #90
                        if (x[34] <= -76.0) {
                            votes[17] += -0.22555017;
                        }

                        else {
                            votes[17] += 0.26954937;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 18; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "Auditório de Eng. Elétrica";
                            case 1:
                            return "Coordenação de Eng. Elétrica";
                            case 2:
                            return "Coordenação de pós em Eng. Elétrica";
                            case 3:
                            return "Lab. Analítico";
                            case 4:
                            return "Lab. Informática 09";
                            case 5:
                            return "Lab. de Ciências";
                            case 6:
                            return "Lab. de Instrumentação biomédica";
                            case 7:
                            return "Lab. de Medição e Calibração";
                            case 8:
                            return "Lab. de Telecomunicações";
                            case 9:
                            return "Lab. de fibras ópticas";
                            case 10:
                            return "Lab. de redes convergentes";
                            case 11:
                            return "Lab. química 01";
                            case 12:
                            return "Lab. química 03";
                            case 13:
                            return "Núcleo de Pesquisa e Atendimento";
                            case 14:
                            return "PET Eng. Elétrica";
                            case 15:
                            return "Pesquisa em Eng. Elétrica";
                            case 16:
                            return "Práticas didáticas";
                            case 17:
                            return "Sala dos professores";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
            };
        }
    }
}

/*
uint32_t macHashList[] = {
    0xC133E933, 0x2F3D881F, 0x361FBAED, 0xD811DBC1, 0x4EF05FFF, 
    0xA0FE3ED3, 0x2D414D63, 0xC34F2C4F, 0x0AA9BDE5, 0xE4A7DCC9, 
    0x47705924, 0xA97E3808, 0x1AE520DF, 0xF4EB41F3, 0xBF082D99, 
    0x51064CB5, 0xC9D46C09, 0x27DA0D25, 0x5AF0917B, 0xB4FEF057, 
    0x0E59C162, 0xE057A04E, 0x22608A00, 0xCC6EEB2C, 0x80FDF44F, 
    0x6EF39563, 0xABD0A78C, 0x45DEC6A0, 0xAA256287, 0x442B03AB, 
    0x0407B1BC, 0xEA09D090, 0xC06196C0, 0x2E6FF7EC, 0x16B73528, 
    0xF8B95404, 0x3AC41145, 0xD4CA7069, 0x812635E3, 0x6F2854CF, 
    0xE0AD1FD9, 0x0EA37EF5, 0x7F0CD1C6, 0x9102B0EA, 
};

const char* idxToLabel(uint8_t classIdx) {
    switch (classIdx) {
        case 0:
        return "Auditório de Eng. Elétrica";
        case 1:
        return "Coordenação de Eng. Elétrica";
        case 2:
        return "Coordenação de pós em Eng. Elétrica";
        case 3:
        return "Lab. Analítico";
        case 4:
        return "Lab. Informática 09";
        case 5:
        return "Lab. de Ciências";
        case 6:
        return "Lab. de Instrumentação biomédica";
        case 7:
        return "Lab. de Medição e Calibração";
        case 8:
        return "Lab. de Telecomunicações";
        case 9:
        return "Lab. de fibras ópticas";
        case 10:
        return "Lab. de redes convergentes";
        case 11:
        return "Lab. química 01";
        case 12:
        return "Lab. química 03";
        case 13:
        return "Núcleo de Pesquisa e Atendimento";
        case 14:
        return "PET Eng. Elétrica";
        case 15:
        return "Pesquisa em Eng. Elétrica";
        case 16:
        return "Práticas didáticas";
        case 17:
        return "Sala dos professores";
        default:
        return "Houston we have a problem";
    }
}

# 3. Modelo Utilizado

xgb_model = xgb.XGBClassifier(
    objective="multi:softprob",
    #num_class=24,                     # Número de Classes
    n_estimators=5,                  # Número de árvores de decisão por classe.
    max_depth=2,                      # Profundidade máxima de cada árvore.
    learning_rate=0.8,                # Controla o tamanho do passo de aprendizado.
    subsample=0.8,                    # Significa que cada árvore usa apenas 80% das amostras.
    colsample_bytree=0.8,             # Cada árvore usa apenas 80% das features.
    eval_metric='merror', #eval_metric='mlogloss'            # Define a função de erro usada na classificação multiclasse
    #random_state=42
)

Rodada 1 - Acurácia média: 0.8833
Rodada 2 - Acurácia média: 0.9250
Rodada 3 - Acurácia média: 0.9000
Rodada 4 - Acurácia média: 0.9167
Rodada 5 - Acurácia média: 0.9000
Rodada 6 - Acurácia média: 0.9000
Rodada 7 - Acurácia média: 0.9000
Rodada 8 - Acurácia média: 0.9083
Rodada 9 - Acurácia média: 0.8750
Rodada 10 - Acurácia média: 0.8833
Rodada 11 - Acurácia média: 0.9083
Rodada 12 - Acurácia média: 0.8833
Rodada 13 - Acurácia média: 0.9250
Rodada 14 - Acurácia média: 0.8667
Rodada 15 - Acurácia média: 0.9083
Rodada 16 - Acurácia média: 0.9250
Rodada 17 - Acurácia média: 0.8917
Rodada 18 - Acurácia média: 0.9167
Rodada 19 - Acurácia média: 0.8833
Rodada 20 - Acurácia média: 0.9167

======================================
=========== Modelo XGBoost ===========
======================================
Acurácia média (20 execuções): 0.9008
Desvio padrão entre execuções: 0.0171

Acurácia no conjunto de teste: 1.0
Tentativa:  38

Atingiu 100.00% de acurácia!
*/
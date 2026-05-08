#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class XGBClassifier10U {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float votes[18] = { 0.0f };
                        // tree #1
                        if (x[37] <= -85.0) {
                            votes[0] += -0.43050292;
                        }

                        else {
                            votes[0] += 3.1514642;
                        }

                        // tree #2
                        if (x[28] <= -87.0) {
                            votes[1] += -0.42970857;
                        }

                        else {
                            votes[1] += 2.4102128;
                        }

                        // tree #3
                        if (x[14] <= -91.0) {
                            if (x[41] <= -89.0) {
                                votes[2] += 3.2933447;
                            }

                            else {
                                votes[2] += -0.34838772;
                            }
                        }

                        else {
                            votes[2] += -0.41953424;
                        }

                        // tree #4
                        if (x[22] <= -91.0) {
                            if (x[13] <= -81.0) {
                                votes[3] += -0.46883157;
                            }

                            else {
                                votes[3] += 1.127478;
                            }
                        }

                        else {
                            votes[3] += 3.2637486;
                        }

                        // tree #5
                        if (x[18] <= -76.0) {
                            votes[4] += -0.4329364;
                        }

                        else {
                            votes[4] += 1.9686468;
                        }

                        // tree #6
                        if (x[2] <= -72.0) {
                            votes[5] += -0.46942207;
                        }

                        else {
                            votes[5] += 3.2637486;
                        }

                        // tree #7
                        if (x[30] <= -74.0) {
                            votes[6] += -0.43024167;
                        }

                        else {
                            votes[6] += 2.2195766;
                        }

                        // tree #8
                        if (x[30] <= -72.0) {
                            votes[7] += -0.46804616;
                        }

                        else {
                            votes[7] += 2.98885;
                        }

                        // tree #9
                        if (x[48] <= -64.0) {
                            votes[8] += -0.43050292;
                        }

                        else {
                            votes[8] += 2.8517787;
                        }

                        // tree #10
                        if (x[49] <= -64.0) {
                            votes[9] += -0.4299769;
                        }

                        else {
                            votes[9] += 2.6104167;
                        }

                        // tree #11
                        if (x[18] <= -84.0) {
                            votes[10] += -0.46970564;
                        }

                        else {
                            if (x[18] <= -73.0) {
                                votes[10] += 3.2637486;
                            }

                            else {
                                votes[10] += 0.18121009;
                            }
                        }

                        // tree #12
                        if (x[14] <= -63.0) {
                            votes[11] += -0.46942207;
                        }

                        else {
                            votes[11] += 3.4941318;
                        }

                        // tree #13
                        if (x[42] <= -87.0) {
                            votes[12] += -0.43360838;
                        }

                        else {
                            votes[12] += 2.8517787;
                        }

                        // tree #14
                        if (x[26] <= -78.0) {
                            if (x[39] <= -88.0) {
                                votes[13] += -0.4672028;
                            }

                            else {
                                votes[13] += 0.13500203;
                            }
                        }

                        else {
                            votes[13] += 3.1062083;
                        }

                        // tree #15
                        if (x[28] <= -86.0) {
                            votes[14] += -0.43200034;
                        }

                        else {
                            votes[14] += 2.8975499;
                        }

                        // tree #16
                        if (x[34] <= -87.0) {
                            votes[15] += -0.43024167;
                        }

                        else {
                            votes[15] += 1.5995024;
                        }

                        // tree #17
                        if (x[34] <= -83.0) {
                            votes[16] += -0.43126625;
                        }

                        else {
                            votes[16] += 2.8517787;
                        }

                        // tree #18
                        if (x[40] <= -75.0) {
                            votes[17] += -0.43270677;
                        }

                        else {
                            votes[17] += 2.8517787;
                        }

                        // tree #19
                        if (x[36] <= -80.0) {
                            votes[0] += -0.53511226;
                        }

                        else {
                            votes[0] += 0.6497628;
                        }

                        // tree #20
                        if (x[28] <= -82.0) {
                            votes[1] += -0.44251266;
                        }

                        else {
                            votes[1] += 1.3108277;
                        }

                        // tree #21
                        if (x[2] <= -89.0) {
                            votes[2] += -0.51259816;
                        }

                        else {
                            if (x[2] <= -84.0) {
                                votes[2] += 0.25025052;
                            }

                            else {
                                votes[2] += -0.32175732;
                            }
                        }

                        // tree #22
                        if (x[13] <= -83.0) {
                            votes[3] += -0.40703824;
                        }

                        else {
                            if (x[14] <= -80.0) {
                                votes[3] += -0.2737901;
                            }

                            else {
                                votes[3] += 0.78719926;
                            }
                        }

                        // tree #23
                        if (x[18] <= -66.0) {
                            votes[4] += -0.40258864;
                        }

                        else {
                            votes[4] += 1.0416136;
                        }

                        // tree #24
                        if (x[2] <= -74.0) {
                            votes[5] += -0.40964094;
                        }

                        else {
                            votes[5] += 0.74777704;
                        }

                        // tree #25
                        if (x[36] <= -90.0) {
                            if (x[26] <= -83.0) {
                                votes[6] += -0.43000773;
                            }

                            else {
                                votes[6] += 0.19376332;
                            }
                        }

                        else {
                            if (x[2] <= -89.0) {
                                votes[6] += 0.10117315;
                            }

                            else {
                                votes[6] += 1.447241;
                            }
                        }

                        // tree #26
                        if (x[30] <= -66.0) {
                            if (x[48] <= -77.0) {
                                votes[7] += -0.4752184;
                            }

                            else {
                                votes[7] += 0.023306908;
                            }
                        }

                        else {
                            votes[7] += 0.49292848;
                        }

                        // tree #27
                        if (x[30] <= -78.0) {
                            votes[8] += -0.4976254;
                        }

                        else {
                            votes[8] += 0.9308939;
                        }

                        // tree #28
                        if (x[49] <= -63.0) {
                            if (x[14] <= -85.0) {
                                votes[9] += -0.031330552;
                            }

                            else {
                                votes[9] += -0.39190614;
                            }
                        }

                        else {
                            if (x[30] <= -78.0) {
                                votes[9] += 1.159294;
                            }

                            else {
                                votes[9] += -0.3808155;
                            }
                        }

                        // tree #29
                        if (x[18] <= -84.0) {
                            votes[10] += -0.41079175;
                        }

                        else {
                            if (x[18] <= -66.0) {
                                votes[10] += 0.64190185;
                            }

                            else {
                                votes[10] += -0.28448892;
                            }
                        }

                        // tree #30
                        if (x[14] <= -58.0) {
                            votes[11] += -0.46307006;
                        }

                        else {
                            votes[11] += 0.5167491;
                        }

                        // tree #31
                        if (x[42] <= -85.0) {
                            votes[12] += -0.40747896;
                        }

                        else {
                            votes[12] += 0.6453797;
                        }

                        // tree #32
                        if (x[39] <= -89.0) {
                            votes[13] += -0.46149927;
                        }

                        else {
                            votes[13] += 0.6953967;
                        }

                        // tree #33
                        if (x[41] <= -81.0) {
                            votes[14] += -0.5012162;
                        }

                        else {
                            votes[14] += 0.82028913;
                        }

                        // tree #34
                        if (x[35] <= -83.0) {
                            votes[15] += -0.3921776;
                        }

                        else {
                            votes[15] += 0.97411156;
                        }

                        // tree #35
                        if (x[37] <= -87.0) {
                            votes[16] += -0.5237869;
                        }

                        else {
                            votes[16] += 0.8982675;
                        }

                        // tree #36
                        if (x[40] <= -66.0) {
                            votes[17] += -0.41816023;
                        }

                        else {
                            votes[17] += 0.69100684;
                        }

                        // tree #37
                        if (x[36] <= -80.0) {
                            votes[0] += -0.42159367;
                        }

                        else {
                            votes[0] += 0.43512538;
                        }

                        // tree #38
                        if (x[28] <= -72.0) {
                            votes[1] += -0.44468522;
                        }

                        else {
                            votes[1] += 0.52370036;
                        }

                        // tree #39
                        if (x[49] <= -85.0) {
                            votes[2] += -0.36719415;
                        }

                        else {
                            if (x[31] <= -89.0) {
                                votes[2] += 0.4087019;
                            }

                            else {
                                votes[2] += -0.27367395;
                            }
                        }

                        // tree #40
                        if (x[15] <= -74.0) {
                            votes[3] += -0.3743905;
                        }

                        else {
                            if (x[2] <= -89.0) {
                                votes[3] += 0.66289794;
                            }

                            else {
                                votes[3] += -0.26028576;
                            }
                        }

                        // tree #41
                        if (x[18] <= -73.0) {
                            votes[4] += -0.33630204;
                        }

                        else {
                            votes[4] += 0.5195662;
                        }

                        // tree #42
                        if (x[2] <= -72.0) {
                            votes[5] += -0.37290102;
                        }

                        else {
                            votes[5] += 0.3938746;
                        }

                        // tree #43
                        if (x[36] <= -90.0) {
                            if (x[27] <= -86.0) {
                                votes[6] += -0.37007943;
                            }

                            else {
                                votes[6] += 0.19324273;
                            }
                        }

                        else {
                            if (x[2] <= -89.0) {
                                votes[6] += 0.09781987;
                            }

                            else {
                                votes[6] += 0.533531;
                            }
                        }

                        // tree #44
                        if (x[30] <= -66.0) {
                            if (x[2] <= -81.0) {
                                votes[7] += -0.45274857;
                            }

                            else {
                                votes[7] += 0.20539084;
                            }
                        }

                        else {
                            votes[7] += 0.4035796;
                        }

                        // tree #45
                        if (x[30] <= -78.0) {
                            votes[8] += -0.40985852;
                        }

                        else {
                            if (x[34] <= -92.0) {
                                votes[8] += -0.04024755;
                            }

                            else {
                                votes[8] += 0.54138464;
                            }
                        }

                        // tree #46
                        if (x[48] <= -64.0) {
                            votes[9] += -0.32968307;
                        }

                        else {
                            if (x[30] <= -78.0) {
                                votes[9] += 0.53212947;
                            }

                            else {
                                votes[9] += -0.31960428;
                            }
                        }

                        // tree #47
                        if (x[18] <= -84.0) {
                            votes[10] += -0.3641751;
                        }

                        else {
                            if (x[41] <= -82.0) {
                                votes[10] += -0.043320183;
                            }

                            else {
                                votes[10] += 0.52684605;
                            }
                        }

                        // tree #48
                        if (x[14] <= -58.0) {
                            votes[11] += -0.3980318;
                        }

                        else {
                            votes[11] += 0.40971565;
                        }

                        // tree #49
                        if (x[42] <= -82.0) {
                            votes[12] += -0.37839246;
                        }

                        else {
                            votes[12] += 0.39179942;
                        }

                        // tree #50
                        if (x[39] <= -83.0) {
                            if (x[25] <= -92.0) {
                                votes[13] += -0.4075942;
                            }

                            else {
                                votes[13] += -0.038326245;
                            }
                        }

                        else {
                            votes[13] += 0.48970312;
                        }

                        // tree #51
                        if (x[41] <= -81.0) {
                            votes[14] += -0.36038765;
                        }

                        else {
                            if (x[28] <= -84.0) {
                                votes[14] += -0.005697767;
                            }

                            else {
                                votes[14] += 0.52282023;
                            }
                        }

                        // tree #52
                        if (x[30] <= -88.0) {
                            votes[15] += -0.4246212;
                        }

                        else {
                            if (x[27] <= -89.0) {
                                votes[15] += -0.29840493;
                            }

                            else {
                                votes[15] += 0.82126987;
                            }
                        }

                        // tree #53
                        if (x[34] <= -82.0) {
                            votes[16] += -0.43354097;
                        }

                        else {
                            if (x[34] <= -79.0) {
                                votes[16] += 0.22818828;
                            }

                            else {
                                votes[16] += 0.6874869;
                            }
                        }

                        // tree #54
                        if (x[40] <= -66.0) {
                            votes[17] += -0.3573165;
                        }

                        else {
                            votes[17] += 0.45056096;
                        }

                        // tree #55
                        if (x[36] <= -80.0) {
                            votes[0] += -0.35033247;
                        }

                        else {
                            votes[0] += 0.33856642;
                        }

                        // tree #56
                        if (x[28] <= -72.0) {
                            votes[1] += -0.3334162;
                        }

                        else {
                            votes[1] += 0.33827105;
                        }

                        // tree #57
                        if (x[2] <= -89.0) {
                            votes[2] += -0.33311042;
                        }

                        else {
                            votes[2] += 0.060270377;
                        }

                        // tree #58
                        if (x[15] <= -74.0) {
                            votes[3] += -0.3339032;
                        }

                        else {
                            if (x[38] <= -89.0) {
                                votes[3] += -0.075670846;
                            }

                            else {
                                votes[3] += 0.4592416;
                            }
                        }

                        // tree #59
                        if (x[18] <= -73.0) {
                            votes[4] += -0.27124774;
                        }

                        else {
                            votes[4] += 0.38929373;
                        }

                        // tree #60
                        if (x[2] <= -75.0) {
                            votes[5] += -0.3226853;
                        }

                        else {
                            votes[5] += 0.33439624;
                        }

                        // tree #61
                        if (x[30] <= -74.0) {
                            votes[6] += -0.30209747;
                        }

                        else {
                            if (x[26] <= -89.0) {
                                votes[6] += -0.16307066;
                            }

                            else {
                                votes[6] += 0.56527185;
                            }
                        }

                        // tree #62
                        if (x[31] <= -69.0) {
                            if (x[49] <= -77.0) {
                                votes[7] += -0.40749052;
                            }

                            else {
                                votes[7] += 0.110865764;
                            }
                        }

                        else {
                            votes[7] += 0.3376727;
                        }

                        // tree #63
                        if (x[30] <= -78.0) {
                            votes[8] += -0.32097182;
                        }

                        else {
                            if (x[14] <= -84.0) {
                                votes[8] += 0.38666055;
                            }

                            else {
                                votes[8] += -0.072890244;
                            }
                        }

                        // tree #64
                        if (x[49] <= -63.0) {
                            votes[9] += -0.29507652;
                        }

                        else {
                            votes[9] += 0.20024785;
                        }

                        // tree #65
                        if (x[18] <= -84.0) {
                            votes[10] += -0.31950372;
                        }

                        else {
                            if (x[41] <= -81.0) {
                                votes[10] += -0.019296862;
                            }

                            else {
                                votes[10] += 0.2666915;
                            }
                        }

                        // tree #66
                        if (x[42] <= -91.0) {
                            votes[11] += -0.29677424;
                        }

                        else {
                            votes[11] += 0.2527772;
                        }

                        // tree #67
                        if (x[20] <= -83.0) {
                            votes[12] += -0.24791394;
                        }

                        else {
                            votes[12] += 0.2635633;
                        }

                        // tree #68
                        if (x[38] <= -84.0) {
                            if (x[39] <= -89.0) {
                                votes[13] += -0.35889393;
                            }

                            else {
                                votes[13] += -0.098177806;
                            }
                        }

                        else {
                            votes[13] += 0.48843405;
                        }

                        // tree #69
                        if (x[41] <= -81.0) {
                            votes[14] += -0.32621032;
                        }

                        else {
                            if (x[29] <= -83.0) {
                                votes[14] += 0.0745207;
                            }

                            else {
                                votes[14] += 0.40542874;
                            }
                        }

                        // tree #70
                        if (x[30] <= -88.0) {
                            votes[15] += -0.3559961;
                        }

                        else {
                            if (x[3] <= -89.0) {
                                votes[15] += 0.56274897;
                            }

                            else {
                                votes[15] += -0.057607558;
                            }
                        }

                        // tree #71
                        if (x[34] <= -82.0) {
                            votes[16] += -0.33027062;
                        }

                        else {
                            votes[16] += 0.48820236;
                        }

                        // tree #72
                        if (x[41] <= -74.0) {
                            votes[17] += -0.27757743;
                        }

                        else {
                            votes[17] += 0.1822368;
                        }

                        // tree #73
                        if (x[37] <= -83.0) {
                            votes[0] += -0.26831293;
                        }

                        else {
                            votes[0] += 0.13633688;
                        }

                        // tree #74
                        if (x[28] <= -72.0) {
                            votes[1] += -0.2873357;
                        }

                        else {
                            votes[1] += 0.32280827;
                        }

                        // tree #75
                        if (x[3] <= -90.0) {
                            votes[2] += -0.26698962;
                        }

                        else {
                            votes[2] += 0.080471836;
                        }

                        // tree #76
                        if (x[15] <= -75.0) {
                            votes[3] += -0.28276205;
                        }

                        else {
                            if (x[38] <= -89.0) {
                                votes[3] += -0.058581997;
                            }

                            else {
                                votes[3] += 0.33641684;
                            }
                        }

                        // tree #77
                        if (x[18] <= -66.0) {
                            votes[4] += -0.34192428;
                        }

                        else {
                            votes[4] += 0.2731083;
                        }

                        // tree #78
                        if (x[3] <= -74.0) {
                            votes[5] += -0.27841097;
                        }

                        else {
                            votes[5] += 0.26844603;
                        }

                        // tree #79
                        if (x[27] <= -87.0) {
                            votes[6] += -0.27969596;
                        }

                        else {
                            if (x[49] <= -85.0) {
                                votes[6] += -0.02865277;
                            }

                            else {
                                votes[6] += 0.31623012;
                            }
                        }

                        // tree #80
                        if (x[30] <= -72.0) {
                            votes[7] += -0.28392223;
                        }

                        else {
                            if (x[14] <= -76.0) {
                                votes[7] += 0.26837978;
                            }

                            else {
                                votes[7] += 0.022574041;
                            }
                        }

                        // tree #81
                        if (x[31] <= -78.0) {
                            votes[8] += -0.28063342;
                        }

                        else {
                            if (x[31] <= -74.0) {
                                votes[8] += 0.3452685;
                            }

                            else {
                                votes[8] += -0.043042082;
                            }
                        }

                        // tree #82
                        if (x[30] <= -78.0) {
                            if (x[30] <= -84.0) {
                                votes[9] += -0.020293722;
                            }

                            else {
                                votes[9] += 0.32428464;
                            }
                        }

                        else {
                            votes[9] += -0.2642087;
                        }

                        // tree #83
                        if (x[18] <= -85.0) {
                            votes[10] += -0.25730395;
                        }

                        else {
                            votes[10] += 0.35177317;
                        }

                        // tree #84
                        if (x[14] <= -63.0) {
                            votes[11] += -0.26147622;
                        }

                        else {
                            votes[11] += 0.14144914;
                        }

                        // tree #85
                        if (x[24] <= -90.0) {
                            votes[12] += -0.25252354;
                        }

                        else {
                            votes[12] += 0.18231583;
                        }

                        // tree #86
                        if (x[39] <= -89.0) {
                            votes[13] += -0.30726877;
                        }

                        else {
                            votes[13] += 0.14859039;
                        }

                        // tree #87
                        if (x[40] <= -80.0) {
                            votes[14] += -0.26147562;
                        }

                        else {
                            if (x[28] <= -84.0) {
                                votes[14] += 0.064697415;
                            }

                            else {
                                votes[14] += 0.29542044;
                            }
                        }

                        // tree #88
                        if (x[34] <= -85.0) {
                            votes[15] += -0.27493882;
                        }

                        else {
                            if (x[31] <= -88.0) {
                                votes[15] += -0.06129773;
                            }

                            else {
                                votes[15] += 0.38208443;
                            }
                        }

                        // tree #89
                        if (x[36] <= -86.0) {
                            votes[16] += -0.3526495;
                        }

                        else {
                            votes[16] += 0.29735908;
                        }

                        // tree #90
                        if (x[41] <= -66.0) {
                            votes[17] += -0.25105944;
                        }

                        else {
                            votes[17] += 0.26580805;
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

uint32_t macHashList10[] = {
    0xC133E933, 0x2F3D881F, 0x361FBAED, 0xD811DBC1, 0xA6C8B6C3, 
    0x48C6D7EF, 0x4EF05FFF, 0xA0FE3ED3, 0x2D414D63, 0xC34F2C4F, 
    0xCDECC7DF, 0x23E2A6F3, 0x0AA9BDE5, 0xE4A7DCC9, 0x47705924, 
    0xA97E3808, 0x1AE520DF, 0xF4EB41F3, 0xBF082D99, 0x51064CB5, 
    0xC9D46C09, 0x27DA0D25, 0x5AF0917B, 0xB4FEF057, 0x0E59C162, 
    0xE057A04E, 0x22608A00, 0xCC6EEB2C, 0x80FDF44F, 0x6EF39563, 
    0xABD0A78C, 0x45DEC6A0, 0x12C174B5, 0xFCCF1599, 0xAA256287, 
    0x442B03AB, 0x0407B1BC, 0xEA09D090, 0xC06196C0, 0x2E6FF7EC, 
    0x16B73528, 0xF8B95404, 0x3AC41145, 0xD4CA7069, 0x812635E3, 
    0x6F2854CF, 0xE0AD1FD9, 0x0EA37EF5, 0x7F0CD1C6, 0x9102B0EA, 
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

Rodada 1 - Acurácia média: 0.9417
Rodada 2 - Acurácia média: 0.9250
Rodada 3 - Acurácia média: 0.9375
Rodada 4 - Acurácia média: 0.9292
Rodada 5 - Acurácia média: 0.9292
Rodada 6 - Acurácia média: 0.9500
Rodada 7 - Acurácia média: 0.9167
Rodada 8 - Acurácia média: 0.9167
Rodada 9 - Acurácia média: 0.9292
Rodada 10 - Acurácia média: 0.9333
Rodada 11 - Acurácia média: 0.9458
Rodada 12 - Acurácia média: 0.9333
Rodada 13 - Acurácia média: 0.9500
Rodada 14 - Acurácia média: 0.9417
Rodada 15 - Acurácia média: 0.9417
Rodada 16 - Acurácia média: 0.9458
Rodada 17 - Acurácia média: 0.9250
Rodada 18 - Acurácia média: 0.9333
Rodada 19 - Acurácia média: 0.9417
Rodada 20 - Acurácia média: 0.9333

======================================
=========== Modelo XGBoost ===========
======================================
Acurácia média (20 execuções): 0.9350
Desvio padrão entre execuções: 0.0096

Acurácia no conjunto de teste: 1.0
Tentativa:  18

Atingiu 100.00% de acurácia!
 */
#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest10U {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[18] = { 0 };
                        // tree #1
                        if (x[19] <= -84.5) {
                            if (x[2] <= -73.0) {
                                if (x[38] <= -94.5) {
                                    if (x[36] <= -81.5) {
                                        if (x[15] <= -64.5) {
                                            if (x[48] <= -95.0) {
                                                if (x[2] <= -93.5) {
                                                    if (x[41] <= -70.5) {
                                                        if (x[13] <= -89.0) {
                                                            if (x[41] <= -84.5) {
                                                                if (x[35] <= -89.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                if (x[15] <= -82.0) {
                                                    if (x[48] <= -70.0) {
                                                        if (x[26] <= -95.0) {
                                                            if (x[34] <= -84.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[37] <= -94.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[48] <= -58.5) {
                                                            if (x[14] <= -86.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[37] <= -95.5) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[27] <= -79.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[48] <= -86.0) {
                                if (x[19] <= -68.0) {
                                    if (x[28] <= -83.0) {
                                        votes[10] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #2
                        if (x[31] <= -69.5) {
                            if (x[48] <= -69.0) {
                                if (x[15] <= -95.5) {
                                    if (x[31] <= -94.0) {
                                        if (x[41] <= -69.5) {
                                            if (x[28] <= -76.0) {
                                                if (x[48] <= -93.0) {
                                                    if (x[16] <= -94.0) {
                                                        if (x[37] <= -93.5) {
                                                            votes[13] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[47] <= -87.0) {
                                            if (x[18] <= -67.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            if (x[40] <= -81.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[39] <= -84.0) {
                                        if (x[15] <= -85.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            if (x[37] <= -91.5) {
                                                if (x[25] <= -95.5) {
                                                    if (x[3] <= -94.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[20] <= -82.5) {
                                                            if (x[2] <= -79.0) {
                                                                if (x[48] <= -90.5) {
                                                                    votes[11] += 1;
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[48] <= -89.0) {
                                                                    votes[5] += 1;
                                                                }

                                                                else {
                                                                    votes[7] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[14] <= -60.5) {
                                                        if (x[3] <= -77.0) {
                                                            if (x[2] <= -87.5) {
                                                                votes[13] += 1;
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[27] <= -82.0) {
                                                    if (x[3] <= -94.0) {
                                                        if (x[26] <= -87.5) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[37] <= -81.5) {
                                                        if (x[2] <= -92.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= -93.5) {
                                    if (x[34] <= -85.5) {
                                        if (x[2] <= -93.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }

                                else {
                                    if (x[49] <= -63.5) {
                                        if (x[34] <= -87.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[7] += 1;
                        }

                        // tree #3
                        if (x[40] <= -83.0) {
                            if (x[15] <= -60.5) {
                                if (x[38] <= -95.0) {
                                    if (x[35] <= -80.0) {
                                        if (x[36] <= -83.0) {
                                            if (x[2] <= -75.5) {
                                                if (x[49] <= -85.5) {
                                                    if (x[28] <= -86.0) {
                                                        if (x[19] <= -83.0) {
                                                            if (x[42] <= -93.0) {
                                                                if (x[3] <= -94.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[6] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[48] <= -69.0) {
                                                        if (x[35] <= -86.5) {
                                                            if (x[49] <= -81.5) {
                                                                if (x[15] <= -77.5) {
                                                                    if (x[47] <= -92.5) {
                                                                        votes[6] += 1;
                                                                    }

                                                                    else {
                                                                        votes[4] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[7] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[30] <= -94.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[15] <= -81.0) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[26] <= -89.5) {
                                                                            votes[7] += 1;
                                                                        }

                                                                        else {
                                                                            votes[6] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[49] <= -76.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[48] <= -59.5) {
                                                            if (x[34] <= -94.0) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[14] <= -83.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[30] <= -77.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }

                                else {
                                    if (x[8] <= -95.0) {
                                        if (x[38] <= -85.0) {
                                            if (x[38] <= -88.5) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        else {
                            if (x[41] <= -69.5) {
                                if (x[31] <= -94.5) {
                                    votes[14] += 1;
                                }

                                else {
                                    votes[10] += 1;
                                }
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        // tree #4
                        if (x[14] <= -60.5) {
                            if (x[31] <= -69.5) {
                                if (x[39] <= -95.0) {
                                    if (x[36] <= -80.0) {
                                        if (x[3] <= -75.0) {
                                            if (x[49] <= -70.0) {
                                                if (x[19] <= -85.0) {
                                                    if (x[40] <= -71.0) {
                                                        if (x[20] <= -91.5) {
                                                            if (x[41] <= -84.0) {
                                                                if (x[14] <= -79.5) {
                                                                    if (x[36] <= -87.0) {
                                                                        if (x[31] <= -94.0) {
                                                                            if (x[5] <= -94.0) {
                                                                                if (x[44] <= -91.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[27] <= -94.0) {
                                                                                if (x[35] <= -91.5) {
                                                                                    votes[7] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[15] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[15] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[30] <= -87.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[48] <= -86.5) {
                                                        if (x[41] <= -82.5) {
                                                            if (x[18] <= -69.0) {
                                                                votes[10] += 1;
                                                            }

                                                            else {
                                                                votes[4] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[15] <= -86.5) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    if (x[2] <= -82.5) {
                                                        if (x[2] <= -83.5) {
                                                            if (x[26] <= -94.5) {
                                                                if (x[30] <= -78.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[39] <= -84.0) {
                                        if (x[15] <= -78.5) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[49] <= -86.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #5
                        if (x[14] <= -60.5) {
                            if (x[39] <= -95.5) {
                                if (x[14] <= -82.5) {
                                    if (x[41] <= -68.5) {
                                        if (x[49] <= -70.0) {
                                            if (x[18] <= -84.5) {
                                                if (x[31] <= -94.0) {
                                                    if (x[41] <= -90.5) {
                                                        if (x[36] <= -94.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[15] <= -95.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= -69.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[48] <= -62.0) {
                                                if (x[48] <= -63.5) {
                                                    if (x[49] <= -63.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                if (x[30] <= -78.5) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -73.0) {
                                        if (x[20] <= -85.0) {
                                            if (x[31] <= -69.0) {
                                                if (x[13] <= -90.0) {
                                                    if (x[3] <= -94.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[36] <= -95.0) {
                                                            if (x[25] <= -95.0) {
                                                                votes[7] += 1;
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[21] <= -94.0) {
                                    if (x[38] <= -84.0) {
                                        if (x[25] <= -95.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #6
                        if (x[21] <= -84.0) {
                            if (x[18] <= -69.0) {
                                if (x[30] <= -73.0) {
                                    if (x[14] <= -75.5) {
                                        if (x[34] <= -82.5) {
                                            if (x[31] <= -94.5) {
                                                if (x[14] <= -94.0) {
                                                    if (x[29] <= -76.0) {
                                                        if (x[37] <= -95.5) {
                                                            if (x[41] <= -82.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }

                                            else {
                                                if (x[40] <= -91.5) {
                                                    if (x[14] <= -81.0) {
                                                        if (x[14] <= -94.0) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            if (x[30] <= -78.0) {
                                                                if (x[1] <= -93.5) {
                                                                    if (x[3] <= -93.5) {
                                                                        if (x[30] <= -82.0) {
                                                                            votes[15] += 1;
                                                                        }

                                                                        else {
                                                                            votes[9] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[30] <= -79.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[25] <= -95.5) {
                                            if (x[22] <= -95.5) {
                                                if (x[21] <= -94.5) {
                                                    if (x[36] <= -83.0) {
                                                        if (x[8] <= -88.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[27] <= -82.5) {
                                                                if (x[3] <= -92.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[11] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[15] <= -61.0) {
                                                if (x[6] <= -93.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[31] <= -69.5) {
                                        if (x[31] <= -71.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[7] <= -94.5) {
                                if (x[24] <= -89.5) {
                                    if (x[20] <= -81.5) {
                                        votes[11] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    votes[12] += 1;
                                }
                            }

                            else {
                                votes[12] += 1;
                            }
                        }

                        // tree #7
                        if (x[2] <= -73.0) {
                            if (x[40] <= -69.5) {
                                if (x[2] <= -87.5) {
                                    if (x[41] <= -87.0) {
                                        if (x[36] <= -85.0) {
                                            if (x[39] <= -84.0) {
                                                if (x[29] <= -86.0) {
                                                    if (x[31] <= -94.0) {
                                                        if (x[13] <= -83.5) {
                                                            votes[13] += 1;
                                                        }

                                                        else {
                                                            if (x[8] <= -95.0) {
                                                                if (x[24] <= -95.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[13] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[48] <= -87.0) {
                                                            if (x[48] <= -95.0) {
                                                                votes[4] += 1;
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[48] <= -71.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            if (x[34] <= -85.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[10] <= -94.0) {
                                            if (x[19] <= -81.0) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                if (x[46] <= -87.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[48] <= -86.5) {
                                                if (x[37] <= -94.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[15] <= -63.5) {
                                        if (x[31] <= -69.0) {
                                            if (x[30] <= -78.5) {
                                                if (x[8] <= -88.0) {
                                                    if (x[49] <= -70.5) {
                                                        if (x[49] <= -90.5) {
                                                            if (x[7] <= -93.0) {
                                                                votes[5] += 1;
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                if (x[15] <= -81.0) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    if (x[1] <= -94.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        else {
                            votes[5] += 1;
                        }

                        // tree #8
                        if (x[30] <= -73.0) {
                            if (x[14] <= -60.5) {
                                if (x[3] <= -76.0) {
                                    if (x[28] <= -75.5) {
                                        if (x[36] <= -81.5) {
                                            if (x[19] <= -82.0) {
                                                if (x[29] <= -88.0) {
                                                    if (x[49] <= -69.0) {
                                                        if (x[43] <= -92.0) {
                                                            if (x[41] <= -70.0) {
                                                                if (x[26] <= -79.5) {
                                                                    if (x[48] <= -95.0) {
                                                                        if (x[13] <= -91.5) {
                                                                            if (x[36] <= -92.0) {
                                                                                votes[15] += 1;
                                                                            }

                                                                            else {
                                                                                votes[16] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[3] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[31] <= -94.5) {
                                                                            if (x[49] <= -81.0) {
                                                                                if (x[36] <= -93.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[16] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= -93.5) {
                                                                                if (x[34] <= -93.5) {
                                                                                    votes[10] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[15] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[6] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[13] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[30] <= -78.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                if (x[46] <= -88.5) {
                                                    if (x[19] <= -66.5) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        else {
                            if (x[14] <= -83.5) {
                                votes[8] += 1;
                            }

                            else {
                                if (x[49] <= -81.0) {
                                    if (x[48] <= -82.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }
                        }

                        // tree #9
                        if (x[41] <= -87.0) {
                            if (x[31] <= -73.0) {
                                if (x[14] <= -75.5) {
                                    if (x[38] <= -94.5) {
                                        if (x[37] <= -91.5) {
                                            if (x[19] <= -80.5) {
                                                if (x[30] <= -85.5) {
                                                    if (x[48] <= -82.0) {
                                                        if (x[20] <= -90.5) {
                                                            if (x[49] <= -94.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[4] <= -96.0) {
                                                            if (x[27] <= -92.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[49] <= -63.5) {
                                                        if (x[14] <= -85.5) {
                                                            if (x[31] <= -79.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[15] <= -86.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            if (x[30] <= -78.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            if (x[36] <= -87.0) {
                                                if (x[31] <= -87.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                if (x[37] <= -81.0) {
                                                    if (x[48] <= -83.0) {
                                                        votes[16] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[15] <= -69.5) {
                                        if (x[12] <= -85.5) {
                                            if (x[24] <= -94.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[25] <= -87.5) {
                                            if (x[13] <= -86.5) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[35] <= -92.5) {
                                    votes[7] += 1;
                                }

                                else {
                                    votes[8] += 1;
                                }
                            }
                        }

                        else {
                            if (x[37] <= -95.5) {
                                if (x[19] <= -85.0) {
                                    votes[17] += 1;
                                }

                                else {
                                    if (x[10] <= -85.5) {
                                        votes[10] += 1;
                                    }

                                    else {
                                        if (x[19] <= -71.5) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[19] <= -81.0) {
                                    votes[14] += 1;
                                }

                                else {
                                    if (x[11] <= -92.5) {
                                        votes[10] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[39] <= -84.0) {
                            if (x[14] <= -72.5) {
                                if (x[19] <= -84.5) {
                                    if (x[17] <= -95.5) {
                                        if (x[37] <= -81.5) {
                                            if (x[36] <= -87.5) {
                                                if (x[14] <= -82.0) {
                                                    if (x[3] <= -93.5) {
                                                        if (x[49] <= -94.5) {
                                                            if (x[40] <= -76.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[48] <= -73.5) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                if (x[30] <= -76.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[30] <= -92.5) {
                                                            if (x[13] <= -92.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[27] <= -95.0) {
                                                                if (x[3] <= -81.5) {
                                                                    if (x[30] <= -79.5) {
                                                                        votes[9] += 1;
                                                                    }

                                                                    else {
                                                                        votes[8] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[27] <= -88.0) {
                                                        if (x[42] <= -92.5) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[31] <= -87.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= -93.0) {
                                                    if (x[28] <= -90.5) {
                                                        votes[16] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    if (x[36] <= -95.5) {
                                        if (x[49] <= -87.5) {
                                            if (x[18] <= -67.5) {
                                                if (x[29] <= -83.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[24] <= -90.5) {
                                    if (x[14] <= -62.5) {
                                        if (x[3] <= -75.0) {
                                            if (x[38] <= -94.0) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -76.0) {
                                        if (x[43] <= -84.0) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #11
                        if (x[13] <= -88.5) {
                            if (x[36] <= -81.5) {
                                if (x[8] <= -95.5) {
                                    if (x[49] <= -69.0) {
                                        if (x[2] <= -94.5) {
                                            if (x[18] <= -69.5) {
                                                if (x[11] <= -94.5) {
                                                    if (x[30] <= -94.5) {
                                                        if (x[40] <= -70.5) {
                                                            if (x[19] <= -94.5) {
                                                                if (x[35] <= -83.5) {
                                                                    if (x[44] <= -93.0) {
                                                                        if (x[39] <= -91.0) {
                                                                            if (x[41] <= -83.5) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                votes[14] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[35] <= -92.0) {
                                                            votes[10] += 1;
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            if (x[37] <= -95.5) {
                                                if (x[26] <= -86.5) {
                                                    if (x[31] <= -84.5) {
                                                        if (x[7] <= -93.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[31] <= -78.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= -76.0) {
                                        if (x[14] <= -64.0) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[26] <= -79.5) {
                                if (x[24] <= -94.0) {
                                    if (x[14] <= -70.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[27] <= -84.0) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[12] <= -82.0) {
                                        votes[11] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -78.5) {
                                    votes[13] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        // tree #12
                        if (x[27] <= -78.5) {
                            if (x[3] <= -75.5) {
                                if (x[18] <= -69.5) {
                                    if (x[18] <= -84.5) {
                                        if (x[15] <= -61.5) {
                                            if (x[41] <= -70.5) {
                                                if (x[42] <= -93.0) {
                                                    if (x[34] <= -82.5) {
                                                        if (x[40] <= -84.5) {
                                                            if (x[48] <= -95.0) {
                                                                if (x[12] <= -85.5) {
                                                                    if (x[44] <= -91.5) {
                                                                        if (x[38] <= -88.5) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[34] <= -94.0) {
                                                                    if (x[27] <= -88.5) {
                                                                        if (x[15] <= -81.0) {
                                                                            if (x[30] <= -92.5) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[31] <= -78.5) {
                                                                                    votes[9] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[48] <= -81.0) {
                                                                                if (x[49] <= -83.0) {
                                                                                    votes[7] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[6] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[7] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[49] <= -69.0) {
                                                                        if (x[15] <= -93.5) {
                                                                            if (x[34] <= -83.5) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[15] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[15] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[30] <= -80.0) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[8] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[24] <= -95.5) {
                                    if (x[49] <= -88.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= -78.0) {
                                votes[13] += 1;
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        // tree #13
                        if (x[43] <= -94.5) {
                            if (x[2] <= -73.0) {
                                if (x[19] <= -86.5) {
                                    if (x[30] <= -72.5) {
                                        if (x[12] <= -93.5) {
                                            if (x[40] <= -71.0) {
                                                if (x[37] <= -81.5) {
                                                    if (x[31] <= -77.5) {
                                                        if (x[49] <= -69.0) {
                                                            if (x[37] <= -88.0) {
                                                                if (x[31] <= -93.5) {
                                                                    if (x[49] <= -90.5) {
                                                                        if (x[29] <= -76.5) {
                                                                            if (x[8] <= -95.5) {
                                                                                votes[14] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[27] <= -85.0) {
                                                                                    votes[11] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[5] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[40] <= -89.0) {
                                                                    votes[16] += 1;
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[49] <= -71.5) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= -95.5) {
                                                if (x[3] <= -92.5) {
                                                    if (x[13] <= -84.0) {
                                                        votes[13] += 1;
                                                    }

                                                    else {
                                                        if (x[15] <= -79.0) {
                                                            votes[13] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[35] <= -92.5) {
                                            if (x[36] <= -93.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[46] <= -86.5) {
                                        if (x[41] <= -81.5) {
                                            if (x[49] <= -96.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                if (x[41] <= -85.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    if (x[31] <= -88.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[40] <= -76.0) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                if (x[28] <= -89.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[32] <= -95.0) {
                                if (x[21] <= -82.0) {
                                    votes[11] += 1;
                                }

                                else {
                                    votes[12] += 1;
                                }
                            }

                            else {
                                votes[12] += 1;
                            }
                        }

                        // tree #14
                        if (x[22] <= -95.5) {
                            if (x[3] <= -75.5) {
                                if (x[14] <= -64.0) {
                                    if (x[30] <= -73.0) {
                                        if (x[48] <= -69.0) {
                                            if (x[38] <= -84.0) {
                                                if (x[40] <= -87.5) {
                                                    if (x[14] <= -95.5) {
                                                        if (x[48] <= -88.0) {
                                                            if (x[37] <= -86.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[12] <= -83.5) {
                                                            if (x[43] <= -92.0) {
                                                                if (x[36] <= -88.5) {
                                                                    if (x[13] <= -92.0) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        votes[13] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[35] <= -84.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[19] <= -82.5) {
                                                        if (x[40] <= -70.5) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[48] <= -87.5) {
                                                            if (x[36] <= -95.5) {
                                                                if (x[48] <= -95.0) {
                                                                    if (x[18] <= -68.0) {
                                                                        votes[10] += 1;
                                                                    }

                                                                    else {
                                                                        votes[4] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[41] <= -81.0) {
                                                                votes[4] += 1;
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            if (x[48] <= -58.5) {
                                                if (x[35] <= -86.5) {
                                                    if (x[48] <= -60.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= -86.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[49] <= -81.0) {
                                            if (x[26] <= -92.5) {
                                                if (x[48] <= -83.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[31] <= -69.0) {
                                                if (x[48] <= -77.5) {
                                                    if (x[27] <= -91.5) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[11] += 1;
                                }
                            }

                            else {
                                if (x[27] <= -93.5) {
                                    votes[7] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #15
                        if (x[18] <= -84.5) {
                            if (x[3] <= -73.0) {
                                if (x[38] <= -84.0) {
                                    if (x[42] <= -95.0) {
                                        if (x[15] <= -82.0) {
                                            if (x[40] <= -69.5) {
                                                if (x[48] <= -69.0) {
                                                    if (x[36] <= -85.5) {
                                                        if (x[30] <= -94.5) {
                                                            if (x[3] <= -94.5) {
                                                                if (x[48] <= -90.0) {
                                                                    if (x[44] <= -92.0) {
                                                                        if (x[34] <= -96.0) {
                                                                            if (x[19] <= -94.5) {
                                                                                if (x[17] <= -95.5) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[14] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[14] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[14] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[27] <= -83.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[13] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -84.5) {
                                                        if (x[30] <= -77.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[15] <= -86.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            if (x[35] <= -86.5) {
                                                                if (x[2] <= -83.5) {
                                                                    votes[8] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[48] <= -95.0) {
                                                if (x[36] <= -83.0) {
                                                    if (x[7] <= -94.5) {
                                                        if (x[37] <= -96.0) {
                                                            if (x[21] <= -85.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[11] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= -94.5) {
                                                    if (x[36] <= -95.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        if (x[26] <= -80.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[20] <= -84.0) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            if (x[33] <= -95.0) {
                                                if (x[8] <= -84.5) {
                                                    votes[12] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[47] <= -87.0) {
                                if (x[19] <= -66.5) {
                                    votes[10] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #16
                        if (x[15] <= -60.5) {
                            if (x[31] <= -70.0) {
                                if (x[24] <= -90.5) {
                                    if (x[19] <= -82.5) {
                                        if (x[13] <= -94.0) {
                                            if (x[41] <= -84.5) {
                                                if (x[14] <= -83.5) {
                                                    if (x[36] <= -87.0) {
                                                        if (x[29] <= -85.0) {
                                                            if (x[48] <= -69.0) {
                                                                if (x[2] <= -94.5) {
                                                                    votes[15] += 1;
                                                                }

                                                                else {
                                                                    if (x[15] <= -93.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[13] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[15] <= -86.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    if (x[30] <= -78.5) {
                                                                        votes[9] += 1;
                                                                    }

                                                                    else {
                                                                        votes[8] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -94.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[9] <= -96.0) {
                                                            if (x[2] <= -81.5) {
                                                                votes[6] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[7] <= -93.5) {
                                                                if (x[25] <= -89.0) {
                                                                    votes[5] += 1;
                                                                }

                                                                else {
                                                                    votes[12] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[16] <= -94.0) {
                                                    if (x[28] <= -93.0) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[26] <= -79.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[19] <= -67.0) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[27] <= -92.5) {
                                        if (x[43] <= -92.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[8] <= -95.0) {
                                            if (x[13] <= -94.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[20] <= -93.5) {
                                    if (x[30] <= -67.0) {
                                        if (x[14] <= -76.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #17
                        if (x[3] <= -74.5) {
                            if (x[31] <= -69.5) {
                                if (x[14] <= -75.5) {
                                    if (x[38] <= -94.5) {
                                        if (x[18] <= -83.5) {
                                            if (x[28] <= -77.0) {
                                                if (x[37] <= -95.5) {
                                                    if (x[49] <= -69.0) {
                                                        if (x[14] <= -93.5) {
                                                            if (x[40] <= -83.0) {
                                                                if (x[35] <= -85.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[48] <= -92.0) {
                                                                votes[12] += 1;
                                                            }

                                                            else {
                                                                if (x[49] <= -79.0) {
                                                                    votes[15] += 1;
                                                                }

                                                                else {
                                                                    if (x[27] <= -93.5) {
                                                                        votes[7] += 1;
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[30] <= -77.0) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[14] <= -84.0) {
                                                        if (x[49] <= -96.0) {
                                                            if (x[41] <= -90.5) {
                                                                votes[16] += 1;
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[16] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[36] <= -81.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= -69.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[39] <= -95.5) {
                                        if (x[15] <= -64.0) {
                                            if (x[12] <= -91.5) {
                                                if (x[3] <= -93.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    if (x[30] <= -84.5) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= -85.5) {
                                    if (x[3] <= -87.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }
                        }

                        else {
                            votes[5] += 1;
                        }

                        // tree #18
                        if (x[15] <= -60.0) {
                            if (x[14] <= -75.5) {
                                if (x[28] <= -75.5) {
                                    if (x[12] <= -92.5) {
                                        if (x[2] <= -94.5) {
                                            if (x[41] <= -94.0) {
                                                if (x[34] <= -87.5) {
                                                    if (x[36] <= -90.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[37] <= -90.0) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[18] <= -69.5) {
                                                    if (x[31] <= -94.5) {
                                                        if (x[37] <= -95.5) {
                                                            votes[17] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[31] <= -92.5) {
                                                if (x[8] <= -93.5) {
                                                    if (x[15] <= -93.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                if (x[36] <= -95.0) {
                                                    if (x[31] <= -78.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        if (x[15] <= -81.0) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[12] <= -85.5) {
                                    if (x[14] <= -70.5) {
                                        if (x[6] <= -93.5) {
                                            if (x[27] <= -86.0) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[15] <= -68.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #19
                        if (x[2] <= -73.0) {
                            if (x[26] <= -76.5) {
                                if (x[36] <= -81.5) {
                                    if (x[15] <= -82.0) {
                                        if (x[27] <= -88.5) {
                                            if (x[48] <= -69.0) {
                                                if (x[19] <= -81.5) {
                                                    if (x[37] <= -95.5) {
                                                        if (x[40] <= -94.0) {
                                                            if (x[30] <= -92.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[41] <= -76.0) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[41] <= -84.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[19] <= -69.0) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[30] <= -77.5) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[15] <= -95.5) {
                                                if (x[48] <= -92.0) {
                                                    votes[13] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                if (x[37] <= -88.5) {
                                                    if (x[35] <= -93.5) {
                                                        votes[13] += 1;
                                                    }

                                                    else {
                                                        votes[15] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= -94.5) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            if (x[15] <= -64.0) {
                                                if (x[9] <= -89.0) {
                                                    if (x[49] <= -83.0) {
                                                        if (x[3] <= -88.5) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            if (x[26] <= -82.5) {
                                                                votes[6] += 1;
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= -80.5) {
                                                            if (x[31] <= -69.5) {
                                                                votes[6] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            votes[5] += 1;
                        }

                        // tree #20
                        if (x[2] <= -73.0) {
                            if (x[30] <= -73.0) {
                                if (x[30] <= -94.5) {
                                    if (x[14] <= -64.0) {
                                        if (x[26] <= -79.5) {
                                            if (x[27] <= -94.0) {
                                                if (x[14] <= -89.5) {
                                                    if (x[28] <= -86.5) {
                                                        if (x[11] <= -92.5) {
                                                            if (x[49] <= -92.5) {
                                                                votes[17] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[36] <= -87.0) {
                                                            if (x[28] <= -75.5) {
                                                                votes[14] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -93.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[12] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[35] <= -84.5) {
                                                    if (x[39] <= -82.5) {
                                                        if (x[3] <= -87.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[37] <= -87.5) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -93.5) {
                                        if (x[35] <= -87.5) {
                                            if (x[26] <= -93.5) {
                                                if (x[40] <= -82.5) {
                                                    if (x[40] <= -93.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        if (x[18] <= -68.5) {
                                                            votes[10] += 1;
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[14] <= -85.5) {
                                            if (x[30] <= -77.0) {
                                                votes[9] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            if (x[26] <= -86.0) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[49] <= -85.5) {
                                    votes[6] += 1;
                                }

                                else {
                                    if (x[36] <= -93.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[5] += 1;
                        }

                        // tree #21
                        if (x[41] <= -87.0) {
                            if (x[3] <= -75.5) {
                                if (x[21] <= -94.5) {
                                    if (x[13] <= -84.0) {
                                        if (x[36] <= -81.5) {
                                            if (x[29] <= -86.0) {
                                                if (x[37] <= -95.5) {
                                                    if (x[46] <= -95.0) {
                                                        if (x[39] <= -91.0) {
                                                            if (x[48] <= -69.5) {
                                                                if (x[30] <= -77.5) {
                                                                    if (x[35] <= -85.5) {
                                                                        if (x[9] <= -93.5) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[6] <= -93.5) {
                                                                                votes[11] += 1;
                                                                            }

                                                                            else {
                                                                                votes[12] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[7] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[35] <= -86.5) {
                                                                    if (x[49] <= -59.5) {
                                                                        if (x[30] <= -79.5) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[8] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[13] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[26] <= -87.5) {
                                                        if (x[2] <= -92.5) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= -94.0) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[14] <= -79.0) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[27] <= -95.0) {
                                        if (x[24] <= -90.5) {
                                            if (x[30] <= -84.0) {
                                                if (x[43] <= -83.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        else {
                            if (x[30] <= -94.0) {
                                if (x[46] <= -94.0) {
                                    if (x[36] <= -95.0) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[17] <= -93.5) {
                                    if (x[30] <= -84.5) {
                                        if (x[40] <= -84.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }

                                else {
                                    votes[10] += 1;
                                }
                            }
                        }

                        // tree #22
                        if (x[15] <= -81.5) {
                            if (x[15] <= -95.5) {
                                if (x[19] <= -82.5) {
                                    if (x[41] <= -70.0) {
                                        if (x[2] <= -94.5) {
                                            if (x[30] <= -93.0) {
                                                if (x[17] <= -95.5) {
                                                    if (x[28] <= -83.5) {
                                                        votes[13] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[19] <= -69.5) {
                                        votes[10] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[26] <= -79.5) {
                                    if (x[31] <= -93.5) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        if (x[31] <= -78.5) {
                                            if (x[3] <= -92.5) {
                                                if (x[15] <= -84.5) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    if (x[27] <= -90.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= -84.5) {
                                if (x[15] <= -64.0) {
                                    if (x[20] <= -85.0) {
                                        if (x[36] <= -90.0) {
                                            if (x[8] <= -94.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    votes[11] += 1;
                                }
                            }

                            else {
                                if (x[0] <= -94.5) {
                                    if (x[14] <= -69.0) {
                                        if (x[30] <= -92.0) {
                                            if (x[8] <= -89.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[13] <= -82.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[14] <= -77.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #23
                        if (x[38] <= -84.0) {
                            if (x[15] <= -60.5) {
                                if (x[12] <= -92.5) {
                                    if (x[48] <= -87.0) {
                                        if (x[2] <= -74.5) {
                                            if (x[26] <= -84.5) {
                                                if (x[19] <= -84.5) {
                                                    if (x[17] <= -95.5) {
                                                        if (x[29] <= -76.5) {
                                                            if (x[41] <= -70.5) {
                                                                if (x[40] <= -89.0) {
                                                                    if (x[36] <= -94.0) {
                                                                        votes[12] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[14] <= -84.0) {
                                                                            votes[16] += 1;
                                                                        }

                                                                        else {
                                                                            votes[6] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[16] <= -95.0) {
                                                        if (x[36] <= -94.5) {
                                                            if (x[48] <= -94.0) {
                                                                if (x[37] <= -94.5) {
                                                                    if (x[46] <= -95.0) {
                                                                        votes[10] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[11] <= -92.5) {
                                                                            votes[10] += 1;
                                                                        }

                                                                        else {
                                                                            votes[4] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[4] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[4] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[31] <= -73.0) {
                                            if (x[3] <= -94.5) {
                                                if (x[36] <= -88.5) {
                                                    if (x[10] <= -92.5) {
                                                        if (x[15] <= -84.5) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }

                                            else {
                                                if (x[30] <= -93.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    if (x[34] <= -84.0) {
                                                        if (x[14] <= -79.5) {
                                                            if (x[3] <= -86.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                if (x[31] <= -81.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[15] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[36] <= -92.0) {
                                                if (x[27] <= -89.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= -93.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        if (x[39] <= -94.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #24
                        if (x[27] <= -78.5) {
                            if (x[14] <= -60.0) {
                                if (x[41] <= -82.5) {
                                    if (x[31] <= -75.5) {
                                        if (x[19] <= -83.0) {
                                            if (x[27] <= -94.0) {
                                                if (x[43] <= -93.0) {
                                                    if (x[35] <= -88.5) {
                                                        if (x[3] <= -94.5) {
                                                            if (x[28] <= -85.0) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[4] <= -96.0) {
                                                                if (x[31] <= -92.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= -93.5) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            if (x[30] <= -81.0) {
                                                                if (x[15] <= -92.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                if (x[37] <= -92.5) {
                                                    if (x[15] <= -70.0) {
                                                        if (x[13] <= -85.5) {
                                                            if (x[49] <= -94.5) {
                                                                if (x[3] <= -85.5) {
                                                                    votes[13] += 1;
                                                                }

                                                                else {
                                                                    votes[5] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[35] <= -93.5) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[14] <= -81.5) {
                                                        votes[16] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[15] <= -78.5) {
                                            if (x[34] <= -91.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            if (x[31] <= -67.0) {
                                                if (x[1] <= -94.5) {
                                                    if (x[36] <= -95.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[30] <= -94.5) {
                                        if (x[10] <= -93.5) {
                                            if (x[41] <= -71.0) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        else {
                            if (x[48] <= -95.0) {
                                if (x[24] <= -90.0) {
                                    votes[13] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #25
                        if (x[42] <= -95.5) {
                            if (x[38] <= -84.0) {
                                if (x[2] <= -73.0) {
                                    if (x[29] <= -88.5) {
                                        if (x[30] <= -72.5) {
                                            if (x[15] <= -74.5) {
                                                if (x[49] <= -87.0) {
                                                    if (x[0] <= -94.5) {
                                                        if (x[41] <= -68.5) {
                                                            if (x[19] <= -90.5) {
                                                                if (x[15] <= -83.0) {
                                                                    if (x[31] <= -93.5) {
                                                                        if (x[38] <= -94.5) {
                                                                            votes[16] += 1;
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[49] <= -88.5) {
                                                                    if (x[18] <= -69.0) {
                                                                        votes[10] += 1;
                                                                    }

                                                                    else {
                                                                        votes[4] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[31] <= -78.5) {
                                                        if (x[30] <= -94.5) {
                                                            if (x[34] <= -83.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[40] <= -91.0) {
                                                                if (x[35] <= -87.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    if (x[34] <= -84.5) {
                                                                        if (x[26] <= -94.0) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[15] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[4] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[49] <= -71.5) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[12] <= -92.0) {
                                                    if (x[1] <= -94.0) {
                                                        votes[11] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[27] <= -89.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                if (x[35] <= -92.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[40] <= -84.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            if (x[27] <= -95.0) {
                                if (x[20] <= -81.5) {
                                    if (x[7] <= -95.0) {
                                        votes[11] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    votes[12] += 1;
                                }
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        // tree #26
                        if (x[15] <= -60.0) {
                            if (x[12] <= -93.0) {
                                if (x[14] <= -72.5) {
                                    if (x[30] <= -77.0) {
                                        if (x[31] <= -94.5) {
                                            if (x[41] <= -70.5) {
                                                if (x[40] <= -85.0) {
                                                    if (x[35] <= -83.5) {
                                                        if (x[42] <= -93.0) {
                                                            if (x[38] <= -91.5) {
                                                                if (x[45] <= -90.0) {
                                                                    if (x[40] <= -94.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[40] <= -80.5) {
                                                if (x[19] <= -70.0) {
                                                    if (x[36] <= -90.0) {
                                                        if (x[41] <= -93.0) {
                                                            if (x[48] <= -71.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[9] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[48] <= -68.5) {
                                            if (x[3] <= -80.5) {
                                                if (x[36] <= -95.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[8] <= -82.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[14] <= -79.0) {
                                    votes[13] += 1;
                                }

                                else {
                                    if (x[37] <= -96.0) {
                                        if (x[8] <= -87.5) {
                                            if (x[24] <= -93.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #27
                        if (x[13] <= -81.5) {
                            if (x[14] <= -72.5) {
                                if (x[26] <= -79.5) {
                                    if (x[14] <= -94.5) {
                                        if (x[18] <= -84.5) {
                                            if (x[4] <= -96.0) {
                                                if (x[28] <= -92.5) {
                                                    if (x[41] <= -83.0) {
                                                        if (x[2] <= -94.5) {
                                                            if (x[48] <= -84.0) {
                                                                votes[16] += 1;
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[17] <= -95.5) {
                                                        if (x[35] <= -94.5) {
                                                            if (x[29] <= -76.5) {
                                                                votes[14] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[19] <= -68.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[37] <= -80.0) {
                                            if (x[15] <= -82.0) {
                                                if (x[48] <= -71.0) {
                                                    if (x[37] <= -94.0) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[31] <= -77.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[31] <= -87.5) {
                                                    if (x[24] <= -94.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[12] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[27] <= -88.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[36] <= -92.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -76.0) {
                                    if (x[12] <= -92.0) {
                                        if (x[43] <= -84.5) {
                                            if (x[2] <= -79.5) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[23] <= -94.5) {
                                if (x[13] <= -77.5) {
                                    if (x[3] <= -85.0) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #28
                        if (x[2] <= -73.0) {
                            if (x[39] <= -84.0) {
                                if (x[14] <= -63.5) {
                                    if (x[18] <= -85.0) {
                                        if (x[49] <= -88.0) {
                                            if (x[15] <= -74.5) {
                                                if (x[41] <= -71.5) {
                                                    if (x[31] <= -94.0) {
                                                        if (x[29] <= -75.0) {
                                                            if (x[14] <= -92.5) {
                                                                votes[14] += 1;
                                                            }

                                                            else {
                                                                if (x[9] <= -92.5) {
                                                                    votes[13] += 1;
                                                                }

                                                                else {
                                                                    votes[12] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                if (x[43] <= -91.0) {
                                                    if (x[25] <= -95.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[14] <= -82.5) {
                                                if (x[2] <= -85.5) {
                                                    if (x[15] <= -94.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[31] <= -80.0) {
                                                            if (x[27] <= -95.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                if (x[15] <= -84.5) {
                                                                    if (x[36] <= -88.5) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= -84.5) {
                                                        if (x[48] <= -69.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[35] <= -86.5) {
                                                            if (x[49] <= -63.5) {
                                                                if (x[3] <= -82.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[9] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[31] <= -70.0) {
                                                    if (x[27] <= -93.5) {
                                                        if (x[48] <= -80.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[29] <= -95.0) {
                                            if (x[40] <= -82.5) {
                                                if (x[18] <= -70.5) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[11] += 1;
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            votes[5] += 1;
                        }

                        // tree #29
                        if (x[26] <= -78.0) {
                            if (x[3] <= -75.5) {
                                if (x[42] <= -95.5) {
                                    if (x[30] <= -74.5) {
                                        if (x[19] <= -84.5) {
                                            if (x[49] <= -90.5) {
                                                if (x[25] <= -95.0) {
                                                    if (x[22] <= -94.0) {
                                                        if (x[29] <= -76.0) {
                                                            if (x[41] <= -69.5) {
                                                                if (x[30] <= -94.0) {
                                                                    if (x[41] <= -90.0) {
                                                                        if (x[38] <= -81.5) {
                                                                            if (x[12] <= -91.0) {
                                                                                if (x[1] <= -94.0) {
                                                                                    if (x[9] <= -93.0) {
                                                                                        votes[16] += 1;
                                                                                    }

                                                                                    else {
                                                                                        votes[11] += 1;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[3] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[14] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                if (x[48] <= -69.0) {
                                                    if (x[31] <= -94.0) {
                                                        if (x[14] <= -94.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[16] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[26] <= -84.0) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[26] <= -94.5) {
                                                        if (x[30] <= -78.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[19] <= -68.5) {
                                                if (x[28] <= -83.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[27] <= -88.5) {
                                            if (x[37] <= -93.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[14] <= -64.0) {
                                        votes[12] += 1;
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= -72.5) {
                                    if (x[8] <= -95.5) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[14] <= -80.5) {
                                votes[13] += 1;
                            }

                            else {
                                if (x[48] <= -95.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #30
                        if (x[2] <= -75.5) {
                            if (x[19] <= -84.5) {
                                if (x[30] <= -74.5) {
                                    if (x[15] <= -64.0) {
                                        if (x[12] <= -93.0) {
                                            if (x[28] <= -76.0) {
                                                if (x[8] <= -93.5) {
                                                    if (x[41] <= -89.5) {
                                                        if (x[26] <= -82.0) {
                                                            if (x[35] <= -80.0) {
                                                                if (x[26] <= -94.0) {
                                                                    if (x[30] <= -92.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[35] <= -84.5) {
                                                                            if (x[35] <= -94.0) {
                                                                                votes[9] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[30] <= -77.5) {
                                                                                    votes[9] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[15] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[27] <= -84.0) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[28] <= -93.0) {
                                                            votes[17] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[13] <= -81.5) {
                                                if (x[22] <= -93.5) {
                                                    if (x[37] <= -94.0) {
                                                        votes[13] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }

                                else {
                                    if (x[48] <= -84.5) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        if (x[15] <= -82.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            if (x[3] <= -80.5) {
                                                if (x[1] <= -94.5) {
                                                    if (x[31] <= -69.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[17] <= -93.5) {
                                    if (x[37] <= -90.0) {
                                        if (x[31] <= -88.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[46] <= -95.0) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                if (x[11] <= -94.0) {
                                                    if (x[40] <= -83.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[10] <= -94.5) {
                                        if (x[17] <= -85.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[5] += 1;
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

Rodada 1 - Acurácia média: 0.9667
Rodada 2 - Acurácia média: 0.9583
Rodada 3 - Acurácia média: 0.9667
Rodada 4 - Acurácia média: 0.9542
Rodada 5 - Acurácia média: 0.9833
Rodada 6 - Acurácia média: 0.9625
Rodada 7 - Acurácia média: 0.9625
Rodada 8 - Acurácia média: 0.9833
Rodada 9 - Acurácia média: 0.9750
Rodada 10 - Acurácia média: 0.9792

======================================
=========== Random Forest ============
======================================
Acurácia média (10 execuções): 0.9692
Desvio padrão entre execuções: 0.0099

Acurácia no conjunto de teste: 1.0000 (100.00%)

Acurácia no conjunto de teste: 1.0
Tentativa:  2

Atingiu 100.00% de acurácia!
*/
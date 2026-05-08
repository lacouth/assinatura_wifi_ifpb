#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest05U {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[18] = { 0 };
                        // tree #1
                        if (x[10] <= -71.0) {
                            if (x[23] <= -81.5) {
                                if (x[14] <= -68.5) {
                                    if (x[28] <= -89.5) {
                                        if (x[25] <= -95.5) {
                                            if (x[26] <= -78.5) {
                                                if (x[16] <= -94.5) {
                                                    if (x[22] <= -85.0) {
                                                        if (x[3] <= -94.5) {
                                                            if (x[35] <= -73.5) {
                                                                if (x[23] <= -94.5) {
                                                                    votes[8] += 1;
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
                                                            if (x[10] <= -93.0) {
                                                                if (x[42] <= -73.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }
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
                                                if (x[27] <= -67.0) {
                                                    if (x[31] <= -94.0) {
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
                                            if (x[39] <= -94.0) {
                                                if (x[26] <= -87.5) {
                                                    if (x[42] <= -94.0) {
                                                        if (x[13] <= -94.5) {
                                                            votes[17] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[28] <= -87.5) {
                                            if (x[3] <= -90.0) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            if (x[27] <= -95.0) {
                                                votes[16] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[28] <= -90.0) {
                                    if (x[11] <= -92.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        if (x[42] <= -94.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[16] += 1;
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #2
                        if (x[2] <= -79.5) {
                            if (x[35] <= -84.5) {
                                if (x[23] <= -82.5) {
                                    if (x[42] <= -64.0) {
                                        if (x[24] <= -71.0) {
                                            if (x[21] <= -89.5) {
                                                if (x[10] <= -73.5) {
                                                    if (x[0] <= -95.0) {
                                                        if (x[40] <= -95.0) {
                                                            if (x[43] <= -74.0) {
                                                                if (x[23] <= -94.5) {
                                                                    if (x[3] <= -92.5) {
                                                                        if (x[15] <= -73.5) {
                                                                            votes[14] += 1;
                                                                        }

                                                                        else {
                                                                            votes[4] += 1;
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
                                                                votes[9] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[11] += 1;
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
                                        votes[10] += 1;
                                    }
                                }

                                else {
                                    if (x[42] <= -94.5) {
                                        if (x[18] <= -87.0) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= -95.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[25] <= -86.5) {
                                    if (x[14] <= -88.5) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= -88.5) {
                                if (x[21] <= -93.0) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[12] += 1;
                                }
                            }

                            else {
                                votes[7] += 1;
                            }
                        }

                        // tree #3
                        if (x[2] <= -70.5) {
                            if (x[15] <= -80.5) {
                                if (x[28] <= -95.0) {
                                    if (x[19] <= -93.5) {
                                        if (x[6] <= -94.5) {
                                            if (x[43] <= -87.0) {
                                                if (x[22] <= -70.5) {
                                                    if (x[42] <= -94.5) {
                                                        if (x[20] <= -90.5) {
                                                            if (x[3] <= -77.5) {
                                                                if (x[35] <= -74.5) {
                                                                    if (x[2] <= -91.0) {
                                                                        if (x[23] <= -89.5) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[11] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[17] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[11] <= -74.5) {
                                                                votes[12] += 1;
                                                            }

                                                            else {
                                                                votes[11] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= -94.0) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= -78.0) {
                                                    if (x[26] <= -88.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= -81.0) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
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
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -86.0) {
                                        if (x[29] <= -84.0) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[43] <= -64.5) {
                                            if (x[42] <= -77.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[34] <= -83.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[8] += 1;
                                }
                            }
                        }

                        else {
                            votes[5] += 1;
                        }

                        // tree #4
                        if (x[3] <= -94.5) {
                            if (x[32] <= -94.5) {
                                if (x[18] <= -93.0) {
                                    if (x[31] <= -94.0) {
                                        if (x[42] <= -96.5) {
                                            if (x[40] <= -94.0) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            if (x[24] <= -95.0) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                if (x[27] <= -89.5) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    if (x[24] <= -85.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[38] <= -94.5) {
                                            if (x[26] <= -92.0) {
                                                if (x[25] <= -93.0) {
                                                    votes[16] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
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
                            if (x[23] <= -78.5) {
                                if (x[3] <= -79.5) {
                                    if (x[1] <= -95.0) {
                                        if (x[42] <= -92.5) {
                                            votes[11] += 1;
                                        }

                                        else {
                                            if (x[28] <= -89.5) {
                                                if (x[2] <= -82.5) {
                                                    if (x[43] <= -74.5) {
                                                        votes[2] += 1;
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
                                                if (x[27] <= -88.5) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[27] <= -80.5) {
                                        if (x[23] <= -92.0) {
                                            if (x[42] <= -93.0) {
                                                votes[12] += 1;
                                            }

                                            else {
                                                if (x[42] <= -74.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
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

                        // tree #5
                        if (x[27] <= -83.5) {
                            if (x[11] <= -71.0) {
                                if (x[25] <= -70.0) {
                                    if (x[3] <= -77.5) {
                                        if (x[31] <= -85.5) {
                                            if (x[18] <= -87.5) {
                                                if (x[28] <= -88.5) {
                                                    if (x[32] <= -94.5) {
                                                        if (x[25] <= -86.5) {
                                                            if (x[12] <= -89.5) {
                                                                if (x[10] <= -93.0) {
                                                                    if (x[3] <= -85.5) {
                                                                        if (x[42] <= -87.5) {
                                                                            if (x[26] <= -95.0) {
                                                                                votes[17] += 1;
                                                                            }

                                                                            else {
                                                                                votes[4] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[14] <= -87.0) {
                                                                                votes[9] += 1;
                                                                            }

                                                                            else {
                                                                                votes[8] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[12] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
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
                                                    if (x[42] <= -71.0) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        else {
                            if (x[31] <= -80.0) {
                                if (x[3] <= -80.0) {
                                    if (x[22] <= -85.5) {
                                        votes[9] += 1;
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
                                votes[0] += 1;
                            }
                        }

                        // tree #6
                        if (x[23] <= -82.5) {
                            if (x[14] <= -81.0) {
                                if (x[10] <= -68.0) {
                                    if (x[29] <= -87.5) {
                                        if (x[43] <= -86.0) {
                                            if (x[14] <= -95.0) {
                                                if (x[24] <= -75.5) {
                                                    if (x[11] <= -81.5) {
                                                        if (x[10] <= -93.5) {
                                                            votes[17] += 1;
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
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= -79.5) {
                                                if (x[10] <= -93.0) {
                                                    if (x[28] <= -94.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= -83.0) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
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

                                    else {
                                        if (x[28] <= -94.0) {
                                            if (x[23] <= -92.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }

                                        else {
                                            if (x[23] <= -94.0) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[11] += 1;
                                }
                            }

                            else {
                                if (x[15] <= -68.5) {
                                    votes[8] += 1;
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            if (x[18] <= -87.5) {
                                if (x[31] <= -92.0) {
                                    if (x[23] <= -81.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[23] <= -78.0) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #7
                        if (x[18] <= -87.0) {
                            if (x[33] <= -94.5) {
                                if (x[11] <= -67.5) {
                                    if (x[0] <= -95.0) {
                                        if (x[27] <= -77.5) {
                                            if (x[2] <= -77.5) {
                                                if (x[3] <= -86.5) {
                                                    if (x[14] <= -81.0) {
                                                        if (x[42] <= -84.5) {
                                                            if (x[43] <= -88.0) {
                                                                if (x[26] <= -94.0) {
                                                                    if (x[30] <= -94.5) {
                                                                        votes[17] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[15] <= -95.0) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            votes[14] += 1;
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
                                                            if (x[43] <= -80.5) {
                                                                if (x[42] <= -82.5) {
                                                                    votes[15] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[13] <= -94.5) {
                                                            if (x[15] <= -68.0) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[4] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[26] <= -95.0) {
                                                        if (x[3] <= -82.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[28] <= -88.5) {
                                                            if (x[28] <= -89.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                if (x[43] <= -66.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[10] <= -78.5) {
                                                    votes[12] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[27] <= -79.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
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
                            votes[3] += 1;
                        }

                        // tree #8
                        if (x[0] <= -95.0) {
                            if (x[32] <= -94.5) {
                                if (x[22] <= -81.5) {
                                    if (x[22] <= -85.5) {
                                        if (x[34] <= -85.0) {
                                            if (x[11] <= -74.5) {
                                                if (x[4] <= -94.5) {
                                                    if (x[2] <= -79.5) {
                                                        if (x[42] <= -66.5) {
                                                            if (x[28] <= -88.0) {
                                                                if (x[40] <= -91.0) {
                                                                    if (x[37] <= -92.5) {
                                                                        if (x[26] <= -95.0) {
                                                                            if (x[3] <= -94.5) {
                                                                                if (x[43] <= -89.0) {
                                                                                    votes[1] += 1;
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
                                                                            votes[9] += 1;
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
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[26] <= -88.5) {
                                                            votes[2] += 1;
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

                                        else {
                                            if (x[41] <= -94.0) {
                                                if (x[14] <= -83.5) {
                                                    if (x[30] <= -94.5) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[20] <= -94.0) {
                                            if (x[3] <= -88.0) {
                                                votes[16] += 1;
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
                                    if (x[19] <= -93.5) {
                                        if (x[29] <= -91.0) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
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
                            if (x[31] <= -80.0) {
                                votes[6] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #9
                        if (x[15] <= -80.5) {
                            if (x[3] <= -78.5) {
                                if (x[1] <= -95.0) {
                                    if (x[29] <= -95.0) {
                                        if (x[23] <= -84.5) {
                                            if (x[23] <= -95.0) {
                                                if (x[35] <= -70.0) {
                                                    if (x[42] <= -94.5) {
                                                        votes[1] += 1;
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
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[22] <= -72.0) {
                                                if (x[23] <= -80.5) {
                                                    votes[13] += 1;
                                                }

                                                else {
                                                    if (x[23] <= -78.5) {
                                                        if (x[23] <= -79.5) {
                                                            if (x[18] <= -87.5) {
                                                                votes[13] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[10] <= -90.0) {
                                                                votes[13] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
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
                                    }

                                    else {
                                        if (x[27] <= -94.5) {
                                            if (x[29] <= -84.0) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }

                                        else {
                                            if (x[22] <= -94.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[26] <= -80.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[27] <= -88.5) {
                                    if (x[21] <= -86.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }
                        }

                        else {
                            if (x[24] <= -94.5) {
                                if (x[31] <= -93.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[8] += 1;
                                }
                            }

                            else {
                                votes[8] += 1;
                            }
                        }

                        // tree #10
                        if (x[34] <= -84.5) {
                            if (x[11] <= -71.0) {
                                if (x[23] <= -81.5) {
                                    if (x[2] <= -70.5) {
                                        if (x[29] <= -84.0) {
                                            if (x[42] <= -95.0) {
                                                if (x[20] <= -94.5) {
                                                    if (x[33] <= -90.5) {
                                                        votes[1] += 1;
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
                                                if (x[11] <= -94.0) {
                                                    if (x[3] <= -94.5) {
                                                        if (x[25] <= -90.5) {
                                                            if (x[40] <= -92.5) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[4] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[43] <= -74.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= -82.5) {
                                                                if (x[3] <= -86.5) {
                                                                    votes[10] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= -95.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        votes[5] += 1;
                                    }
                                }

                                else {
                                    if (x[11] <= -94.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        if (x[3] <= -94.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        else {
                            if (x[35] <= -79.5) {
                                votes[8] += 1;
                            }

                            else {
                                if (x[34] <= -70.5) {
                                    if (x[40] <= -94.0) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }

                                else {
                                    votes[17] += 1;
                                }
                            }
                        }

                        // tree #11
                        if (x[18] <= -87.5) {
                            if (x[34] <= -85.0) {
                                if (x[17] <= -94.0) {
                                    if (x[29] <= -91.0) {
                                        if (x[22] <= -81.0) {
                                            if (x[10] <= -71.0) {
                                                if (x[2] <= -80.5) {
                                                    if (x[25] <= -71.0) {
                                                        if (x[23] <= -92.5) {
                                                            if (x[14] <= -74.0) {
                                                                if (x[25] <= -90.5) {
                                                                    votes[2] += 1;
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
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[10] <= -76.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[26] <= -92.0) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[23] <= -94.5) {
                                            if (x[26] <= -95.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            if (x[27] <= -86.5) {
                                                if (x[43] <= -85.5) {
                                                    votes[16] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[11] <= -71.0) {
                                        votes[12] += 1;
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[26] <= -87.5) {
                                    if (x[25] <= -87.0) {
                                        if (x[12] <= -95.0) {
                                            if (x[15] <= -88.0) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    votes[8] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #12
                        if (x[33] <= -95.5) {
                            if (x[11] <= -71.0) {
                                if (x[15] <= -88.5) {
                                    if (x[42] <= -64.0) {
                                        if (x[3] <= -80.0) {
                                            if (x[29] <= -84.5) {
                                                if (x[10] <= -85.5) {
                                                    if (x[10] <= -94.0) {
                                                        if (x[2] <= -92.5) {
                                                            if (x[34] <= -70.5) {
                                                                if (x[42] <= -94.5) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    if (x[42] <= -86.5) {
                                                                        votes[14] += 1;
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[28] <= -95.0) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[42] <= -94.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }

                                        else {
                                            if (x[42] <= -86.5) {
                                                if (x[10] <= -81.5) {
                                                    votes[12] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }

                                else {
                                    if (x[26] <= -87.0) {
                                        if (x[27] <= -95.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[8] += 1;
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

                        // tree #13
                        if (x[23] <= -86.5) {
                            if (x[39] <= -93.5) {
                                if (x[35] <= -93.5) {
                                    if (x[29] <= -95.0) {
                                        if (x[2] <= -80.5) {
                                            if (x[11] <= -77.0) {
                                                if (x[16] <= -94.0) {
                                                    votes[2] += 1;
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
                                            if (x[42] <= -91.5) {
                                                votes[12] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[43] <= -70.5) {
                                            if (x[43] <= -85.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[40] <= -95.0) {
                                        if (x[43] <= -95.0) {
                                            if (x[35] <= -71.0) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[31] <= -85.5) {
                                if (x[2] <= -78.0) {
                                    if (x[42] <= -91.0) {
                                        if (x[19] <= -88.5) {
                                            votes[13] += 1;
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
                                    votes[5] += 1;
                                }
                            }

                            else {
                                if (x[26] <= -91.5) {
                                    votes[16] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #14
                        if (x[31] <= -75.5) {
                            if (x[10] <= -71.0) {
                                if (x[32] <= -94.5) {
                                    if (x[11] <= -83.0) {
                                        if (x[35] <= -84.0) {
                                            if (x[26] <= -79.5) {
                                                if (x[21] <= -94.0) {
                                                    if (x[30] <= -84.5) {
                                                        if (x[43] <= -64.0) {
                                                            if (x[39] <= -94.0) {
                                                                if (x[2] <= -84.5) {
                                                                    if (x[27] <= -89.5) {
                                                                        if (x[28] <= -94.0) {
                                                                            if (x[26] <= -94.0) {
                                                                                if (x[18] <= -92.0) {
                                                                                    votes[13] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[3] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[25] <= -90.5) {
                                                                                    votes[4] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[14] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[15] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
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
                                                            votes[10] += 1;
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
                                                if (x[31] <= -94.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[34] <= -79.0) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                if (x[24] <= -88.0) {
                                                    if (x[34] <= -70.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[23] <= -81.0) {
                                            if (x[26] <= -78.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
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
                                votes[11] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #15
                        if (x[10] <= -71.0) {
                            if (x[18] <= -87.5) {
                                if (x[43] <= -88.5) {
                                    if (x[3] <= -85.0) {
                                        if (x[15] <= -69.0) {
                                            if (x[30] <= -93.5) {
                                                if (x[23] <= -90.5) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }

                                            else {
                                                if (x[27] <= -92.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[24] <= -95.0) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[22] <= -92.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[43] <= -63.5) {
                                        if (x[23] <= -82.5) {
                                            if (x[26] <= -79.5) {
                                                if (x[23] <= -94.5) {
                                                    if (x[43] <= -74.5) {
                                                        if (x[34] <= -91.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[26] <= -92.0) {
                                                                votes[14] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[27] <= -86.5) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[23] <= -86.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    if (x[11] <= -82.0) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[29] <= -91.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
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

                        // tree #16
                        if (x[15] <= -80.0) {
                            if (x[11] <= -78.0) {
                                if (x[22] <= -83.5) {
                                    if (x[3] <= -78.5) {
                                        if (x[35] <= -70.0) {
                                            if (x[13] <= -95.0) {
                                                if (x[39] <= -93.5) {
                                                    if (x[21] <= -94.0) {
                                                        if (x[26] <= -84.5) {
                                                            if (x[28] <= -89.5) {
                                                                if (x[34] <= -88.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[3] <= -83.5) {
                                                                    if (x[27] <= -88.5) {
                                                                        votes[15] += 1;
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
                                                            if (x[27] <= -80.0) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                if (x[0] <= -95.0) {
                                                                    votes[7] += 1;
                                                                }

                                                                else {
                                                                    votes[6] += 1;
                                                                }
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
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[37] <= -92.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[19] <= -88.5) {
                                        if (x[42] <= -94.0) {
                                            votes[13] += 1;
                                        }

                                        else {
                                            if (x[0] <= -95.0) {
                                                votes[16] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[22] <= -86.0) {
                                    votes[11] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            if (x[14] <= -68.5) {
                                votes[8] += 1;
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #17
                        if (x[5] <= -95.0) {
                            if (x[11] <= -72.5) {
                                if (x[2] <= -79.5) {
                                    if (x[24] <= -88.0) {
                                        if (x[35] <= -70.5) {
                                            if (x[30] <= -94.5) {
                                                if (x[22] <= -84.0) {
                                                    if (x[3] <= -94.5) {
                                                        if (x[28] <= -94.0) {
                                                            if (x[24] <= -89.5) {
                                                                votes[4] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[42] <= -72.5) {
                                                            if (x[3] <= -86.0) {
                                                                if (x[43] <= -80.5) {
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

                                                        else {
                                                            if (x[26] <= -84.0) {
                                                                votes[10] += 1;
                                                            }

                                                            else {
                                                                votes[9] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -73.5) {
                                                        if (x[22] <= -80.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            if (x[10] <= -92.5) {
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
                                            }

                                            else {
                                                if (x[34] <= -92.0) {
                                                    if (x[42] <= -83.5) {
                                                        if (x[10] <= -92.5) {
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
                                                    votes[8] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[13] <= -95.0) {
                                            if (x[25] <= -72.5) {
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
                                    if (x[27] <= -88.5) {
                                        if (x[22] <= -92.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
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
                        }

                        else {
                            votes[12] += 1;
                        }

                        // tree #18
                        if (x[11] <= -71.0) {
                            if (x[23] <= -82.5) {
                                if (x[42] <= -73.0) {
                                    if (x[21] <= -94.0) {
                                        if (x[26] <= -87.5) {
                                            if (x[2] <= -74.5) {
                                                if (x[24] <= -71.0) {
                                                    if (x[2] <= -85.5) {
                                                        if (x[41] <= -94.0) {
                                                            if (x[14] <= -92.0) {
                                                                if (x[29] <= -95.0) {
                                                                    if (x[35] <= -82.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[17] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[34] <= -76.5) {
                                                                    votes[8] += 1;
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[4] += 1;
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
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= -95.0) {
                                                if (x[34] <= -92.0) {
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

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    if (x[29] <= -86.5) {
                                        if (x[43] <= -63.5) {
                                            votes[9] += 1;
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
                                if (x[33] <= -95.5) {
                                    if (x[30] <= -76.0) {
                                        if (x[18] <= -93.0) {
                                            if (x[31] <= -92.0) {
                                                votes[5] += 1;
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
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #19
                        if (x[18] <= -88.0) {
                            if (x[42] <= -85.5) {
                                if (x[11] <= -71.0) {
                                    if (x[23] <= -93.0) {
                                        if (x[17] <= -94.0) {
                                            if (x[35] <= -70.0) {
                                                if (x[27] <= -86.0) {
                                                    if (x[14] <= -80.5) {
                                                        if (x[42] <= -94.5) {
                                                            if (x[34] <= -88.5) {
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
                                                        votes[8] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[8] += 1;
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
                                        if (x[11] <= -79.5) {
                                            if (x[30] <= -87.0) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[11] += 1;
                                }
                            }

                            else {
                                if (x[23] <= -86.0) {
                                    if (x[26] <= -95.0) {
                                        if (x[22] <= -95.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[42] <= -63.5) {
                                            if (x[10] <= -90.0) {
                                                if (x[22] <= -88.0) {
                                                    votes[9] += 1;
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
                                            votes[10] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[22] <= -82.0) {
                                        votes[6] += 1;
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #20
                        if (x[16] <= -94.5) {
                            if (x[18] <= -87.5) {
                                if (x[31] <= -75.5) {
                                    if (x[43] <= -85.0) {
                                        if (x[35] <= -70.0) {
                                            if (x[10] <= -81.5) {
                                                if (x[33] <= -95.5) {
                                                    if (x[14] <= -68.5) {
                                                        if (x[15] <= -80.0) {
                                                            if (x[34] <= -82.0) {
                                                                if (x[22] <= -90.5) {
                                                                    if (x[4] <= -93.0) {
                                                                        votes[1] += 1;
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
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }

                                            else {
                                                if (x[11] <= -64.0) {
                                                    votes[5] += 1;
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
                                        if (x[27] <= -78.5) {
                                            if (x[43] <= -63.5) {
                                                if (x[27] <= -94.5) {
                                                    if (x[42] <= -79.5) {
                                                        if (x[3] <= -94.5) {
                                                            votes[15] += 1;
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
                                                    votes[9] += 1;
                                                }
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= -80.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
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
                            if (x[22] <= -93.5) {
                                votes[12] += 1;
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        // tree #21
                        if (x[18] <= -88.0) {
                            if (x[22] <= -85.5) {
                                if (x[14] <= -68.5) {
                                    if (x[15] <= -81.0) {
                                        if (x[23] <= -95.0) {
                                            if (x[38] <= -92.5) {
                                                if (x[28] <= -94.5) {
                                                    if (x[42] <= -87.5) {
                                                        if (x[24] <= -88.5) {
                                                            if (x[11] <= -92.0) {
                                                                votes[17] += 1;
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= -81.5) {
                                                            if (x[43] <= -72.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[9] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[43] <= -83.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[26] <= -89.0) {
                                                        if (x[28] <= -88.5) {
                                                            votes[9] += 1;
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
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= -78.5) {
                                                if (x[42] <= -91.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    if (x[26] <= -86.0) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        if (x[43] <= -74.0) {
                                                            votes[6] += 1;
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
                                        }
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[3] <= -76.5) {
                                    if (x[31] <= -94.0) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        if (x[27] <= -91.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            if (x[42] <= -84.5) {
                                                votes[0] += 1;
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
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #22
                        if (x[23] <= -82.5) {
                            if (x[25] <= -86.5) {
                                if (x[42] <= -88.5) {
                                    if (x[11] <= -71.0) {
                                        if (x[10] <= -78.5) {
                                            if (x[17] <= -94.0) {
                                                if (x[35] <= -74.5) {
                                                    votes[4] += 1;
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
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -93.0) {
                                        if (x[28] <= -95.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }

                                    else {
                                        if (x[27] <= -73.5) {
                                            if (x[3] <= -80.5) {
                                                if (x[1] <= -95.0) {
                                                    if (x[26] <= -95.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                if (x[26] <= -95.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[38] <= -92.5) {
                                    votes[14] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[18] <= -88.5) {
                                if (x[30] <= -91.5) {
                                    if (x[33] <= -95.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[22] <= -77.5) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        // tree #23
                        if (x[18] <= -88.0) {
                            if (x[33] <= -95.5) {
                                if (x[15] <= -80.5) {
                                    if (x[3] <= -78.5) {
                                        if (x[25] <= -70.0) {
                                            if (x[31] <= -77.0) {
                                                if (x[13] <= -95.0) {
                                                    if (x[11] <= -74.0) {
                                                        if (x[27] <= -78.0) {
                                                            if (x[26] <= -87.5) {
                                                                if (x[42] <= -80.5) {
                                                                    if (x[3] <= -94.5) {
                                                                        if (x[30] <= -91.5) {
                                                                            if (x[43] <= -92.0) {
                                                                                votes[17] += 1;
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
                                                                        if (x[21] <= -93.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[12] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= -85.5) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[43] <= -63.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
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
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[10] <= -78.0) {
                                            if (x[42] <= -91.5) {
                                                votes[12] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            if (x[27] <= -79.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[26] <= -87.5) {
                                        votes[4] += 1;
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
                            votes[3] += 1;
                        }

                        // tree #24
                        if (x[34] <= -72.5) {
                            if (x[33] <= -95.5) {
                                if (x[10] <= -71.0) {
                                    if (x[18] <= -92.5) {
                                        if (x[26] <= -78.5) {
                                            if (x[11] <= -79.5) {
                                                if (x[0] <= -95.0) {
                                                    if (x[34] <= -84.5) {
                                                        if (x[39] <= -94.0) {
                                                            if (x[22] <= -88.5) {
                                                                if (x[21] <= -94.0) {
                                                                    if (x[15] <= -74.0) {
                                                                        if (x[22] <= -94.5) {
                                                                            if (x[28] <= -94.5) {
                                                                                if (x[15] <= -92.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[14] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[3] <= -86.5) {
                                                                                    votes[10] += 1;
                                                                                }

                                                                                else {
                                                                                    if (x[43] <= -66.5) {
                                                                                        votes[9] += 1;
                                                                                    }

                                                                                    else {
                                                                                        votes[10] += 1;
                                                                                    }
                                                                                }
                                                                            }
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
                                                                    votes[12] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[29] <= -84.0) {
                                                                    if (x[27] <= -84.5) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[8] += 1;
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
                                            if (x[3] <= -80.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
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
                                votes[13] += 1;
                            }
                        }

                        else {
                            votes[17] += 1;
                        }

                        // tree #25
                        if (x[23] <= -84.5) {
                            if (x[10] <= -69.0) {
                                if (x[2] <= -79.5) {
                                    if (x[24] <= -71.0) {
                                        if (x[27] <= -87.5) {
                                            if (x[3] <= -94.5) {
                                                if (x[41] <= -94.0) {
                                                    if (x[34] <= -70.5) {
                                                        votes[14] += 1;
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                if (x[21] <= -94.0) {
                                                    if (x[29] <= -87.0) {
                                                        if (x[26] <= -95.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            if (x[42] <= -66.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[15] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[42] <= -84.0) {
                                                if (x[42] <= -88.5) {
                                                    if (x[14] <= -88.5) {
                                                        votes[14] += 1;
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
                                                if (x[10] <= -93.5) {
                                                    votes[9] += 1;
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
                                    if (x[26] <= -88.5) {
                                        if (x[21] <= -91.5) {
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
                            }

                            else {
                                votes[11] += 1;
                            }
                        }

                        else {
                            if (x[29] <= -87.0) {
                                if (x[19] <= -87.5) {
                                    if (x[0] <= -95.0) {
                                        if (x[2] <= -88.0) {
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

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                votes[16] += 1;
                            }
                        }

                        // tree #26
                        if (x[11] <= -71.0) {
                            if (x[22] <= -81.5) {
                                if (x[35] <= -85.5) {
                                    if (x[26] <= -79.5) {
                                        if (x[11] <= -81.0) {
                                            if (x[43] <= -63.5) {
                                                if (x[38] <= -94.5) {
                                                    if (x[23] <= -94.5) {
                                                        if (x[13] <= -94.5) {
                                                            if (x[34] <= -93.0) {
                                                                if (x[27] <= -94.5) {
                                                                    if (x[10] <= -93.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[12] += 1;
                                                                    }
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
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[29] <= -84.0) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            votes[16] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= -86.0) {
                                            if (x[26] <= -74.0) {
                                                if (x[2] <= -81.0) {
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

                                else {
                                    if (x[15] <= -80.5) {
                                        if (x[26] <= -94.0) {
                                            if (x[24] <= -93.5) {
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

                                    else {
                                        votes[8] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[43] <= -94.5) {
                                    if (x[19] <= -88.5) {
                                        votes[13] += 1;
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[27] <= -91.5) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[11] += 1;
                        }

                        // tree #27
                        if (x[3] <= -78.5) {
                            if (x[33] <= -94.5) {
                                if (x[38] <= -94.5) {
                                    if (x[14] <= -81.0) {
                                        if (x[23] <= -81.0) {
                                            if (x[4] <= -89.5) {
                                                if (x[1] <= -95.0) {
                                                    if (x[14] <= -95.0) {
                                                        if (x[10] <= -71.5) {
                                                            if (x[42] <= -64.0) {
                                                                if (x[27] <= -94.5) {
                                                                    if (x[21] <= -94.0) {
                                                                        if (x[42] <= -84.5) {
                                                                            if (x[42] <= -86.5) {
                                                                                if (x[43] <= -93.5) {
                                                                                    votes[17] += 1;
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
                                                                            votes[15] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[12] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[10] <= -93.0) {
                                                                        votes[9] += 1;
                                                                    }

                                                                    else {
                                                                        votes[7] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
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
                                            if (x[43] <= -94.5) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[13] <= -94.5) {
                                            if (x[14] <= -68.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
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
                            if (x[23] <= -84.5) {
                                votes[7] += 1;
                            }

                            else {
                                votes[5] += 1;
                            }
                        }

                        // tree #28
                        if (x[26] <= -73.5) {
                            if (x[28] <= -83.5) {
                                if (x[32] <= -94.5) {
                                    if (x[23] <= -81.5) {
                                        if (x[35] <= -71.0) {
                                            if (x[14] <= -68.5) {
                                                if (x[11] <= -78.0) {
                                                    if (x[25] <= -73.0) {
                                                        if (x[23] <= -94.0) {
                                                            if (x[25] <= -95.5) {
                                                                if (x[11] <= -89.5) {
                                                                    if (x[28] <= -89.5) {
                                                                        if (x[2] <= -78.0) {
                                                                            if (x[42] <= -87.0) {
                                                                                votes[8] += 1;
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[7] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[42] <= -66.5) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[10] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[12] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[24] <= -87.5) {
                                                                    votes[8] += 1;
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[31] <= -94.0) {
                                                                if (x[27] <= -91.5) {
                                                                    votes[15] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[10] <= -71.0) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[19] <= -93.5) {
                                            if (x[10] <= -94.5) {
                                                votes[13] += 1;
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
                                    votes[13] += 1;
                                }
                            }

                            else {
                                votes[16] += 1;
                            }
                        }

                        else {
                            votes[7] += 1;
                        }

                        // tree #29
                        if (x[33] <= -94.5) {
                            if (x[19] <= -93.5) {
                                if (x[31] <= -84.5) {
                                    if (x[27] <= -73.5) {
                                        if (x[26] <= -95.0) {
                                            if (x[29] <= -95.0) {
                                                if (x[23] <= -86.5) {
                                                    if (x[34] <= -70.5) {
                                                        if (x[22] <= -95.0) {
                                                            if (x[31] <= -88.5) {
                                                                if (x[2] <= -90.0) {
                                                                    if (x[27] <= -93.5) {
                                                                        votes[2] += 1;
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
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= -86.5) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[35] <= -92.5) {
                                                if (x[23] <= -86.5) {
                                                    if (x[2] <= -80.5) {
                                                        if (x[2] <= -86.0) {
                                                            votes[10] += 1;
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[26] <= -82.5) {
                                                            votes[10] += 1;
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
                                                votes[8] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    if (x[27] <= -91.5) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #30
                        if (x[43] <= -64.0) {
                            if (x[10] <= -71.0) {
                                if (x[18] <= -87.5) {
                                    if (x[24] <= -72.5) {
                                        if (x[27] <= -77.5) {
                                            if (x[32] <= -94.5) {
                                                if (x[10] <= -78.5) {
                                                    if (x[20] <= -94.5) {
                                                        if (x[14] <= -83.5) {
                                                            if (x[30] <= -84.0) {
                                                                if (x[28] <= -88.5) {
                                                                    if (x[35] <= -89.0) {
                                                                        if (x[42] <= -74.0) {
                                                                            if (x[42] <= -81.5) {
                                                                                votes[6] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[22] <= -95.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[15] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[9] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[34] <= -70.5) {
                                                                            votes[14] += 1;
                                                                        }

                                                                        else {
                                                                            votes[17] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= -93.5) {
                                                                    if (x[1] <= -94.5) {
                                                                        votes[16] += 1;
                                                                    }

                                                                    else {
                                                                        votes[0] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[42] <= -88.5) {
                                                                if (x[31] <= -93.0) {
                                                                    if (x[40] <= -86.5) {
                                                                        votes[8] += 1;
                                                                    }

                                                                    else {
                                                                        votes[4] += 1;
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

                                                    else {
                                                        votes[12] += 1;
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
                                            if (x[14] <= -86.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
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
                            votes[10] += 1;
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

{0: 'Auditório de Eng. Elétrica',
 1: 'Coordenação de Eng. Elétrica',
 2: 'Coordenação de pós em Eng. Elétrica',
 3: 'Lab. Analítico',
 4: 'Lab. Informática 09',
 5: 'Lab. de Ciências',
 6: 'Lab. de Instrumentação biomédica',
 7: 'Lab. de Medição e Calibração',
 8: 'Lab. de Telecomunicações',
 9: 'Lab. de fibras ópticas',
 10: 'Lab. de redes convergentes',
 11: 'Lab. química 01',
 12: 'Lab. química 03',
 13: 'Núcleo de Pesquisa e Atendimento',
 14: 'PET Eng. Elétrica',
 15: 'Pesquisa em Eng. Elétrica',
 16: 'Práticas didáticas',
 17: 'Sala dos professores'
}

# 3. Modelo a ser treinado

rf_model = RandomForestClassifier(
    n_estimators=30,          # Número de árvores
    max_depth=None,              # Profundidade máxima
    max_features='sqrt',       # Subconjunto aleatório de features
    random_state=42
)


#KFold

Rodada 1 - Acurácia média: 0.9917
Rodada 2 - Acurácia média: 0.9917
Rodada 3 - Acurácia média: 0.9917
Rodada 4 - Acurácia média: 1.0000
Rodada 5 - Acurácia média: 0.9917
Rodada 6 - Acurácia média: 0.9833
Rodada 7 - Acurácia média: 0.9833
Rodada 8 - Acurácia média: 0.9917
Rodada 9 - Acurácia média: 1.0000
Rodada 10 - Acurácia média: 0.9833

======================================
=========== Random Forest ============
======================================
Acurácia média (10 execuções): 0.9908
Desvio padrão entre execuções: 0.0058

Acurácia no conjunto de teste: 1.0000 (100.00%)

Acurácia no conjunto de teste: 1.0
Tentativa:  1

Atingiu 100.00% de acurácia!

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

*/
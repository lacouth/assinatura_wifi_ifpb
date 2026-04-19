#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForestMacro05 {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[24] = { 0 };
                        // tree #1
                        if (x[25] <= -71.5) {
                            if (x[33] <= -86.5) {
                                if (x[23] <= -77.0) {
                                    if (x[10] <= -71.0) {
                                        if (x[30] <= -84.5) {
                                            if (x[19] <= -93.5) {
                                                if (x[15] <= -80.5) {
                                                    if (x[27] <= -80.5) {
                                                        if (x[11] <= -92.5) {
                                                            if (x[25] <= -93.0) {
                                                                if (x[22] <= -93.5) {
                                                                    if (x[26] <= -93.5) {
                                                                        if (x[3] <= -94.5) {
                                                                            votes[22] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[13] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[23] <= -87.5) {
                                                                        votes[8] += 1;
                                                                    }

                                                                    else {
                                                                        votes[20] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[5] <= -95.0) {
                                                                votes[7] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= -81.5) {
                                                            votes[5] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= -74.5) {
                                                                votes[11] += 1;
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[41] <= -94.0) {
                                                        if (x[34] <= -82.0) {
                                                            if (x[26] <= -86.0) {
                                                                votes[4] += 1;
                                                            }

                                                            else {
                                                                votes[23] += 1;
                                                            }
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
                                                if (x[19] <= -82.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[10] <= -58.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[30] <= -87.5) {
                                        votes[18] += 1;
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
                            votes[1] += 1;
                        }

                        // tree #2
                        if (x[22] <= -70.5) {
                            if (x[14] <= -81.0) {
                                if (x[22] <= -81.5) {
                                    if (x[42] <= -69.5) {
                                        if (x[22] <= -83.5) {
                                            if (x[43] <= -87.5) {
                                                if (x[21] <= -95.5) {
                                                    if (x[34] <= -70.5) {
                                                        if (x[38] <= -94.5) {
                                                            if (x[2] <= -90.5) {
                                                                votes[19] += 1;
                                                            }

                                                            else {
                                                                if (x[11] <= -63.5) {
                                                                    if (x[10] <= -72.5) {
                                                                        votes[7] += 1;
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[4] <= -93.5) {
                                                        if (x[3] <= -81.0) {
                                                            votes[17] += 1;
                                                        }

                                                        else {
                                                            votes[16] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[23] <= -84.5) {
                                                    if (x[43] <= -85.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= -84.0) {
                                                            votes[20] += 1;
                                                        }

                                                        else {
                                                            if (x[23] <= -89.0) {
                                                                if (x[28] <= -93.5) {
                                                                    if (x[2] <= -79.5) {
                                                                        votes[11] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= -77.5) {
                                                                            votes[6] += 1;
                                                                        }

                                                                        else {
                                                                            votes[11] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
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
                                            if (x[2] <= -85.0) {
                                                votes[21] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[28] <= -94.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[11] <= -94.5) {
                                        if (x[21] <= -96.0) {
                                            if (x[33] <= -90.0) {
                                                votes[21] += 1;
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
                                        if (x[42] <= -94.5) {
                                            if (x[31] <= -95.0) {
                                                if (x[10] <= -82.5) {
                                                    votes[12] += 1;
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
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[40] <= -93.5) {
                                    if (x[26] <= -85.0) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }
                        }

                        else {
                            votes[18] += 1;
                        }

                        // tree #3
                        if (x[42] <= -64.0) {
                            if (x[32] <= -86.0) {
                                if (x[5] <= -95.0) {
                                    if (x[0] <= -95.0) {
                                        if (x[26] <= -85.5) {
                                            if (x[10] <= -64.0) {
                                                if (x[29] <= -87.5) {
                                                    if (x[35] <= -70.0) {
                                                        if (x[25] <= -70.0) {
                                                            if (x[15] <= -80.0) {
                                                                if (x[9] <= -94.0) {
                                                                    if (x[23] <= -81.5) {
                                                                        if (x[3] <= -80.5) {
                                                                            if (x[13] <= -95.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[19] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[9] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[10] <= -93.0) {
                                                                            votes[18] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[18] <= -85.0) {
                                                                                votes[10] += 1;
                                                                            }

                                                                            else {
                                                                                votes[12] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[14] <= -68.5) {
                                                                    votes[14] += 1;
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
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[31] <= -92.0) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }

                                        else {
                                            if (x[14] <= -87.0) {
                                                if (x[11] <= -88.5) {
                                                    if (x[27] <= -80.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= -84.0) {
                                            if (x[1] <= -88.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[10] <= -85.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[17] += 1;
                                }
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #4
                        if (x[30] <= -76.0) {
                            if (x[26] <= -65.0) {
                                if (x[24] <= -71.0) {
                                    if (x[2] <= -72.0) {
                                        if (x[43] <= -64.0) {
                                            if (x[28] <= -88.5) {
                                                if (x[24] <= -85.0) {
                                                    if (x[33] <= -86.5) {
                                                        if (x[34] <= -70.0) {
                                                            if (x[27] <= -95.0) {
                                                                if (x[42] <= -92.5) {
                                                                    if (x[22] <= -73.0) {
                                                                        if (x[17] <= -87.5) {
                                                                            if (x[17] <= -94.0) {
                                                                                if (x[2] <= -78.0) {
                                                                                    votes[12] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[9] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[17] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[16] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[18] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[34] <= -82.0) {
                                                                    if (x[11] <= -92.5) {
                                                                        if (x[34] <= -85.0) {
                                                                            if (x[2] <= -92.5) {
                                                                                votes[4] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[43] <= -72.0) {
                                                                                    votes[11] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[23] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[5] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[22] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[19] += 1;
                                                }
                                            }

                                            else {
                                                if (x[42] <= -84.5) {
                                                    votes[21] += 1;
                                                }

                                                else {
                                                    if (x[3] <= -84.0) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        if (x[22] <= -83.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #5
                        if (x[26] <= -64.5) {
                            if (x[43] <= -64.0) {
                                if (x[2] <= -76.5) {
                                    if (x[14] <= -80.5) {
                                        if (x[22] <= -70.5) {
                                            if (x[26] <= -78.5) {
                                                if (x[33] <= -92.0) {
                                                    if (x[43] <= -74.0) {
                                                        if (x[10] <= -94.5) {
                                                            if (x[29] <= -87.5) {
                                                                if (x[34] <= -70.0) {
                                                                    if (x[29] <= -94.0) {
                                                                        if (x[43] <= -94.0) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[34] <= -88.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[19] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[29] <= -84.0) {
                                                                    votes[20] += 1;
                                                                }

                                                                else {
                                                                    votes[21] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[19] <= -93.5) {
                                                                if (x[21] <= -95.5) {
                                                                    if (x[30] <= -87.0) {
                                                                        if (x[23] <= -87.5) {
                                                                            votes[16] += 1;
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
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[31] <= -95.0) {
                                                                    if (x[9] <= -94.0) {
                                                                        votes[12] += 1;
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
                                                        votes[8] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[23] <= -86.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }

                                    else {
                                        if (x[14] <= -68.5) {
                                            if (x[30] <= -94.0) {
                                                if (x[26] <= -85.0) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= -94.5) {
                                        if (x[21] <= -86.0) {
                                            if (x[11] <= -73.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                if (x[10] <= -72.5) {
                                                    if (x[2] <= -68.0) {
                                                        votes[9] += 1;
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
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            votes[6] += 1;
                        }

                        // tree #6
                        if (x[14] <= -68.5) {
                            if (x[43] <= -64.0) {
                                if (x[25] <= -70.0) {
                                    if (x[11] <= -95.0) {
                                        if (x[32] <= -94.5) {
                                            if (x[2] <= -78.5) {
                                                if (x[27] <= -88.5) {
                                                    if (x[24] <= -86.0) {
                                                        if (x[2] <= -84.5) {
                                                            if (x[25] <= -95.5) {
                                                                if (x[22] <= -84.0) {
                                                                    if (x[43] <= -74.5) {
                                                                        if (x[22] <= -94.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[20] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[8] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[22] <= -74.0) {
                                                                        votes[21] += 1;
                                                                    }

                                                                    else {
                                                                        votes[18] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[14] <= -88.5) {
                                                        if (x[2] <= -80.5) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[15] <= -74.0) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            if (x[24] <= -95.0) {
                                                                votes[23] += 1;
                                                            }

                                                            else {
                                                                if (x[25] <= -89.0) {
                                                                    votes[14] += 1;
                                                                }

                                                                else {
                                                                    votes[23] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[22] <= -74.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[18] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= -94.5) {
                                            if (x[31] <= -95.0) {
                                                if (x[2] <= -92.0) {
                                                    if (x[10] <= -83.0) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[11] <= -71.0) {
                                                        if (x[26] <= -79.5) {
                                                            if (x[22] <= -82.5) {
                                                                if (x[3] <= -68.0) {
                                                                    votes[9] += 1;
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
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[23] <= -89.0) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= -76.0) {
                                                    if (x[18] <= -93.0) {
                                                        if (x[43] <= -85.5) {
                                                            votes[0] += 1;
                                                        }

                                                        else {
                                                            if (x[1] <= -95.0) {
                                                                votes[11] += 1;
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
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
                            votes[4] += 1;
                        }

                        // tree #7
                        if (x[19] <= -85.5) {
                            if (x[25] <= -71.0) {
                                if (x[43] <= -84.5) {
                                    if (x[19] <= -93.5) {
                                        if (x[29] <= -87.0) {
                                            if (x[14] <= -81.0) {
                                                if (x[32] <= -86.0) {
                                                    if (x[20] <= -89.0) {
                                                        if (x[27] <= -86.0) {
                                                            if (x[26] <= -95.0) {
                                                                if (x[22] <= -95.0) {
                                                                    votes[22] += 1;
                                                                }

                                                                else {
                                                                    if (x[17] <= -95.0) {
                                                                        if (x[2] <= -78.5) {
                                                                            if (x[11] <= -77.5) {
                                                                                votes[18] += 1;
                                                                            }

                                                                            else {
                                                                                votes[15] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[10] <= -75.0) {
                                                                                votes[9] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= -68.0) {
                                                                                    votes[9] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[7] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
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
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[27] <= -85.5) {
                                                    if (x[26] <= -87.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -86.5) {
                                        if (x[10] <= -93.0) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }

                                    else {
                                        if (x[43] <= -64.0) {
                                            if (x[10] <= -95.0) {
                                                if (x[27] <= -75.0) {
                                                    if (x[27] <= -94.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= -94.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[22] <= -78.5) {
                                if (x[30] <= -93.5) {
                                    votes[12] += 1;
                                }

                                else {
                                    votes[10] += 1;
                                }
                            }

                            else {
                                votes[12] += 1;
                            }
                        }

                        // tree #8
                        if (x[14] <= -74.5) {
                            if (x[2] <= -70.5) {
                                if (x[32] <= -85.5) {
                                    if (x[28] <= -89.5) {
                                        if (x[14] <= -95.0) {
                                            if (x[34] <= -75.5) {
                                                if (x[26] <= -64.5) {
                                                    if (x[25] <= -80.5) {
                                                        if (x[1] <= -95.0) {
                                                            if (x[26] <= -79.5) {
                                                                if (x[11] <= -62.5) {
                                                                    if (x[31] <= -93.5) {
                                                                        if (x[22] <= -94.5) {
                                                                            if (x[2] <= -84.5) {
                                                                                if (x[3] <= -87.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[20] <= -94.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[17] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= -90.5) {
                                                                                if (x[19] <= -92.5) {
                                                                                    votes[18] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[12] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[7] <= -94.5) {
                                                                                    votes[8] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[9] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[10] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[11] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= -89.5) {
                                                                votes[5] += 1;
                                                            }

                                                            else {
                                                                if (x[10] <= -85.5) {
                                                                    votes[5] += 1;
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
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }

                                        else {
                                            if (x[15] <= -81.0) {
                                                votes[19] += 1;
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[22] <= -94.0) {
                                            if (x[28] <= -88.5) {
                                                if (x[2] <= -82.5) {
                                                    votes[8] += 1;
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
                                            if (x[30] <= -91.5) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                votes[21] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                if (x[7] <= -94.5) {
                                    if (x[2] <= -68.5) {
                                        if (x[10] <= -74.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            if (x[3] <= -70.0) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    votes[9] += 1;
                                }
                            }
                        }

                        else {
                            if (x[13] <= -95.5) {
                                if (x[25] <= -95.5) {
                                    if (x[14] <= -68.5) {
                                        votes[23] += 1;
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[23] += 1;
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        // tree #9
                        if (x[35] <= -70.0) {
                            if (x[18] <= -85.0) {
                                if (x[34] <= -82.0) {
                                    if (x[14] <= -68.5) {
                                        if (x[43] <= -94.5) {
                                            if (x[10] <= -71.0) {
                                                if (x[2] <= -72.0) {
                                                    if (x[32] <= -85.5) {
                                                        if (x[3] <= -89.5) {
                                                            if (x[39] <= -94.0) {
                                                                if (x[11] <= -92.5) {
                                                                    if (x[31] <= -93.0) {
                                                                        votes[18] += 1;
                                                                    }

                                                                    else {
                                                                        votes[23] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[17] <= -94.0) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
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
                                                if (x[21] <= -94.0) {
                                                    if (x[3] <= -81.5) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        if (x[10] <= -58.5) {
                                                            votes[16] += 1;
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
                                        }

                                        else {
                                            if (x[30] <= -83.5) {
                                                if (x[42] <= -71.5) {
                                                    if (x[24] <= -90.5) {
                                                        if (x[3] <= -81.5) {
                                                            if (x[10] <= -94.0) {
                                                                if (x[42] <= -80.5) {
                                                                    if (x[3] <= -94.5) {
                                                                        votes[20] += 1;
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[5] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[22] <= -87.0) {
                                                                if (x[43] <= -81.5) {
                                                                    votes[6] += 1;
                                                                }

                                                                else {
                                                                    votes[11] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= -80.5) {
                                                        if (x[3] <= -86.5) {
                                                            votes[13] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[23] <= -78.0) {
                                                    votes[21] += 1;
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
                                    if (x[24] <= -87.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[19] += 1;
                                    }
                                }
                            }

                            else {
                                votes[12] += 1;
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #10
                        if (x[39] <= -94.0) {
                            if (x[27] <= -64.5) {
                                if (x[22] <= -76.5) {
                                    if (x[14] <= -68.0) {
                                        if (x[32] <= -91.5) {
                                            if (x[28] <= -94.5) {
                                                if (x[18] <= -85.0) {
                                                    if (x[42] <= -80.5) {
                                                        if (x[11] <= -58.5) {
                                                            if (x[27] <= -85.5) {
                                                                if (x[4] <= -94.5) {
                                                                    if (x[11] <= -71.0) {
                                                                        if (x[11] <= -80.5) {
                                                                            if (x[42] <= -84.5) {
                                                                                if (x[25] <= -94.5) {
                                                                                    votes[22] += 1;
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
                                                                            if (x[21] <= -96.5) {
                                                                                if (x[22] <= -84.5) {
                                                                                    votes[9] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[9] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[7] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[17] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[31] <= -87.5) {
                                                                    votes[5] += 1;
                                                                }

                                                                else {
                                                                    if (x[25] <= -95.5) {
                                                                        if (x[3] <= -91.0) {
                                                                            votes[23] += 1;
                                                                        }

                                                                        else {
                                                                            votes[5] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[23] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[26] <= -79.5) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
                                            }

                                            else {
                                                if (x[31] <= -92.0) {
                                                    if (x[2] <= -93.5) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= -83.5) {
                                                            if (x[28] <= -86.5) {
                                                                votes[13] += 1;
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[43] <= -70.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[22] <= -70.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[18] += 1;
                                    }
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #11
                        if (x[34] <= -79.5) {
                            if (x[3] <= -68.5) {
                                if (x[33] <= -86.5) {
                                    if (x[42] <= -63.5) {
                                        if (x[38] <= -94.5) {
                                            if (x[31] <= -75.5) {
                                                if (x[1] <= -95.0) {
                                                    if (x[33] <= -95.5) {
                                                        if (x[2] <= -90.5) {
                                                            if (x[30] <= -94.0) {
                                                                if (x[22] <= -94.0) {
                                                                    if (x[42] <= -85.0) {
                                                                        if (x[34] <= -82.5) {
                                                                            votes[4] += 1;
                                                                        }

                                                                        else {
                                                                            votes[23] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[43] <= -92.0) {
                                                                        votes[12] += 1;
                                                                    }

                                                                    else {
                                                                        votes[20] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[42] <= -94.0) {
                                                                    votes[10] += 1;
                                                                }

                                                                else {
                                                                    if (x[26] <= -92.0) {
                                                                        votes[21] += 1;
                                                                    }

                                                                    else {
                                                                        votes[23] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[11] <= -68.5) {
                                                                if (x[6] <= -94.5) {
                                                                    if (x[26] <= -64.5) {
                                                                        if (x[36] <= -92.0) {
                                                                            if (x[43] <= -83.0) {
                                                                                if (x[43] <= -93.0) {
                                                                                    votes[7] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[22] <= -87.0) {
                                                                                    votes[11] += 1;
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
                                                                        votes[6] += 1;
                                                                    }
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
                                                        votes[18] += 1;
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
                                            votes[1] += 1;
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

                            else {
                                votes[7] += 1;
                            }
                        }

                        else {
                            if (x[35] <= -70.0) {
                                if (x[13] <= -95.0) {
                                    if (x[25] <= -88.0) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[19] += 1;
                                    }
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }

                            else {
                                votes[22] += 1;
                            }
                        }

                        // tree #12
                        if (x[38] <= -94.5) {
                            if (x[27] <= -65.0) {
                                if (x[2] <= -94.5) {
                                    if (x[42] <= -96.5) {
                                        if (x[21] <= -96.0) {
                                            if (x[10] <= -93.0) {
                                                if (x[34] <= -82.0) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    votes[22] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= -94.0) {
                                                    votes[12] += 1;
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
                                        if (x[29] <= -84.0) {
                                            if (x[3] <= -88.5) {
                                                if (x[26] <= -85.0) {
                                                    if (x[42] <= -90.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        if (x[14] <= -81.0) {
                                                            if (x[24] <= -91.0) {
                                                                if (x[42] <= -79.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[24] <= -94.5) {
                                                                votes[4] += 1;
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[10] <= -94.0) {
                                        if (x[3] <= -86.5) {
                                            if (x[26] <= -88.0) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            if (x[29] <= -94.5) {
                                                if (x[3] <= -80.5) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= -80.5) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    if (x[28] <= -94.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[26] <= -94.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[13] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[31] <= -94.0) {
                                            if (x[16] <= -94.5) {
                                                if (x[7] <= -95.0) {
                                                    if (x[20] <= -94.0) {
                                                        if (x[11] <= -63.5) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[22] <= -91.0) {
                                                            votes[17] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[7] <= -89.5) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        if (x[6] <= -88.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= -80.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[9] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[4] <= -94.5) {
                                                    votes[16] += 1;
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[30] <= -79.0) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #13
                        if (x[43] <= -64.0) {
                            if (x[25] <= -86.5) {
                                if (x[2] <= -70.5) {
                                    if (x[29] <= -84.0) {
                                        if (x[43] <= -72.0) {
                                            if (x[35] <= -82.0) {
                                                if (x[34] <= -94.5) {
                                                    if (x[26] <= -64.5) {
                                                        if (x[30] <= -81.0) {
                                                            if (x[27] <= -88.5) {
                                                                if (x[4] <= -93.0) {
                                                                    if (x[11] <= -59.0) {
                                                                        if (x[3] <= -76.5) {
                                                                            if (x[10] <= -75.0) {
                                                                                if (x[36] <= -93.0) {
                                                                                    votes[3] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[17] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[16] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[9] += 1;
                                                                        }
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
                                                                if (x[31] <= -88.5) {
                                                                    votes[11] += 1;
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
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[35] <= -84.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[26] <= -94.0) {
                                                    votes[22] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }

                                else {
                                    if (x[23] <= -83.5) {
                                        if (x[23] <= -85.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[25] <= -70.0) {
                                    votes[19] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #14
                        if (x[30] <= -79.0) {
                            if (x[42] <= -72.0) {
                                if (x[41] <= -94.0) {
                                    if (x[27] <= -65.0) {
                                        if (x[19] <= -88.5) {
                                            if (x[25] <= -87.5) {
                                                if (x[15] <= -87.5) {
                                                    if (x[33] <= -86.5) {
                                                        if (x[35] <= -82.0) {
                                                            if (x[27] <= -88.0) {
                                                                if (x[42] <= -86.5) {
                                                                    if (x[2] <= -74.0) {
                                                                        if (x[42] <= -93.5) {
                                                                            if (x[5] <= -94.5) {
                                                                                if (x[10] <= -58.5) {
                                                                                    votes[16] += 1;
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
                                                                            votes[21] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[7] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[22] <= -94.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[20] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[42] <= -77.5) {
                                                                    votes[5] += 1;
                                                                }

                                                                else {
                                                                    votes[11] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[22] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[14] <= -68.0) {
                                                        if (x[34] <= -80.0) {
                                                            votes[23] += 1;
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
                                                if (x[35] <= -81.5) {
                                                    if (x[38] <= -92.5) {
                                                        votes[19] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[19] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= -94.0) {
                                                if (x[19] <= -84.0) {
                                                    if (x[30] <= -93.5) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
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
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[42] <= -64.0) {
                                    votes[8] += 1;
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #15
                        if (x[25] <= -70.0) {
                            if (x[30] <= -76.0) {
                                if (x[30] <= -83.5) {
                                    if (x[3] <= -75.0) {
                                        if (x[35] <= -81.5) {
                                            if (x[43] <= -69.0) {
                                                if (x[19] <= -88.0) {
                                                    if (x[23] <= -95.0) {
                                                        if (x[26] <= -95.0) {
                                                            if (x[17] <= -94.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[35] <= -84.5) {
                                                                if (x[26] <= -82.5) {
                                                                    if (x[42] <= -89.5) {
                                                                        if (x[42] <= -91.5) {
                                                                            votes[4] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[4] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[10] <= -95.0) {
                                                                        votes[11] += 1;
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[23] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[23] <= -87.5) {
                                                            if (x[43] <= -86.5) {
                                                                if (x[7] <= -94.5) {
                                                                    votes[16] += 1;
                                                                }

                                                                else {
                                                                    if (x[11] <= -58.5) {
                                                                        votes[16] += 1;
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[11] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[43] <= -80.0) {
                                                                if (x[10] <= -94.0) {
                                                                    if (x[23] <= -73.0) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[18] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[5] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[10] <= -83.0) {
                                                        if (x[30] <= -94.0) {
                                                            votes[12] += 1;
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
                                                if (x[3] <= -80.0) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[35] <= -70.0) {
                                                if (x[13] <= -89.0) {
                                                    if (x[15] <= -80.0) {
                                                        votes[19] += 1;
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
                                                votes[22] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= -94.5) {
                                            if (x[26] <= -79.0) {
                                                if (x[22] <= -83.5) {
                                                    if (x[23] <= -85.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        votes[9] += 1;
                                                    }
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
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[21] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #16
                        if (x[11] <= -71.0) {
                            if (x[38] <= -94.5) {
                                if (x[16] <= -94.5) {
                                    if (x[11] <= -76.5) {
                                        if (x[18] <= -84.5) {
                                            if (x[31] <= -82.5) {
                                                if (x[24] <= -87.5) {
                                                    if (x[43] <= -95.0) {
                                                        if (x[23] <= -73.0) {
                                                            if (x[22] <= -90.5) {
                                                                if (x[34] <= -73.5) {
                                                                    if (x[11] <= -92.5) {
                                                                        if (x[15] <= -68.0) {
                                                                            votes[23] += 1;
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
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[18] <= -88.0) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[27] <= -64.5) {
                                                            if (x[3] <= -80.5) {
                                                                if (x[14] <= -88.5) {
                                                                    if (x[28] <= -95.0) {
                                                                        if (x[43] <= -73.5) {
                                                                            votes[5] += 1;
                                                                        }

                                                                        else {
                                                                            votes[8] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[29] <= -87.5) {
                                                                            if (x[28] <= -89.5) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[43] <= -74.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[20] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[42] <= -88.5) {
                                                                        votes[14] += 1;
                                                                    }

                                                                    else {
                                                                        votes[23] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= -79.5) {
                                                                    if (x[27] <= -80.0) {
                                                                        votes[13] += 1;
                                                                    }

                                                                    else {
                                                                        votes[11] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[10] <= -93.0) {
                                                                        if (x[29] <= -93.5) {
                                                                            votes[11] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[11] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[19] += 1;
                                                }
                                            }

                                            else {
                                                if (x[30] <= -76.0) {
                                                    votes[21] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= -72.0) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            if (x[7] <= -94.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
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
                            if (x[3] <= -81.5) {
                                votes[15] += 1;
                            }

                            else {
                                if (x[10] <= -58.5) {
                                    votes[16] += 1;
                                }

                                else {
                                    votes[15] += 1;
                                }
                            }
                        }

                        // tree #17
                        if (x[31] <= -75.5) {
                            if (x[2] <= -70.5) {
                                if (x[10] <= -59.5) {
                                    if (x[14] <= -80.5) {
                                        if (x[34] <= -70.0) {
                                            if (x[23] <= -73.0) {
                                                if (x[32] <= -91.5) {
                                                    if (x[22] <= -83.5) {
                                                        if (x[27] <= -89.5) {
                                                            if (x[38] <= -92.5) {
                                                                if (x[17] <= -95.0) {
                                                                    if (x[28] <= -89.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[22] <= -94.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[20] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[37] <= -93.5) {
                                                                        if (x[4] <= -93.5) {
                                                                            votes[16] += 1;
                                                                        }

                                                                        else {
                                                                            votes[17] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[17] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[22] <= -85.5) {
                                                                if (x[3] <= -93.5) {
                                                                    votes[19] += 1;
                                                                }

                                                                else {
                                                                    if (x[29] <= -94.0) {
                                                                        votes[6] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[43] <= -63.5) {
                                                                            votes[8] += 1;
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
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
                                                        if (x[23] <= -80.0) {
                                                            votes[21] += 1;
                                                        }

                                                        else {
                                                            if (x[31] <= -93.5) {
                                                                votes[12] += 1;
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[18] += 1;
                                            }
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[40] <= -92.5) {
                                            if (x[25] <= -89.5) {
                                                if (x[24] <= -95.0) {
                                                    votes[23] += 1;
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
                                            votes[4] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[15] += 1;
                                }
                            }

                            else {
                                if (x[22] <= -83.5) {
                                    if (x[3] <= -68.0) {
                                        votes[9] += 1;
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
                            votes[0] += 1;
                        }

                        // tree #18
                        if (x[27] <= -86.0) {
                            if (x[31] <= -85.0) {
                                if (x[20] <= -88.5) {
                                    if (x[18] <= -84.5) {
                                        if (x[10] <= -71.5) {
                                            if (x[2] <= -78.0) {
                                                if (x[25] <= -95.0) {
                                                    if (x[29] <= -87.5) {
                                                        if (x[2] <= -84.5) {
                                                            if (x[22] <= -73.5) {
                                                                if (x[41] <= -94.0) {
                                                                    if (x[33] <= -92.0) {
                                                                        if (x[34] <= -82.0) {
                                                                            if (x[18] <= -92.5) {
                                                                                if (x[27] <= -94.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[10] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[22] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[4] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= -82.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[26] <= -93.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[13] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[43] <= -70.5) {
                                                            votes[20] += 1;
                                                        }

                                                        else {
                                                            votes[13] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[25] <= -86.5) {
                                                        votes[14] += 1;
                                                    }

                                                    else {
                                                        if (x[14] <= -95.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[19] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[7] <= -93.5) {
                                                    if (x[11] <= -75.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        if (x[10] <= -74.0) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= -68.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= -58.0) {
                                                votes[16] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[22] <= -78.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            if (x[10] <= -82.5) {
                                                votes[12] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[23] <= -91.0) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }
                            }

                            else {
                                votes[21] += 1;
                            }
                        }

                        else {
                            if (x[35] <= -92.5) {
                                if (x[10] <= -95.0) {
                                    if (x[43] <= -69.5) {
                                        votes[11] += 1;
                                    }

                                    else {
                                        votes[8] += 1;
                                    }
                                }

                                else {
                                    if (x[10] <= -85.5) {
                                        if (x[42] <= -85.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[10] <= -89.0) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[27] <= -72.5) {
                                                    votes[5] += 1;
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
                            }

                            else {
                                votes[23] += 1;
                            }
                        }

                        // tree #19
                        if (x[17] <= -95.0) {
                            if (x[10] <= -63.0) {
                                if (x[6] <= -94.5) {
                                    if (x[23] <= -76.5) {
                                        if (x[15] <= -68.5) {
                                            if (x[27] <= -85.5) {
                                                if (x[32] <= -91.5) {
                                                    if (x[25] <= -71.0) {
                                                        if (x[22] <= -81.0) {
                                                            if (x[3] <= -94.5) {
                                                                if (x[14] <= -95.0) {
                                                                    if (x[29] <= -93.5) {
                                                                        votes[22] += 1;
                                                                    }

                                                                    else {
                                                                        votes[20] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[35] <= -77.5) {
                                                                        if (x[26] <= -87.5) {
                                                                            votes[19] += 1;
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
                                                                if (x[21] <= -94.0) {
                                                                    if (x[2] <= -68.5) {
                                                                        if (x[42] <= -70.5) {
                                                                            if (x[23] <= -92.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[9] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[7] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[4] <= -93.0) {
                                                                        votes[16] += 1;
                                                                    }

                                                                    else {
                                                                        votes[17] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[31] <= -95.0) {
                                                                votes[12] += 1;
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
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[27] <= -78.0) {
                                                    if (x[34] <= -91.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[42] <= -81.0) {
                                                        if (x[2] <= -89.5) {
                                                            votes[23] += 1;
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[33] <= -95.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[18] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[9] += 1;
                                }
                            }

                            else {
                                votes[15] += 1;
                            }
                        }

                        else {
                            if (x[20] <= -89.0) {
                                votes[16] += 1;
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        // tree #20
                        if (x[26] <= -64.5) {
                            if (x[24] <= -88.0) {
                                if (x[15] <= -68.5) {
                                    if (x[43] <= -64.0) {
                                        if (x[31] <= -75.5) {
                                            if (x[27] <= -80.0) {
                                                if (x[42] <= -84.5) {
                                                    if (x[2] <= -92.0) {
                                                        if (x[29] <= -91.0) {
                                                            if (x[22] <= -90.0) {
                                                                if (x[25] <= -90.5) {
                                                                    if (x[27] <= -92.5) {
                                                                        votes[22] += 1;
                                                                    }

                                                                    else {
                                                                        votes[23] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[19] <= -88.0) {
                                                                    if (x[18] <= -95.5) {
                                                                        votes[18] += 1;
                                                                    }

                                                                    else {
                                                                        votes[3] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[19] <= -85.5) {
                                                                        votes[10] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[11] <= -81.5) {
                                                                            votes[12] += 1;
                                                                        }

                                                                        else {
                                                                            votes[10] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[21] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[23] <= -85.5) {
                                                            if (x[22] <= -95.0) {
                                                                if (x[42] <= -93.0) {
                                                                    votes[17] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[11] <= -58.5) {
                                                                    votes[16] += 1;
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[7] <= -94.5) {
                                                                if (x[2] <= -71.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[7] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[9] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[28] <= -94.0) {
                                                        if (x[26] <= -91.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[20] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= -95.0) {
                                                    if (x[15] <= -86.5) {
                                                        votes[11] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
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
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[31] <= -94.0) {
                                    votes[19] += 1;
                                }

                                else {
                                    if (x[25] <= -71.5) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[6] += 1;
                        }

                        // tree #21
                        if (x[14] <= -68.5) {
                            if (x[1] <= -95.0) {
                                if (x[43] <= -64.0) {
                                    if (x[14] <= -80.5) {
                                        if (x[3] <= -77.5) {
                                            if (x[21] <= -96.0) {
                                                if (x[22] <= -71.5) {
                                                    if (x[14] <= -95.0) {
                                                        if (x[29] <= -86.5) {
                                                            if (x[29] <= -90.0) {
                                                                if (x[10] <= -58.5) {
                                                                    if (x[10] <= -87.5) {
                                                                        if (x[34] <= -75.5) {
                                                                            if (x[27] <= -91.5) {
                                                                                votes[1] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[31] <= -81.5) {
                                                                                    votes[11] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[22] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= -90.5) {
                                                                            if (x[31] <= -95.0) {
                                                                                if (x[9] <= -94.0) {
                                                                                    votes[12] += 1;
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
                                                                            votes[16] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[27] <= -94.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[42] <= -82.5) {
                                                                votes[21] += 1;
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }

                                            else {
                                                if (x[22] <= -95.0) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    if (x[10] <= -85.0) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[31] <= -93.5) {
                                                if (x[3] <= -68.5) {
                                                    if (x[20] <= -94.0) {
                                                        votes[9] += 1;
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
                                                votes[6] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[27] <= -86.0) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }

                            else {
                                if (x[42] <= -85.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #22
                        if (x[2] <= -82.0) {
                            if (x[11] <= -94.5) {
                                if (x[27] <= -86.0) {
                                    if (x[32] <= -86.0) {
                                        if (x[14] <= -95.0) {
                                            if (x[34] <= -75.5) {
                                                if (x[39] <= -94.0) {
                                                    if (x[30] <= -91.5) {
                                                        if (x[2] <= -85.5) {
                                                            if (x[3] <= -94.5) {
                                                                if (x[33] <= -94.5) {
                                                                    votes[20] += 1;
                                                                }

                                                                else {
                                                                    votes[18] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[43] <= -80.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }

                                        else {
                                            if (x[12] <= -90.5) {
                                                if (x[25] <= -87.5) {
                                                    if (x[26] <= -87.5) {
                                                        if (x[43] <= -95.0) {
                                                            votes[4] += 1;
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
                                                    votes[19] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    votes[23] += 1;
                                }
                            }

                            else {
                                if (x[23] <= -76.5) {
                                    if (x[2] <= -94.5) {
                                        if (x[19] <= -84.5) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            if (x[10] <= -82.5) {
                                                votes[12] += 1;
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
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[21] <= -87.5) {
                                if (x[10] <= -81.0) {
                                    if (x[26] <= -78.5) {
                                        if (x[42] <= -63.5) {
                                            if (x[29] <= -87.5) {
                                                if (x[43] <= -89.5) {
                                                    votes[17] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[8] += 1;
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
                                    if (x[10] <= -68.0) {
                                        if (x[21] <= -96.5) {
                                            if (x[3] <= -68.0) {
                                                votes[9] += 1;
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
                                        votes[16] += 1;
                                    }
                                }
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        // tree #23
                        if (x[32] <= -86.0) {
                            if (x[24] <= -71.0) {
                                if (x[9] <= -94.0) {
                                    if (x[20] <= -88.0) {
                                        if (x[43] <= -64.0) {
                                            if (x[43] <= -87.5) {
                                                if (x[30] <= -81.0) {
                                                    if (x[26] <= -85.0) {
                                                        if (x[22] <= -73.0) {
                                                            if (x[3] <= -92.0) {
                                                                if (x[19] <= -85.5) {
                                                                    if (x[11] <= -92.5) {
                                                                        if (x[24] <= -88.0) {
                                                                            if (x[26] <= -95.0) {
                                                                                votes[22] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[15] <= -70.0) {
                                                                                    votes[14] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[4] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[10] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[12] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[6] <= -94.5) {
                                                                    if (x[17] <= -95.0) {
                                                                        if (x[3] <= -68.5) {
                                                                            if (x[11] <= -71.0) {
                                                                                votes[9] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[21] <= -94.0) {
                                                                                    votes[15] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[16] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[7] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= -75.0) {
                                                                        if (x[11] <= -58.5) {
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
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[27] <= -95.5) {
                                                    if (x[31] <= -92.0) {
                                                        if (x[23] <= -93.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[27] <= -64.5) {
                                                        if (x[0] <= -95.0) {
                                                            if (x[42] <= -76.5) {
                                                                if (x[22] <= -93.5) {
                                                                    votes[11] += 1;
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[42] <= -69.0) {
                                                                    votes[11] += 1;
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
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
                                    votes[10] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // tree #24
                        if (x[28] <= -89.5) {
                            if (x[23] <= -86.0) {
                                if (x[24] <= -88.0) {
                                    if (x[15] <= -75.5) {
                                        if (x[27] <= -65.5) {
                                            if (x[20] <= -93.5) {
                                                if (x[42] <= -86.5) {
                                                    if (x[6] <= -87.0) {
                                                        if (x[10] <= -78.0) {
                                                            if (x[26] <= -93.0) {
                                                                votes[22] += 1;
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
                                                        votes[16] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -81.0) {
                                                        votes[2] += 1;
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
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[25] <= -95.5) {
                                            if (x[31] <= -93.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[14] <= -95.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[19] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= -77.5) {
                                    if (x[22] <= -82.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[42] <= -94.5) {
                                            if (x[18] <= -85.0) {
                                                if (x[18] <= -88.5) {
                                                    if (x[21] <= -95.5) {
                                                        if (x[22] <= -73.5) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
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
                        }

                        else {
                            if (x[43] <= -66.5) {
                                if (x[29] <= -84.0) {
                                    if (x[29] <= -87.5) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[20] += 1;
                                    }
                                }

                                else {
                                    votes[21] += 1;
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        // tree #25
                        if (x[17] <= -89.0) {
                            if (x[10] <= -59.5) {
                                if (x[42] <= -64.0) {
                                    if (x[34] <= -70.0) {
                                        if (x[23] <= -88.5) {
                                            if (x[27] <= -95.5) {
                                                if (x[39] <= -94.0) {
                                                    if (x[11] <= -92.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[17] <= -95.0) {
                                                            if (x[5] <= -93.0) {
                                                                votes[16] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
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
                                                if (x[42] <= -84.0) {
                                                    if (x[34] <= -83.5) {
                                                        if (x[14] <= -68.5) {
                                                            if (x[12] <= -95.5) {
                                                                votes[23] += 1;
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[34] <= -76.5) {
                                                            if (x[35] <= -81.5) {
                                                                votes[23] += 1;
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[19] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[22] <= -95.5) {
                                                        if (x[43] <= -75.0) {
                                                            votes[11] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[18] <= -93.0) {
                                                if (x[30] <= -77.0) {
                                                    if (x[29] <= -84.0) {
                                                        if (x[10] <= -90.0) {
                                                            if (x[28] <= -94.0) {
                                                                if (x[23] <= -72.0) {
                                                                    if (x[3] <= -90.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[8] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[18] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[30] <= -93.5) {
                                                                if (x[6] <= -94.5) {
                                                                    if (x[2] <= -72.0) {
                                                                        votes[9] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= -69.5) {
                                                                            votes[7] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[23] <= -85.0) {
                                                                                votes[7] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[23] <= -83.0) {
                                                                                    votes[9] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[7] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
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
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[11] <= -83.5) {
                                                    if (x[31] <= -95.0) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[19] <= -82.0) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[12] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
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
                            if (x[37] <= -93.5) {
                                if (x[22] <= -93.5) {
                                    votes[17] += 1;
                                }

                                else {
                                    votes[16] += 1;
                                }
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        // tree #26
                        if (x[31] <= -75.5) {
                            if (x[14] <= -83.5) {
                                if (x[24] <= -74.0) {
                                    if (x[28] <= -84.5) {
                                        if (x[26] <= -78.5) {
                                            if (x[3] <= -77.5) {
                                                if (x[33] <= -86.5) {
                                                    if (x[34] <= -70.5) {
                                                        if (x[21] <= -95.5) {
                                                            if (x[19] <= -85.5) {
                                                                if (x[43] <= -74.5) {
                                                                    if (x[22] <= -94.5) {
                                                                        if (x[42] <= -93.0) {
                                                                            votes[19] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[10] <= -71.0) {
                                                                            if (x[29] <= -93.5) {
                                                                                if (x[23] <= -74.0) {
                                                                                    votes[10] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[18] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[20] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[15] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[27] <= -85.0) {
                                                                        if (x[27] <= -88.5) {
                                                                            votes[8] += 1;
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
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
                                                            if (x[23] <= -95.0) {
                                                                votes[17] += 1;
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= -94.5) {
                                                    if (x[21] <= -94.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[27] <= -64.5) {
                                                if (x[0] <= -95.0) {
                                                    votes[11] += 1;
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
                                        votes[21] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[31] <= -94.0) {
                                    if (x[42] <= -95.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        if (x[34] <= -82.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[23] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #27
                        if (x[29] <= -84.0) {
                            if (x[7] <= -94.5) {
                                if (x[34] <= -70.0) {
                                    if (x[20] <= -94.0) {
                                        if (x[27] <= -79.0) {
                                            if (x[14] <= -69.0) {
                                                if (x[24] <= -85.5) {
                                                    if (x[34] <= -82.0) {
                                                        if (x[34] <= -91.5) {
                                                            if (x[0] <= -95.0) {
                                                                if (x[19] <= -88.5) {
                                                                    if (x[27] <= -89.5) {
                                                                        if (x[32] <= -94.5) {
                                                                            if (x[21] <= -92.0) {
                                                                                if (x[3] <= -94.5) {
                                                                                    votes[20] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[7] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[16] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[32] <= -85.0) {
                                                                                votes[18] += 1;
                                                                            }

                                                                            else {
                                                                                votes[3] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[22] <= -93.5) {
                                                                            if (x[2] <= -82.5) {
                                                                                votes[8] += 1;
                                                                            }

                                                                            else {
                                                                                votes[13] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[8] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[31] <= -93.5) {
                                                                        if (x[11] <= -81.5) {
                                                                            votes[12] += 1;
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
                                                            votes[23] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[38] <= -92.5) {
                                                        votes[19] += 1;
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            if (x[22] <= -87.0) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                if (x[22] <= -85.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[20] <= -87.5) {
                                            if (x[11] <= -78.5) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }

                            else {
                                if (x[22] <= -88.0) {
                                    votes[15] += 1;
                                }

                                else {
                                    votes[16] += 1;
                                }
                            }
                        }

                        else {
                            votes[21] += 1;
                        }

                        // tree #28
                        if (x[35] <= -70.0) {
                            if (x[27] <= -89.5) {
                                if (x[22] <= -73.5) {
                                    if (x[7] <= -94.5) {
                                        if (x[11] <= -75.5) {
                                            if (x[29] <= -94.0) {
                                                if (x[38] <= -92.5) {
                                                    if (x[5] <= -94.5) {
                                                        if (x[33] <= -92.0) {
                                                            if (x[25] <= -93.0) {
                                                                if (x[19] <= -83.0) {
                                                                    if (x[30] <= -94.0) {
                                                                        if (x[43] <= -94.0) {
                                                                            votes[9] += 1;
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
                                                                    votes[12] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
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
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= -84.0) {
                                                    if (x[22] <= -84.0) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= -63.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= -78.0) {
                                            if (x[10] <= -58.0) {
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

                                else {
                                    votes[18] += 1;
                                }
                            }

                            else {
                                if (x[31] <= -79.5) {
                                    if (x[3] <= -94.5) {
                                        if (x[27] <= -86.0) {
                                            if (x[15] <= -80.5) {
                                                votes[19] += 1;
                                            }

                                            else {
                                                if (x[42] <= -91.0) {
                                                    if (x[15] <= -67.5) {
                                                        votes[14] += 1;
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }

                                    else {
                                        if (x[23] <= -87.5) {
                                            if (x[22] <= -93.5) {
                                                if (x[2] <= -79.5) {
                                                    if (x[2] <= -82.5) {
                                                        if (x[2] <= -86.0) {
                                                            votes[13] += 1;
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[26] <= -68.0) {
                                                        votes[11] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            if (x[42] <= -81.5) {
                                                votes[6] += 1;
                                            }

                                            else {
                                                if (x[0] <= -95.0) {
                                                    if (x[30] <= -92.0) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
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
                            votes[22] += 1;
                        }

                        // tree #29
                        if (x[5] <= -95.0) {
                            if (x[34] <= -70.0) {
                                if (x[43] <= -71.5) {
                                    if (x[10] <= -78.0) {
                                        if (x[0] <= -95.0) {
                                            if (x[26] <= -64.0) {
                                                if (x[43] <= -95.0) {
                                                    if (x[19] <= -88.0) {
                                                        if (x[32] <= -85.5) {
                                                            if (x[23] <= -84.0) {
                                                                if (x[24] <= -75.5) {
                                                                    votes[23] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[9] <= -94.0) {
                                                            if (x[31] <= -95.0) {
                                                                votes[12] += 1;
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
                                                    if (x[14] <= -92.5) {
                                                        if (x[29] <= -94.0) {
                                                            votes[11] += 1;
                                                        }

                                                        else {
                                                            if (x[22] <= -93.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[22] <= -84.0) {
                                                                    votes[20] += 1;
                                                                }

                                                                else {
                                                                    votes[21] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[12] <= -89.5) {
                                                            if (x[24] <= -85.0) {
                                                                if (x[30] <= -94.0) {
                                                                    if (x[26] <= -89.0) {
                                                                        votes[4] += 1;
                                                                    }

                                                                    else {
                                                                        votes[14] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[23] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= -89.5) {
                                                if (x[2] <= -94.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= -85.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[5] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[11] <= -71.0) {
                                            if (x[22] <= -83.0) {
                                                if (x[23] <= -85.0) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            if (x[23] <= -89.5) {
                                                if (x[3] <= -81.0) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }

                                            else {
                                                if (x[17] <= -95.0) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[42] <= -64.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }

                            else {
                                votes[22] += 1;
                            }
                        }

                        else {
                            votes[17] += 1;
                        }

                        // tree #30
                        if (x[35] <= -70.0) {
                            if (x[18] <= -87.5) {
                                if (x[23] <= -81.5) {
                                    if (x[25] <= -70.0) {
                                        if (x[10] <= -71.0) {
                                            if (x[26] <= -73.5) {
                                                if (x[5] <= -95.0) {
                                                    if (x[34] <= -85.0) {
                                                        if (x[10] <= -81.5) {
                                                            if (x[3] <= -93.5) {
                                                                if (x[40] <= -93.5) {
                                                                    if (x[22] <= -94.0) {
                                                                        votes[19] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[30] <= -90.0) {
                                                                            votes[20] += 1;
                                                                        }

                                                                        else {
                                                                            votes[21] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[4] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[42] <= -63.5) {
                                                                    if (x[43] <= -76.0) {
                                                                        if (x[3] <= -80.5) {
                                                                            votes[5] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[8] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[13] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= -72.0) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                if (x[10] <= -72.5) {
                                                                    votes[7] += 1;
                                                                }

                                                                else {
                                                                    if (x[2] <= -69.5) {
                                                                        votes[7] += 1;
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[14] <= -74.5) {
                                                            if (x[15] <= -80.5) {
                                                                votes[19] += 1;
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[23] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                if (x[23] <= -88.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[23] <= -88.5) {
                                                votes[16] += 1;
                                            }

                                            else {
                                                if (x[10] <= -57.0) {
                                                    votes[16] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[21] <= -96.0) {
                                        if (x[11] <= -92.0) {
                                            if (x[32] <= -94.5) {
                                                votes[21] += 1;
                                            }

                                            else {
                                                if (x[18] <= -95.5) {
                                                    votes[18] += 1;
                                                }

                                                else {
                                                    votes[3] += 1;
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
                            }

                            else {
                                if (x[18] <= -84.5) {
                                    votes[10] += 1;
                                }

                                else {
                                    if (x[23] <= -78.5) {
                                        if (x[19] <= -82.0) {
                                            if (x[18] <= -82.5) {
                                                votes[12] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
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
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #31
                        if (x[29] <= -84.0) {
                            if (x[27] <= -65.0) {
                                if (x[15] <= -80.5) {
                                    if (x[5] <= -95.0) {
                                        if (x[1] <= -95.0) {
                                            if (x[17] <= -95.0) {
                                                if (x[27] <= -89.5) {
                                                    if (x[29] <= -93.5) {
                                                        if (x[2] <= -91.0) {
                                                            if (x[24] <= -88.5) {
                                                                if (x[34] <= -82.0) {
                                                                    if (x[30] <= -93.5) {
                                                                        if (x[10] <= -93.0) {
                                                                            if (x[33] <= -85.0) {
                                                                                votes[18] += 1;
                                                                            }

                                                                            else {
                                                                                votes[3] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[12] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[10] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[38] <= -94.5) {
                                                                    votes[19] += 1;
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[23] <= -85.0) {
                                                                if (x[20] <= -94.5) {
                                                                    votes[15] += 1;
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[22] <= -93.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[14] <= -92.0) {
                                                        if (x[22] <= -89.0) {
                                                            if (x[27] <= -80.0) {
                                                                if (x[29] <= -87.5) {
                                                                    if (x[3] <= -82.0) {
                                                                        votes[8] += 1;
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
                                                                votes[11] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }

                                        else {
                                            if (x[42] <= -85.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[26] <= -85.0) {
                                        if (x[15] <= -68.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            votes[21] += 1;
                        }

                        // tree #32
                        if (x[42] <= -71.5) {
                            if (x[25] <= -86.5) {
                                if (x[11] <= -75.5) {
                                    if (x[21] <= -91.5) {
                                        if (x[19] <= -88.0) {
                                            if (x[29] <= -84.0) {
                                                if (x[15] <= -68.5) {
                                                    if (x[27] <= -64.5) {
                                                        if (x[22] <= -95.5) {
                                                            if (x[31] <= -94.0) {
                                                                if (x[35] <= -70.0) {
                                                                    if (x[15] <= -88.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[14] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[23] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[28] <= -94.0) {
                                                                if (x[22] <= -70.5) {
                                                                    if (x[32] <= -91.5) {
                                                                        if (x[22] <= -80.0) {
                                                                            if (x[10] <= -81.5) {
                                                                                if (x[0] <= -95.0) {
                                                                                    votes[11] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[5] += 1;
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
                                                                        votes[3] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[18] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[21] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= -84.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[16] <= -94.5) {
                                        if (x[2] <= -75.5) {
                                            if (x[23] <= -89.0) {
                                                if (x[21] <= -94.0) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    votes[16] += 1;
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
                                        votes[16] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[24] <= -71.0) {
                                    votes[19] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= -80.5) {
                                votes[8] += 1;
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        // tree #33
                        if (x[19] <= -88.5) {
                            if (x[32] <= -91.5) {
                                if (x[30] <= -83.5) {
                                    if (x[24] <= -71.5) {
                                        if (x[26] <= -64.0) {
                                            if (x[28] <= -89.5) {
                                                if (x[3] <= -75.0) {
                                                    if (x[43] <= -69.0) {
                                                        if (x[35] <= -70.0) {
                                                            if (x[20] <= -89.5) {
                                                                if (x[42] <= -80.5) {
                                                                    if (x[14] <= -68.5) {
                                                                        if (x[15] <= -80.5) {
                                                                            if (x[27] <= -83.0) {
                                                                                if (x[43] <= -86.5) {
                                                                                    votes[15] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[5] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[26] <= -85.0) {
                                                                                votes[14] += 1;
                                                                            }

                                                                            else {
                                                                                votes[23] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[4] += 1;
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
                                                            votes[22] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -83.5) {
                                                        if (x[7] <= -94.5) {
                                                            if (x[2] <= -68.0) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[23] <= -94.0) {
                                                    if (x[43] <= -70.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[20] += 1;
                                                }
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
                                    if (x[11] <= -94.5) {
                                        votes[21] += 1;
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
                            if (x[30] <= -94.0) {
                                if (x[10] <= -83.0) {
                                    votes[12] += 1;
                                }

                                else {
                                    votes[10] += 1;
                                }
                            }

                            else {
                                votes[10] += 1;
                            }
                        }

                        // tree #34
                        if (x[42] <= -95.0) {
                            if (x[23] <= -81.5) {
                                if (x[22] <= -86.0) {
                                    if (x[16] <= -94.5) {
                                        if (x[3] <= -92.0) {
                                            if (x[31] <= -86.5) {
                                                if (x[34] <= -82.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[35] <= -70.5) {
                                                        votes[14] += 1;
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= -80.5) {
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
                                    if (x[3] <= -68.5) {
                                        if (x[21] <= -94.5) {
                                            votes[9] += 1;
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
                                if (x[30] <= -94.0) {
                                    if (x[22] <= -73.0) {
                                        if (x[10] <= -93.0) {
                                            votes[3] += 1;
                                        }

                                        else {
                                            votes[12] += 1;
                                        }
                                    }

                                    else {
                                        votes[18] += 1;
                                    }
                                }

                                else {
                                    votes[10] += 1;
                                }
                            }
                        }

                        else {
                            if (x[26] <= -65.0) {
                                if (x[24] <= -84.5) {
                                    if (x[11] <= -94.5) {
                                        if (x[34] <= -92.0) {
                                            if (x[26] <= -79.5) {
                                                if (x[22] <= -93.0) {
                                                    if (x[43] <= -74.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[27] <= -86.0) {
                                                            if (x[2] <= -82.5) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[8] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[43] <= -82.5) {
                                                        votes[21] += 1;
                                                    }

                                                    else {
                                                        votes[20] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[15] <= -74.5) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= -88.5) {
                                            if (x[1] <= -89.5) {
                                                if (x[26] <= -79.5) {
                                                    votes[0] += 1;
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
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        // tree #35
                        if (x[42] <= -66.0) {
                            if (x[28] <= -83.5) {
                                if (x[5] <= -93.5) {
                                    if (x[22] <= -71.5) {
                                        if (x[26] <= -64.5) {
                                            if (x[11] <= -71.0) {
                                                if (x[10] <= -78.5) {
                                                    if (x[18] <= -88.5) {
                                                        if (x[42] <= -71.5) {
                                                            if (x[39] <= -92.5) {
                                                                if (x[29] <= -87.5) {
                                                                    if (x[26] <= -80.0) {
                                                                        if (x[42] <= -85.5) {
                                                                            if (x[14] <= -69.0) {
                                                                                if (x[26] <= -83.5) {
                                                                                    votes[23] += 1;
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
                                                                            votes[2] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[26] <= -73.5) {
                                                                            if (x[1] <= -95.0) {
                                                                                votes[11] += 1;
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
                                                                    votes[20] += 1;
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
                                                        if (x[8] <= -94.5) {
                                                            if (x[22] <= -79.5) {
                                                                if (x[31] <= -95.0) {
                                                                    votes[12] += 1;
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[21] <= -96.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[3] <= -80.5) {
                                                    if (x[6] <= -87.5) {
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
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[18] += 1;
                                    }
                                }

                                else {
                                    votes[17] += 1;
                                }
                            }

                            else {
                                votes[21] += 1;
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #36
                        if (x[22] <= -71.0) {
                            if (x[2] <= -76.5) {
                                if (x[24] <= -71.0) {
                                    if (x[10] <= -93.5) {
                                        if (x[14] <= -68.5) {
                                            if (x[23] <= -89.0) {
                                                if (x[43] <= -64.0) {
                                                    if (x[26] <= -79.5) {
                                                        if (x[25] <= -86.5) {
                                                            if (x[3] <= -93.0) {
                                                                if (x[27] <= -86.0) {
                                                                    if (x[24] <= -95.0) {
                                                                        votes[22] += 1;
                                                                    }

                                                                    else {
                                                                        votes[14] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[23] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[19] += 1;
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
                                                if (x[33] <= -90.5) {
                                                    if (x[30] <= -91.5) {
                                                        if (x[28] <= -94.0) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= -93.5) {
                                            if (x[11] <= -84.5) {
                                                votes[10] += 1;
                                            }

                                            else {
                                                if (x[31] <= -93.5) {
                                                    if (x[18] <= -81.5) {
                                                        if (x[9] <= -94.0) {
                                                            votes[12] += 1;
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[12] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[5] <= -94.5) {
                                                if (x[22] <= -86.0) {
                                                    if (x[11] <= -58.5) {
                                                        votes[16] += 1;
                                                    }

                                                    else {
                                                        votes[15] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[22] <= -79.0) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[2] <= -70.5) {
                                    if (x[30] <= -93.5) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= -68.0) {
                                        if (x[2] <= -69.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            if (x[23] <= -83.0) {
                                                votes[9] += 1;
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
                        }

                        else {
                            votes[18] += 1;
                        }

                        // tree #37
                        if (x[3] <= -76.5) {
                            if (x[38] <= -94.5) {
                                if (x[30] <= -79.0) {
                                    if (x[20] <= -88.5) {
                                        if (x[18] <= -95.5) {
                                            if (x[43] <= -64.0) {
                                                if (x[10] <= -78.0) {
                                                    if (x[3] <= -80.5) {
                                                        if (x[32] <= -94.5) {
                                                            if (x[43] <= -74.0) {
                                                                if (x[11] <= -94.0) {
                                                                    if (x[31] <= -94.0) {
                                                                        if (x[24] <= -95.0) {
                                                                            if (x[41] <= -94.0) {
                                                                                if (x[2] <= -92.0) {
                                                                                    votes[20] += 1;
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
                                                                            if (x[14] <= -92.5) {
                                                                                votes[22] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[35] <= -90.5) {
                                                                                    votes[19] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[14] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[34] <= -79.5) {
                                                                            if (x[30] <= -84.5) {
                                                                                votes[23] += 1;
                                                                            }

                                                                            else {
                                                                                votes[21] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[5] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[22] <= -87.5) {
                                                        if (x[2] <= -81.5) {
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
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            if (x[10] <= -93.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                if (x[19] <= -82.0) {
                                                    if (x[8] <= -94.5) {
                                                        if (x[19] <= -84.0) {
                                                            if (x[10] <= -83.0) {
                                                                votes[12] += 1;
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[12] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
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
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[3] <= -68.5) {
                                if (x[43] <= -91.5) {
                                    if (x[10] <= -74.5) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[3] <= -70.0) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[9] += 1;
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

                        // tree #38
                        if (x[35] <= -70.0) {
                            if (x[10] <= -59.5) {
                                if (x[11] <= -78.0) {
                                    if (x[5] <= -95.0) {
                                        if (x[42] <= -63.5) {
                                            if (x[38] <= -94.5) {
                                                if (x[23] <= -82.5) {
                                                    if (x[35] <= -81.5) {
                                                        if (x[0] <= -95.0) {
                                                            if (x[31] <= -94.0) {
                                                                if (x[42] <= -74.0) {
                                                                    if (x[24] <= -85.5) {
                                                                        if (x[29] <= -87.5) {
                                                                            if (x[29] <= -94.0) {
                                                                                if (x[3] <= -88.5) {
                                                                                    votes[4] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[11] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[20] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[19] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[22] <= -93.0) {
                                                                    votes[23] += 1;
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
                                                        if (x[27] <= -88.0) {
                                                            votes[19] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= -95.0) {
                                                        if (x[29] <= -91.0) {
                                                            if (x[11] <= -92.5) {
                                                                if (x[21] <= -96.0) {
                                                                    if (x[22] <= -73.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[18] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[22] <= -79.0) {
                                                                    if (x[18] <= -84.5) {
                                                                        votes[10] += 1;
                                                                    }

                                                                    else {
                                                                        votes[12] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[23] <= -78.5) {
                                                                        votes[10] += 1;
                                                                    }

                                                                    else {
                                                                        votes[12] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[21] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
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
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[23] <= -83.5) {
                                        if (x[10] <= -67.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= -76.0) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[15] += 1;
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #39
                        if (x[43] <= -87.5) {
                            if (x[11] <= -58.5) {
                                if (x[11] <= -71.0) {
                                    if (x[30] <= -80.5) {
                                        if (x[5] <= -95.0) {
                                            if (x[14] <= -68.5) {
                                                if (x[3] <= -88.0) {
                                                    if (x[25] <= -71.0) {
                                                        if (x[11] <= -92.5) {
                                                            if (x[30] <= -94.0) {
                                                                if (x[12] <= -90.0) {
                                                                    if (x[15] <= -92.5) {
                                                                        if (x[24] <= -95.0) {
                                                                            if (x[21] <= -96.0) {
                                                                                if (x[35] <= -82.0) {
                                                                                    votes[18] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[22] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[3] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[22] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[43] <= -94.5) {
                                                                            votes[14] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[14] <= -79.5) {
                                                                    votes[19] += 1;
                                                                }

                                                                else {
                                                                    votes[23] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[8] <= -94.5) {
                                                                votes[12] += 1;
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
                                                    if (x[11] <= -76.0) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        if (x[22] <= -83.0) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
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
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[16] += 1;
                                }
                            }

                            else {
                                votes[15] += 1;
                            }
                        }

                        else {
                            if (x[31] <= -88.5) {
                                if (x[31] <= -94.5) {
                                    if (x[27] <= -89.5) {
                                        if (x[2] <= -92.0) {
                                            if (x[23] <= -94.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[20] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[42] <= -64.0) {
                                            if (x[22] <= -89.0) {
                                                if (x[2] <= -78.0) {
                                                    if (x[26] <= -74.5) {
                                                        votes[8] += 1;
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
                                                votes[8] += 1;
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
                            }

                            else {
                                if (x[11] <= -82.5) {
                                    if (x[2] <= -94.5) {
                                        votes[21] += 1;
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

                        // tree #40
                        if (x[34] <= -70.0) {
                            if (x[23] <= -76.5) {
                                if (x[11] <= -80.0) {
                                    if (x[19] <= -92.5) {
                                        if (x[34] <= -79.0) {
                                            if (x[15] <= -75.0) {
                                                if (x[30] <= -84.5) {
                                                    if (x[11] <= -88.0) {
                                                        if (x[27] <= -89.5) {
                                                            if (x[24] <= -71.0) {
                                                                if (x[29] <= -87.5) {
                                                                    if (x[29] <= -94.0) {
                                                                        if (x[21] <= -95.5) {
                                                                            if (x[12] <= -95.5) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                votes[19] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[3] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[2] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[42] <= -66.5) {
                                                                if (x[35] <= -90.5) {
                                                                    if (x[2] <= -82.5) {
                                                                        votes[8] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= -79.5) {
                                                                            votes[11] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[42] <= -81.0) {
                                                                                votes[6] += 1;
                                                                            }

                                                                            else {
                                                                                votes[11] += 1;
                                                                            }
                                                                        }
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
                                                    }

                                                    else {
                                                        if (x[30] <= -94.0) {
                                                            if (x[5] <= -94.5) {
                                                                votes[11] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }

                                            else {
                                                if (x[41] <= -93.0) {
                                                    votes[23] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }

                                    else {
                                        if (x[18] <= -84.5) {
                                            votes[10] += 1;
                                        }

                                        else {
                                            if (x[8] <= -94.5) {
                                                votes[12] += 1;
                                            }

                                            else {
                                                votes[10] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[43] <= -91.5) {
                                        if (x[17] <= -93.5) {
                                            if (x[10] <= -63.0) {
                                                if (x[11] <= -71.0) {
                                                    if (x[11] <= -76.0) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        if (x[6] <= -94.5) {
                                                            if (x[3] <= -70.0) {
                                                                votes[7] += 1;
                                                            }

                                                            else {
                                                                if (x[21] <= -96.5) {
                                                                    if (x[2] <= -68.5) {
                                                                        votes[9] += 1;
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
                                                            votes[9] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }

                                        else {
                                            if (x[6] <= -93.0) {
                                                if (x[36] <= -92.0) {
                                                    votes[16] += 1;
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[31] <= -87.0) {
                                    votes[18] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #41
                        if (x[17] <= -95.0) {
                            if (x[10] <= -95.0) {
                                if (x[31] <= -94.0) {
                                    if (x[27] <= -95.5) {
                                        if (x[43] <= -93.0) {
                                            if (x[18] <= -95.0) {
                                                if (x[32] <= -94.5) {
                                                    if (x[35] <= -75.5) {
                                                        if (x[23] <= -83.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            if (x[23] <= -94.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[20] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[43] <= -64.0) {
                                            if (x[25] <= -89.5) {
                                                if (x[3] <= -93.0) {
                                                    if (x[27] <= -88.5) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[22] <= -95.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        if (x[3] <= -79.0) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }
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
                                }

                                else {
                                    if (x[14] <= -82.0) {
                                        if (x[15] <= -95.0) {
                                            votes[21] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[22] <= -81.0) {
                                    if (x[23] <= -86.5) {
                                        if (x[27] <= -64.5) {
                                            if (x[20] <= -88.5) {
                                                if (x[27] <= -85.0) {
                                                    if (x[7] <= -94.5) {
                                                        votes[15] += 1;
                                                    }

                                                    else {
                                                        if (x[10] <= -62.5) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
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
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= -79.0) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            if (x[3] <= -68.5) {
                                                votes[9] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[30] <= -94.0) {
                                        if (x[8] <= -94.5) {
                                            votes[12] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }

                                    else {
                                        if (x[18] <= -93.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[36] <= -93.0) {
                                votes[16] += 1;
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        // tree #42
                        if (x[14] <= -74.5) {
                            if (x[33] <= -95.5) {
                                if (x[1] <= -94.5) {
                                    if (x[18] <= -92.0) {
                                        if (x[42] <= -63.5) {
                                            if (x[10] <= -59.0) {
                                                if (x[31] <= -84.5) {
                                                    if (x[26] <= -65.0) {
                                                        if (x[29] <= -94.0) {
                                                            if (x[34] <= -70.5) {
                                                                if (x[10] <= -71.5) {
                                                                    if (x[23] <= -87.0) {
                                                                        if (x[17] <= -94.0) {
                                                                            if (x[27] <= -80.0) {
                                                                                if (x[24] <= -94.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[14] += 1;
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
                                                                        if (x[22] <= -83.5) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[7] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[42] <= -75.0) {
                                                                if (x[23] <= -94.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
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
                                                    votes[21] += 1;
                                                }
                                            }

                                            else {
                                                votes[15] += 1;
                                            }
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= -94.0) {
                                            votes[12] += 1;
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
                                if (x[23] <= -73.0) {
                                    votes[3] += 1;
                                }

                                else {
                                    votes[18] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= -86.0) {
                                if (x[34] <= -80.0) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                votes[23] += 1;
                            }
                        }

                        // tree #43
                        if (x[34] <= -85.5) {
                            if (x[39] <= -94.0) {
                                if (x[28] <= -83.5) {
                                    if (x[0] <= -95.0) {
                                        if (x[3] <= -76.5) {
                                            if (x[43] <= -64.0) {
                                                if (x[35] <= -94.5) {
                                                    if (x[11] <= -87.5) {
                                                        if (x[2] <= -80.5) {
                                                            if (x[33] <= -94.5) {
                                                                if (x[42] <= -74.0) {
                                                                    votes[20] += 1;
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[18] <= -95.5) {
                                                                    votes[18] += 1;
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[27] <= -65.0) {
                                                                votes[11] += 1;
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[3] <= -81.5) {
                                                            if (x[11] <= -81.5) {
                                                                if (x[5] <= -94.5) {
                                                                    votes[12] += 1;
                                                                }

                                                                else {
                                                                    votes[17] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[22] <= -83.5) {
                                                                    votes[15] += 1;
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
                                            if (x[3] <= -68.5) {
                                                votes[9] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[27] <= -79.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[21] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[34] <= -79.0) {
                                if (x[30] <= -94.0) {
                                    if (x[26] <= -85.5) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }

                                else {
                                    votes[23] += 1;
                                }
                            }

                            else {
                                if (x[30] <= -94.5) {
                                    if (x[25] <= -90.5) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        if (x[42] <= -88.5) {
                                            votes[14] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }
                        }

                        // tree #44
                        if (x[34] <= -70.0) {
                            if (x[32] <= -86.0) {
                                if (x[24] <= -95.0) {
                                    if (x[11] <= -71.0) {
                                        if (x[18] <= -93.0) {
                                            if (x[21] <= -92.0) {
                                                if (x[10] <= -80.5) {
                                                    if (x[23] <= -88.5) {
                                                        if (x[22] <= -95.5) {
                                                            if (x[35] <= -93.0) {
                                                                if (x[27] <= -94.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[29] <= -94.5) {
                                                                        if (x[43] <= -72.5) {
                                                                            votes[11] += 1;
                                                                        }

                                                                        else {
                                                                            votes[8] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[13] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[41] <= -93.0) {
                                                                    votes[23] += 1;
                                                                }

                                                                else {
                                                                    votes[4] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[32] <= -94.5) {
                                                            if (x[27] <= -87.0) {
                                                                if (x[43] <= -84.5) {
                                                                    votes[21] += 1;
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[22] <= -85.0) {
                                                                    votes[8] += 1;
                                                                }

                                                                else {
                                                                    if (x[43] <= -85.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[5] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[18] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[31] <= -93.5) {
                                                        if (x[3] <= -68.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
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
                                        if (x[10] <= -58.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[38] <= -92.5) {
                                        if (x[12] <= -90.0) {
                                            if (x[34] <= -90.5) {
                                                votes[19] += 1;
                                            }

                                            else {
                                                if (x[25] <= -88.5) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    if (x[27] <= -86.0) {
                                                        votes[19] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }
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
                            }

                            else {
                                votes[3] += 1;
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #45
                        if (x[23] <= -70.5) {
                            if (x[28] <= -94.5) {
                                if (x[43] <= -70.0) {
                                    if (x[30] <= -80.0) {
                                        if (x[21] <= -91.5) {
                                            if (x[15] <= -80.5) {
                                                if (x[10] <= -63.5) {
                                                    if (x[3] <= -76.5) {
                                                        if (x[33] <= -92.0) {
                                                            if (x[27] <= -83.0) {
                                                                if (x[10] <= -83.0) {
                                                                    if (x[39] <= -94.0) {
                                                                        if (x[24] <= -93.5) {
                                                                            if (x[23] <= -90.0) {
                                                                                votes[22] += 1;
                                                                            }

                                                                            else {
                                                                                votes[12] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
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
                                                                if (x[27] <= -74.0) {
                                                                    votes[5] += 1;
                                                                }

                                                                else {
                                                                    votes[11] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[7] <= -94.5) {
                                                            if (x[2] <= -70.0) {
                                                                votes[6] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                if (x[14] <= -68.5) {
                                                    if (x[15] <= -74.5) {
                                                        votes[14] += 1;
                                                    }

                                                    else {
                                                        if (x[30] <= -94.0) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            votes[23] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= -74.5) {
                                                votes[17] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
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

                            else {
                                if (x[2] <= -82.5) {
                                    if (x[23] <= -84.5) {
                                        if (x[3] <= -86.5) {
                                            if (x[43] <= -70.0) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }
                        }

                        else {
                            votes[18] += 1;
                        }

                        // tree #46
                        if (x[34] <= -70.0) {
                            if (x[29] <= -84.0) {
                                if (x[24] <= -71.0) {
                                    if (x[18] <= -87.5) {
                                        if (x[40] <= -93.5) {
                                            if (x[26] <= -65.0) {
                                                if (x[4] <= -94.5) {
                                                    if (x[43] <= -72.5) {
                                                        if (x[22] <= -71.5) {
                                                            if (x[23] <= -81.0) {
                                                                if (x[34] <= -86.0) {
                                                                    if (x[0] <= -95.0) {
                                                                        if (x[26] <= -82.5) {
                                                                            if (x[43] <= -92.0) {
                                                                                if (x[22] <= -86.0) {
                                                                                    votes[16] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[7] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[23] <= -94.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[20] += 1;
                                                                                }
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

                                                                else {
                                                                    if (x[27] <= -85.5) {
                                                                        if (x[15] <= -80.5) {
                                                                            votes[19] += 1;
                                                                        }

                                                                        else {
                                                                            votes[14] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[23] += 1;
                                                                    }
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
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[42] <= -64.0) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[13] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
                                            }
                                        }

                                        else {
                                            votes[4] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= -94.0) {
                                            if (x[10] <= -81.5) {
                                                votes[12] += 1;
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
                                votes[21] += 1;
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #47
                        if (x[18] <= -85.0) {
                            if (x[43] <= -64.0) {
                                if (x[14] <= -68.0) {
                                    if (x[29] <= -84.0) {
                                        if (x[34] <= -70.0) {
                                            if (x[24] <= -85.0) {
                                                if (x[32] <= -86.0) {
                                                    if (x[42] <= -69.0) {
                                                        if (x[30] <= -86.5) {
                                                            if (x[18] <= -93.0) {
                                                                if (x[15] <= -74.5) {
                                                                    if (x[10] <= -59.5) {
                                                                        if (x[2] <= -72.5) {
                                                                            if (x[22] <= -76.0) {
                                                                                if (x[21] <= -95.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[16] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[18] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[22] <= -83.5) {
                                                                                votes[9] += 1;
                                                                            }

                                                                            else {
                                                                                votes[7] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[23] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[3] <= -80.0) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[39] <= -92.5) {
                                                    votes[19] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
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
                            votes[12] += 1;
                        }

                        // tree #48
                        if (x[26] <= -64.5) {
                            if (x[0] <= -95.0) {
                                if (x[43] <= -64.0) {
                                    if (x[18] <= -84.5) {
                                        if (x[31] <= -85.0) {
                                            if (x[38] <= -94.5) {
                                                if (x[34] <= -70.0) {
                                                    if (x[21] <= -87.0) {
                                                        if (x[28] <= -94.0) {
                                                            if (x[18] <= -88.5) {
                                                                if (x[15] <= -68.5) {
                                                                    if (x[23] <= -87.0) {
                                                                        if (x[11] <= -59.0) {
                                                                            if (x[10] <= -78.0) {
                                                                                if (x[30] <= -88.0) {
                                                                                    votes[11] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[23] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[16] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[15] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[33] <= -94.5) {
                                                                            if (x[7] <= -94.5) {
                                                                                if (x[11] <= -74.0) {
                                                                                    votes[9] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[7] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[9] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[23] <= -72.0) {
                                                                                votes[3] += 1;
                                                                            }

                                                                            else {
                                                                                votes[18] += 1;
                                                                            }
                                                                        }
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
                                                            votes[20] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[22] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        votes[12] += 1;
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
                            votes[6] += 1;
                        }

                        // tree #49
                        if (x[10] <= -76.0) {
                            if (x[34] <= -82.0) {
                                if (x[15] <= -79.5) {
                                    if (x[33] <= -86.5) {
                                        if (x[2] <= -80.5) {
                                            if (x[26] <= -78.5) {
                                                if (x[30] <= -85.0) {
                                                    if (x[18] <= -92.5) {
                                                        if (x[27] <= -89.5) {
                                                            if (x[10] <= -92.5) {
                                                                if (x[23] <= -77.5) {
                                                                    if (x[43] <= -86.5) {
                                                                        if (x[30] <= -94.0) {
                                                                            votes[19] += 1;
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= -92.0) {
                                                                            votes[20] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[18] += 1;
                                                                }
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
                                                        if (x[9] <= -94.0) {
                                                            if (x[30] <= -93.5) {
                                                                votes[12] += 1;
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
                                                    if (x[11] <= -92.0) {
                                                        votes[21] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= -79.5) {
                                                if (x[42] <= -68.5) {
                                                    if (x[31] <= -94.5) {
                                                        votes[2] += 1;
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
                                                if (x[26] <= -64.5) {
                                                    if (x[7] <= -93.5) {
                                                        if (x[4] <= -93.0) {
                                                            votes[11] += 1;
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
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
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[34] <= -83.5) {
                                        if (x[43] <= -94.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            if (x[26] <= -83.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[26] <= -89.0) {
                                    if (x[26] <= -95.0) {
                                        votes[22] += 1;
                                    }

                                    else {
                                        votes[19] += 1;
                                    }
                                }

                                else {
                                    if (x[27] <= -85.0) {
                                        votes[14] += 1;
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[23] <= -87.0) {
                                if (x[10] <= -58.0) {
                                    votes[16] += 1;
                                }

                                else {
                                    votes[15] += 1;
                                }
                            }

                            else {
                                if (x[21] <= -96.5) {
                                    if (x[23] <= -85.0) {
                                        votes[7] += 1;
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }
                        }

                        // tree #50
                        if (x[42] <= -71.5) {
                            if (x[18] <= -84.5) {
                                if (x[28] <= -83.5) {
                                    if (x[42] <= -76.5) {
                                        if (x[19] <= -93.5) {
                                            if (x[27] <= -67.5) {
                                                if (x[23] <= -70.5) {
                                                    if (x[29] <= -87.0) {
                                                        if (x[10] <= -58.5) {
                                                            if (x[10] <= -68.0) {
                                                                if (x[11] <= -78.0) {
                                                                    if (x[42] <= -86.5) {
                                                                        if (x[27] <= -88.5) {
                                                                            if (x[20] <= -93.5) {
                                                                                if (x[35] <= -70.0) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[22] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[17] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[25] <= -90.5) {
                                                                                if (x[23] <= -87.5) {
                                                                                    votes[23] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[14] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= -94.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[5] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[20] <= -94.0) {
                                                                        if (x[7] <= -94.5) {
                                                                            if (x[22] <= -83.5) {
                                                                                votes[9] += 1;
                                                                            }

                                                                            else {
                                                                                votes[7] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[9] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[7] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[20] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }

                                            else {
                                                votes[6] += 1;
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
                                    votes[21] += 1;
                                }
                            }

                            else {
                                votes[12] += 1;
                            }
                        }

                        else {
                            if (x[43] <= -64.0) {
                                votes[8] += 1;
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        // tree #51
                        if (x[42] <= -71.5) {
                            if (x[10] <= -71.0) {
                                if (x[24] <= -87.5) {
                                    if (x[35] <= -81.5) {
                                        if (x[27] <= -64.5) {
                                            if (x[32] <= -86.0) {
                                                if (x[26] <= -80.0) {
                                                    if (x[11] <= -79.0) {
                                                        if (x[14] <= -68.5) {
                                                            if (x[21] <= -95.5) {
                                                                if (x[28] <= -84.5) {
                                                                    if (x[23] <= -76.5) {
                                                                        if (x[23] <= -83.5) {
                                                                            if (x[34] <= -91.5) {
                                                                                if (x[22] <= -94.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[20] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[23] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[23] <= -79.5) {
                                                                                votes[10] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[22] <= -78.5) {
                                                                                    votes[10] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[12] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[32] <= -94.5) {
                                                                            votes[0] += 1;
                                                                        }

                                                                        else {
                                                                            votes[18] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[21] += 1;
                                                                }
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
                                                        if (x[11] <= -76.0) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            if (x[11] <= -73.5) {
                                                                votes[7] += 1;
                                                            }

                                                            else {
                                                                if (x[7] <= -94.5) {
                                                                    votes[7] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[43] <= -80.5) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
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
                                        if (x[25] <= -90.5) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[15] <= -95.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[19] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[7] <= -87.5) {
                                    if (x[7] <= -95.0) {
                                        if (x[2] <= -81.5) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= -80.5) {
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
                        }

                        else {
                            if (x[26] <= -84.0) {
                                if (x[2] <= -82.5) {
                                    if (x[26] <= -88.5) {
                                        votes[8] += 1;
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
                                votes[8] += 1;
                            }
                        }

                        // tree #52
                        if (x[21] <= -92.5) {
                            if (x[23] <= -76.5) {
                                if (x[2] <= -79.5) {
                                    if (x[34] <= -70.0) {
                                        if (x[14] <= -95.0) {
                                            if (x[29] <= -87.5) {
                                                if (x[39] <= -94.0) {
                                                    if (x[19] <= -93.5) {
                                                        if (x[11] <= -58.5) {
                                                            if (x[31] <= -93.5) {
                                                                if (x[22] <= -93.5) {
                                                                    if (x[26] <= -93.0) {
                                                                        votes[2] += 1;
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
                                                                votes[5] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[31] <= -95.0) {
                                                            if (x[10] <= -83.0) {
                                                                votes[12] += 1;
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
                                                if (x[30] <= -91.5) {
                                                    if (x[43] <= -71.5) {
                                                        votes[20] += 1;
                                                    }

                                                    else {
                                                        if (x[29] <= -86.5) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            votes[13] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[21] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[15] <= -80.5) {
                                                votes[19] += 1;
                                            }

                                            else {
                                                if (x[43] <= -95.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    if (x[35] <= -81.5) {
                                                        votes[23] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    if (x[43] <= -81.5) {
                                        if (x[42] <= -91.0) {
                                            if (x[6] <= -94.5) {
                                                if (x[21] <= -96.5) {
                                                    if (x[2] <= -68.0) {
                                                        votes[9] += 1;
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
                                                votes[9] += 1;
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
                            }

                            else {
                                if (x[23] <= -71.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[18] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= -91.0) {
                                votes[3] += 1;
                            }

                            else {
                                if (x[17] <= -89.0) {
                                    if (x[7] <= -94.5) {
                                        if (x[20] <= -94.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }

                                else {
                                    if (x[23] <= -94.0) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        votes[16] += 1;
                                    }
                                }
                            }
                        }

                        // tree #53
                        if (x[43] <= -76.5) {
                            if (x[32] <= -85.5) {
                                if (x[19] <= -93.5) {
                                    if (x[3] <= -76.5) {
                                        if (x[10] <= -93.5) {
                                            if (x[25] <= -71.0) {
                                                if (x[3] <= -92.5) {
                                                    if (x[40] <= -93.5) {
                                                        if (x[31] <= -83.5) {
                                                            if (x[27] <= -88.0) {
                                                                if (x[35] <= -71.0) {
                                                                    if (x[22] <= -77.5) {
                                                                        if (x[25] <= -95.0) {
                                                                            votes[20] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[26] <= -94.0) {
                                                                                votes[19] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[13] <= -94.5) {
                                                                                    votes[4] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[19] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[18] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[25] <= -87.5) {
                                                                    if (x[35] <= -81.5) {
                                                                        votes[23] += 1;
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
                                                            votes[21] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[4] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[42] <= -79.5) {
                                                        if (x[29] <= -94.0) {
                                                            votes[11] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[30] <= -94.0) {
                                                if (x[36] <= -93.0) {
                                                    if (x[6] <= -94.5) {
                                                        votes[16] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= -80.5) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            votes[16] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                if (x[22] <= -79.5) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[11] <= -75.5) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            if (x[7] <= -94.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[8] <= -94.5) {
                                        if (x[31] <= -95.0) {
                                            votes[12] += 1;
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
                                votes[3] += 1;
                            }
                        }

                        else {
                            if (x[29] <= -94.5) {
                                if (x[22] <= -95.5) {
                                    votes[8] += 1;
                                }

                                else {
                                    votes[11] += 1;
                                }
                            }

                            else {
                                if (x[42] <= -64.0) {
                                    votes[8] += 1;
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }
                        }

                        // tree #54
                        if (x[27] <= -88.5) {
                            if (x[31] <= -85.5) {
                                if (x[33] <= -94.5) {
                                    if (x[3] <= -77.5) {
                                        if (x[28] <= -88.5) {
                                            if (x[35] <= -71.0) {
                                                if (x[4] <= -93.0) {
                                                    if (x[23] <= -79.5) {
                                                        if (x[11] <= -77.0) {
                                                            if (x[21] <= -95.5) {
                                                                if (x[14] <= -74.5) {
                                                                    if (x[13] <= -94.5) {
                                                                        if (x[38] <= -94.5) {
                                                                            if (x[15] <= -95.0) {
                                                                                if (x[42] <= -90.5) {
                                                                                    votes[12] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[19] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[1] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[19] += 1;
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
                                                            if (x[11] <= -58.5) {
                                                                votes[16] += 1;
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
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }

                                        else {
                                            if (x[22] <= -94.0) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[20] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= -94.5) {
                                            if (x[21] <= -96.5) {
                                                if (x[11] <= -74.0) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    if (x[2] <= -68.5) {
                                                        votes[9] += 1;
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

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= -95.5) {
                                        if (x[21] <= -95.5) {
                                            votes[18] += 1;
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
                                votes[21] += 1;
                            }
                        }

                        else {
                            if (x[26] <= -85.0) {
                                votes[14] += 1;
                            }

                            else {
                                if (x[11] <= -82.0) {
                                    if (x[34] <= -90.5) {
                                        if (x[10] <= -94.5) {
                                            if (x[31] <= -94.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[22] <= -79.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }
                        }

                        // tree #55
                        if (x[19] <= -88.5) {
                            if (x[29] <= -94.5) {
                                if (x[31] <= -79.5) {
                                    if (x[34] <= -93.5) {
                                        if (x[22] <= -82.5) {
                                            if (x[24] <= -80.5) {
                                                if (x[42] <= -69.5) {
                                                    if (x[10] <= -59.0) {
                                                        if (x[22] <= -85.5) {
                                                            if (x[2] <= -80.5) {
                                                                if (x[36] <= -93.0) {
                                                                    votes[16] += 1;
                                                                }

                                                                else {
                                                                    votes[17] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[17] <= -95.0) {
                                                                    if (x[10] <= -95.0) {
                                                                        votes[11] += 1;
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[43] <= -91.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                if (x[26] <= -66.5) {
                                                                    votes[5] += 1;
                                                                }

                                                                else {
                                                                    votes[6] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[15] += 1;
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

                                        else {
                                            if (x[18] <= -95.0) {
                                                if (x[32] <= -94.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[13] <= -90.5) {
                                            if (x[31] <= -94.0) {
                                                if (x[41] <= -94.0) {
                                                    if (x[26] <= -93.5) {
                                                        votes[22] += 1;
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
                                                if (x[24] <= -87.5) {
                                                    votes[23] += 1;
                                                }

                                                else {
                                                    votes[19] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[12] <= -94.5) {
                                                votes[19] += 1;
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[27] <= -89.5) {
                                    if (x[28] <= -83.5) {
                                        if (x[27] <= -95.5) {
                                            if (x[42] <= -79.5) {
                                                if (x[29] <= -86.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[20] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= -80.5) {
                                        if (x[43] <= -63.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[31] <= -95.0) {
                                if (x[23] <= -78.5) {
                                    if (x[8] <= -94.5) {
                                        votes[12] += 1;
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }

                                else {
                                    votes[12] += 1;
                                }
                            }

                            else {
                                votes[10] += 1;
                            }
                        }

                        // tree #56
                        if (x[30] <= -76.0) {
                            if (x[15] <= -80.5) {
                                if (x[27] <= -78.0) {
                                    if (x[18] <= -84.5) {
                                        if (x[11] <= -79.5) {
                                            if (x[21] <= -91.5) {
                                                if (x[38] <= -94.5) {
                                                    if (x[42] <= -74.0) {
                                                        if (x[34] <= -71.0) {
                                                            if (x[18] <= -87.5) {
                                                                if (x[30] <= -83.5) {
                                                                    if (x[29] <= -87.5) {
                                                                        if (x[32] <= -85.5) {
                                                                            if (x[33] <= -95.5) {
                                                                                if (x[3] <= -92.5) {
                                                                                    votes[19] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[2] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[18] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[3] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[20] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[21] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[22] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[26] <= -86.0) {
                                                            if (x[43] <= -66.5) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[13] += 1;
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
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[6] <= -94.5) {
                                                if (x[2] <= -68.5) {
                                                    if (x[10] <= -71.5) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        if (x[23] <= -88.0) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }

                                            else {
                                                if (x[6] <= -88.5) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    if (x[11] <= -66.0) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[15] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }

                                else {
                                    if (x[0] <= -95.0) {
                                        if (x[30] <= -93.0) {
                                            if (x[11] <= -95.0) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                if (x[43] <= -78.0) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
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
                            }

                            else {
                                if (x[34] <= -82.0) {
                                    if (x[40] <= -95.0) {
                                        if (x[15] <= -67.5) {
                                            votes[23] += 1;
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
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #57
                        if (x[2] <= -76.5) {
                            if (x[29] <= -84.0) {
                                if (x[33] <= -86.5) {
                                    if (x[43] <= -69.5) {
                                        if (x[39] <= -94.0) {
                                            if (x[19] <= -86.0) {
                                                if (x[14] <= -74.5) {
                                                    if (x[29] <= -90.0) {
                                                        if (x[34] <= -70.0) {
                                                            if (x[43] <= -82.5) {
                                                                if (x[26] <= -84.5) {
                                                                    if (x[31] <= -93.5) {
                                                                        if (x[33] <= -95.5) {
                                                                            if (x[16] <= -94.5) {
                                                                                if (x[35] <= -90.5) {
                                                                                    votes[15] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[14] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[11] <= -75.5) {
                                                                                    votes[17] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[16] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[18] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[10] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[43] <= -85.5) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[10] <= -93.5) {
                                                                    if (x[22] <= -95.5) {
                                                                        votes[2] += 1;
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
                                                            votes[22] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[23] <= -94.0) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[34] <= -78.5) {
                                                        if (x[41] <= -94.0) {
                                                            votes[23] += 1;
                                                        }

                                                        else {
                                                            votes[4] += 1;
                                                        }
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
                                        if (x[3] <= -80.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                votes[21] += 1;
                            }
                        }

                        else {
                            if (x[22] <= -85.5) {
                                if (x[23] <= -93.5) {
                                    votes[17] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[3] <= -68.5) {
                                    if (x[6] <= -94.5) {
                                        if (x[11] <= -74.0) {
                                            votes[9] += 1;
                                        }

                                        else {
                                            if (x[10] <= -72.5) {
                                                votes[9] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[9] += 1;
                                    }
                                }

                                else {
                                    votes[7] += 1;
                                }
                            }
                        }

                        // tree #58
                        if (x[10] <= -59.5) {
                            if (x[28] <= -88.5) {
                                if (x[39] <= -94.0) {
                                    if (x[42] <= -71.5) {
                                        if (x[14] <= -80.5) {
                                            if (x[15] <= -95.0) {
                                                if (x[10] <= -68.0) {
                                                    if (x[34] <= -82.0) {
                                                        if (x[11] <= -79.0) {
                                                            if (x[32] <= -85.5) {
                                                                if (x[27] <= -64.5) {
                                                                    if (x[43] <= -87.0) {
                                                                        if (x[10] <= -94.5) {
                                                                            votes[18] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[16] <= -94.5) {
                                                                                if (x[3] <= -94.0) {
                                                                                    votes[10] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[0] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[17] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[42] <= -80.5) {
                                                                            if (x[30] <= -94.0) {
                                                                                votes[2] += 1;
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
                                                                    votes[6] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }

                                            else {
                                                votes[19] += 1;
                                            }
                                        }

                                        else {
                                            if (x[35] <= -82.0) {
                                                if (x[41] <= -94.0) {
                                                    votes[23] += 1;
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[28] <= -94.5) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            if (x[43] <= -66.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[43] <= -70.5) {
                                    if (x[43] <= -84.5) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        if (x[22] <= -94.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[20] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }
                        }

                        else {
                            votes[15] += 1;
                        }

                        // tree #59
                        if (x[22] <= -76.5) {
                            if (x[26] <= -64.5) {
                                if (x[28] <= -94.5) {
                                    if (x[34] <= -94.5) {
                                        if (x[26] <= -72.5) {
                                            if (x[6] <= -94.5) {
                                                if (x[23] <= -80.5) {
                                                    if (x[10] <= -71.5) {
                                                        if (x[22] <= -83.0) {
                                                            if (x[26] <= -90.0) {
                                                                if (x[5] <= -95.0) {
                                                                    if (x[43] <= -93.0) {
                                                                        if (x[3] <= -86.5) {
                                                                            votes[1] += 1;
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
                                                                    votes[17] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[26] <= -78.0) {
                                                                    votes[8] += 1;
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
                                                        if (x[22] <= -88.5) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            if (x[16] <= -94.5) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[19] <= -92.5) {
                                                        votes[3] += 1;
                                                    }

                                                    else {
                                                        if (x[11] <= -81.5) {
                                                            votes[12] += 1;
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[10] <= -64.0) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }

                                    else {
                                        if (x[35] <= -85.5) {
                                            if (x[31] <= -94.0) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[35] <= -81.5) {
                                                votes[23] += 1;
                                            }

                                            else {
                                                if (x[14] <= -83.5) {
                                                    if (x[30] <= -94.5) {
                                                        votes[22] += 1;
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[26] <= -95.0) {
                                        if (x[23] <= -91.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[27] <= -91.5) {
                                votes[18] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #60
                        if (x[19] <= -88.5) {
                            if (x[11] <= -58.5) {
                                if (x[43] <= -64.0) {
                                    if (x[29] <= -84.0) {
                                        if (x[22] <= -81.5) {
                                            if (x[24] <= -87.5) {
                                                if (x[20] <= -88.5) {
                                                    if (x[41] <= -94.0) {
                                                        if (x[3] <= -77.0) {
                                                            if (x[15] <= -87.5) {
                                                                if (x[10] <= -78.0) {
                                                                    if (x[3] <= -81.0) {
                                                                        if (x[31] <= -93.5) {
                                                                            if (x[27] <= -94.5) {
                                                                                if (x[29] <= -87.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[20] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[8] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[5] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[22] <= -95.5) {
                                                                            votes[6] += 1;
                                                                        }

                                                                        else {
                                                                            votes[11] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[15] <= -74.5) {
                                                                    votes[14] += 1;
                                                                }

                                                                else {
                                                                    if (x[31] <= -94.0) {
                                                                        votes[14] += 1;
                                                                    }

                                                                    else {
                                                                        votes[23] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[22] <= -82.5) {
                                                                votes[9] += 1;
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
                                                    votes[17] += 1;
                                                }
                                            }

                                            else {
                                                votes[19] += 1;
                                            }
                                        }

                                        else {
                                            if (x[42] <= -94.5) {
                                                if (x[20] <= -95.5) {
                                                    if (x[33] <= -85.0) {
                                                        votes[18] += 1;
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
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
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
                            if (x[19] <= -84.0) {
                                votes[10] += 1;
                            }

                            else {
                                votes[12] += 1;
                            }
                        }

                        // tree #61
                        if (x[18] <= -87.5) {
                            if (x[22] <= -71.0) {
                                if (x[0] <= -95.0) {
                                    if (x[33] <= -90.5) {
                                        if (x[3] <= -75.0) {
                                            if (x[26] <= -79.5) {
                                                if (x[40] <= -95.0) {
                                                    if (x[23] <= -84.5) {
                                                        if (x[5] <= -95.0) {
                                                            if (x[3] <= -83.5) {
                                                                if (x[39] <= -94.0) {
                                                                    if (x[24] <= -88.0) {
                                                                        if (x[22] <= -94.0) {
                                                                            if (x[42] <= -94.5) {
                                                                                votes[22] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= -93.5) {
                                                                                    votes[14] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[20] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[19] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[1] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[42] <= -93.0) {
                                                                    if (x[2] <= -80.5) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[42] <= -71.0) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[13] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= -94.5) {
                                                if (x[22] <= -85.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    if (x[10] <= -76.0) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[3] += 1;
                                    }
                                }

                                else {
                                    if (x[30] <= -79.5) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[18] += 1;
                            }
                        }

                        else {
                            if (x[30] <= -94.0) {
                                if (x[18] <= -81.5) {
                                    votes[10] += 1;
                                }

                                else {
                                    votes[12] += 1;
                                }
                            }

                            else {
                                votes[10] += 1;
                            }
                        }

                        // tree #62
                        if (x[3] <= -76.5) {
                            if (x[31] <= -84.5) {
                                if (x[24] <= -95.0) {
                                    if (x[42] <= -64.0) {
                                        if (x[5] <= -95.0) {
                                            if (x[19] <= -88.5) {
                                                if (x[23] <= -73.5) {
                                                    if (x[29] <= -94.0) {
                                                        if (x[11] <= -74.0) {
                                                            if (x[34] <= -73.5) {
                                                                if (x[21] <= -96.0) {
                                                                    if (x[41] <= -94.0) {
                                                                        if (x[11] <= -88.0) {
                                                                            if (x[42] <= -81.5) {
                                                                                if (x[2] <= -89.5) {
                                                                                    votes[23] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[6] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[27] <= -88.5) {
                                                                                    votes[2] += 1;
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
                                                                        votes[4] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[7] <= -87.5) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= -92.0) {
                                                            votes[20] += 1;
                                                        }

                                                        else {
                                                            if (x[29] <= -87.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= -80.0) {
                                                                    votes[8] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }

                                            else {
                                                if (x[22] <= -79.5) {
                                                    if (x[31] <= -95.0) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[11] <= -81.5) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    if (x[31] <= -94.0) {
                                        if (x[27] <= -88.5) {
                                            votes[4] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[38] <= -94.5) {
                                            if (x[24] <= -87.5) {
                                                votes[23] += 1;
                                            }

                                            else {
                                                votes[19] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[31] <= -75.5) {
                                    votes[21] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[43] <= -91.5) {
                                if (x[11] <= -75.5) {
                                    votes[9] += 1;
                                }

                                else {
                                    if (x[3] <= -68.5) {
                                        if (x[21] <= -94.5) {
                                            votes[9] += 1;
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
                                votes[6] += 1;
                            }
                        }

                        // tree #63
                        if (x[31] <= -77.0) {
                            if (x[38] <= -94.5) {
                                if (x[11] <= -78.0) {
                                    if (x[14] <= -68.5) {
                                        if (x[42] <= -84.0) {
                                            if (x[31] <= -93.5) {
                                                if (x[24] <= -95.0) {
                                                    if (x[33] <= -85.0) {
                                                        if (x[16] <= -94.0) {
                                                            if (x[33] <= -95.5) {
                                                                if (x[34] <= -82.0) {
                                                                    votes[12] += 1;
                                                                }

                                                                else {
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[12] <= -90.0) {
                                                        if (x[25] <= -85.0) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            votes[19] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[15] <= -79.0) {
                                                    if (x[27] <= -94.5) {
                                                        votes[21] += 1;
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[30] <= -94.0) {
                                                if (x[43] <= -71.5) {
                                                    if (x[42] <= -77.0) {
                                                        if (x[29] <= -87.5) {
                                                            if (x[11] <= -95.0) {
                                                                if (x[2] <= -78.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[11] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -80.0) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[27] <= -67.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[23] <= -86.5) {
                                        if (x[17] <= -93.5) {
                                            votes[15] += 1;
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        if (x[6] <= -94.5) {
                                            if (x[22] <= -83.5) {
                                                if (x[3] <= -68.0) {
                                                    votes[9] += 1;
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
                                            votes[9] += 1;
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

                        // tree #64
                        if (x[11] <= -76.5) {
                            if (x[26] <= -85.0) {
                                if (x[2] <= -93.5) {
                                    if (x[31] <= -83.0) {
                                        if (x[14] <= -95.0) {
                                            if (x[34] <= -82.0) {
                                                if (x[39] <= -93.5) {
                                                    if (x[42] <= -92.0) {
                                                        if (x[33] <= -94.5) {
                                                            votes[12] += 1;
                                                        }

                                                        else {
                                                            if (x[23] <= -72.0) {
                                                                votes[3] += 1;
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[20] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }

                                        else {
                                            if (x[35] <= -79.5) {
                                                if (x[27] <= -89.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                votes[19] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }

                                else {
                                    if (x[29] <= -94.0) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        if (x[29] <= -86.5) {
                                            if (x[42] <= -66.0) {
                                                if (x[26] <= -95.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            if (x[28] <= -86.5) {
                                                votes[13] += 1;
                                            }

                                            else {
                                                votes[20] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[25] <= -95.5) {
                                    if (x[10] <= -81.0) {
                                        if (x[26] <= -78.0) {
                                            if (x[23] <= -80.0) {
                                                if (x[29] <= -93.5) {
                                                    if (x[43] <= -75.5) {
                                                        votes[23] += 1;
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
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[11] <= -94.0) {
                                                votes[11] += 1;
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    votes[23] += 1;
                                }
                            }
                        }

                        else {
                            if (x[3] <= -68.5) {
                                if (x[23] <= -85.5) {
                                    if (x[10] <= -58.5) {
                                        votes[16] += 1;
                                    }

                                    else {
                                        votes[15] += 1;
                                    }
                                }

                                else {
                                    if (x[11] <= -74.0) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        if (x[7] <= -94.5) {
                                            votes[7] += 1;
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

                        // tree #65
                        if (x[35] <= -70.0) {
                            if (x[14] <= -95.0) {
                                if (x[31] <= -84.5) {
                                    if (x[33] <= -95.5) {
                                        if (x[1] <= -95.0) {
                                            if (x[3] <= -71.5) {
                                                if (x[11] <= -66.0) {
                                                    if (x[25] <= -80.5) {
                                                        if (x[23] <= -82.5) {
                                                            if (x[29] <= -86.5) {
                                                                if (x[5] <= -93.5) {
                                                                    if (x[27] <= -64.5) {
                                                                        if (x[29] <= -87.5) {
                                                                            if (x[26] <= -91.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[43] <= -69.0) {
                                                                                    votes[11] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[42] <= -74.5) {
                                                                                votes[20] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[28] <= -94.0) {
                                                                                    votes[8] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[13] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[17] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[10] <= -81.5) {
                                                                votes[12] += 1;
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
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                if (x[31] <= -92.5) {
                                                    if (x[7] <= -94.5) {
                                                        if (x[23] <= -83.5) {
                                                            if (x[3] <= -68.0) {
                                                                votes[9] += 1;
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
                                                        votes[9] += 1;
                                                    }
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
                                        if (x[18] <= -95.0) {
                                            if (x[20] <= -94.0) {
                                                votes[18] += 1;
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
                                    if (x[28] <= -91.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[25] <= -86.5) {
                                    if (x[25] <= -89.5) {
                                        if (x[25] <= -95.5) {
                                            if (x[15] <= -69.0) {
                                                votes[23] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            if (x[14] <= -68.0) {
                                                votes[23] += 1;
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[14] += 1;
                                    }
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #66
                        if (x[27] <= -65.5) {
                            if (x[11] <= -60.0) {
                                if (x[32] <= -85.5) {
                                    if (x[15] <= -68.5) {
                                        if (x[15] <= -80.5) {
                                            if (x[42] <= -69.0) {
                                                if (x[3] <= -72.0) {
                                                    if (x[20] <= -88.0) {
                                                        if (x[23] <= -81.0) {
                                                            if (x[26] <= -82.5) {
                                                                if (x[25] <= -95.5) {
                                                                    if (x[43] <= -84.5) {
                                                                        if (x[30] <= -90.0) {
                                                                            if (x[10] <= -73.5) {
                                                                                if (x[23] <= -92.0) {
                                                                                    votes[22] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[9] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[16] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[21] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[3] <= -94.5) {
                                                                            votes[20] += 1;
                                                                        }

                                                                        else {
                                                                            votes[2] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[30] <= -94.5) {
                                                                        if (x[43] <= -94.0) {
                                                                            votes[22] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[19] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[30] <= -94.0) {
                                                                    votes[11] += 1;
                                                                }

                                                                else {
                                                                    votes[5] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[32] <= -94.5) {
                                                                if (x[23] <= -76.5) {
                                                                    if (x[31] <= -95.0) {
                                                                        if (x[11] <= -82.5) {
                                                                            votes[12] += 1;
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
                                                                    votes[0] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[17] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[20] <= -94.0) {
                                                        if (x[10] <= -74.0) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= -68.5) {
                                                                votes[9] += 1;
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
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            if (x[26] <= -85.0) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    votes[3] += 1;
                                }
                            }

                            else {
                                votes[15] += 1;
                            }
                        }

                        else {
                            votes[6] += 1;
                        }

                        // tree #67
                        if (x[22] <= -70.5) {
                            if (x[34] <= -94.5) {
                                if (x[39] <= -93.5) {
                                    if (x[10] <= -59.5) {
                                        if (x[0] <= -94.5) {
                                            if (x[43] <= -63.5) {
                                                if (x[22] <= -85.5) {
                                                    if (x[26] <= -76.0) {
                                                        if (x[28] <= -88.5) {
                                                            if (x[21] <= -95.5) {
                                                                if (x[42] <= -75.5) {
                                                                    if (x[24] <= -90.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[19] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[8] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[5] <= -94.5) {
                                                                    votes[16] += 1;
                                                                }

                                                                else {
                                                                    votes[17] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[22] <= -94.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[43] <= -77.5) {
                                                            votes[6] += 1;
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[33] <= -92.0) {
                                                        if (x[3] <= -88.0) {
                                                            if (x[43] <= -93.0) {
                                                                if (x[30] <= -93.5) {
                                                                    if (x[18] <= -83.0) {
                                                                        votes[12] += 1;
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
                                                                votes[21] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[20] <= -94.0) {
                                                                if (x[23] <= -85.0) {
                                                                    votes[7] += 1;
                                                                }

                                                                else {
                                                                    if (x[11] <= -73.5) {
                                                                        if (x[7] <= -93.5) {
                                                                            votes[7] += 1;
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

                                                            else {
                                                                votes[7] += 1;
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

                                        else {
                                            if (x[30] <= -80.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[15] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[31] <= -93.5) {
                                    if (x[15] <= -69.5) {
                                        if (x[15] <= -92.0) {
                                            votes[22] += 1;
                                        }

                                        else {
                                            if (x[24] <= -84.5) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[19] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[30] <= -87.5) {
                                        if (x[25] <= -88.5) {
                                            votes[23] += 1;
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }

                                    else {
                                        votes[19] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[18] += 1;
                        }

                        // tree #68
                        if (x[39] <= -94.0) {
                            if (x[22] <= -76.5) {
                                if (x[18] <= -84.5) {
                                    if (x[1] <= -94.5) {
                                        if (x[10] <= -95.0) {
                                            if (x[42] <= -72.5) {
                                                if (x[28] <= -89.0) {
                                                    if (x[23] <= -84.5) {
                                                        if (x[27] <= -95.0) {
                                                            if (x[3] <= -94.5) {
                                                                votes[22] += 1;
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[31] <= -93.5) {
                                                                if (x[34] <= -93.0) {
                                                                    if (x[42] <= -85.0) {
                                                                        votes[19] += 1;
                                                                    }

                                                                    else {
                                                                        votes[11] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[26] <= -87.5) {
                                                                        if (x[27] <= -89.5) {
                                                                            votes[4] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[14] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[23] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[3] <= -90.5) {
                                                        if (x[23] <= -84.5) {
                                                            votes[20] += 1;
                                                        }

                                                        else {
                                                            votes[21] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[27] <= -86.0) {
                                                    if (x[43] <= -66.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[7] <= -89.5) {
                                                if (x[21] <= -92.0) {
                                                    if (x[3] <= -91.5) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        if (x[31] <= -93.5) {
                                                            if (x[7] <= -95.0) {
                                                                if (x[2] <= -74.0) {
                                                                    if (x[26] <= -79.5) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[10] <= -74.0) {
                                                                        votes[7] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[3] <= -68.5) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[7] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[27] <= -64.0) {
                                                                votes[11] += 1;
                                                            }

                                                            else {
                                                                votes[6] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[22] <= -93.5) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        if (x[20] <= -89.5) {
                                                            votes[16] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[10] <= -71.0) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
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
                                if (x[30] <= -87.5) {
                                    votes[18] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #69
                        if (x[22] <= -90.5) {
                            if (x[14] <= -69.0) {
                                if (x[25] <= -87.0) {
                                    if (x[29] <= -94.5) {
                                        if (x[23] <= -95.5) {
                                            if (x[2] <= -90.5) {
                                                if (x[27] <= -94.0) {
                                                    votes[22] += 1;
                                                }

                                                else {
                                                    if (x[43] <= -89.5) {
                                                        if (x[27] <= -86.0) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            votes[23] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
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
                                        if (x[42] <= -66.5) {
                                            if (x[43] <= -74.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[24] <= -70.5) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[4] += 1;
                            }
                        }

                        else {
                            if (x[10] <= -71.0) {
                                if (x[43] <= -85.0) {
                                    if (x[10] <= -94.5) {
                                        if (x[30] <= -91.5) {
                                            if (x[21] <= -96.0) {
                                                votes[18] += 1;
                                            }

                                            else {
                                                votes[3] += 1;
                                            }
                                        }

                                        else {
                                            votes[21] += 1;
                                        }
                                    }

                                    else {
                                        if (x[22] <= -81.0) {
                                            if (x[22] <= -83.0) {
                                                votes[9] += 1;
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= -84.5) {
                                                if (x[23] <= -77.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[12] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[10] <= -93.5) {
                                        if (x[27] <= -87.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[27] <= -67.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[17] <= -95.0) {
                                    if (x[3] <= -81.0) {
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

                        // tree #70
                        if (x[38] <= -94.5) {
                            if (x[35] <= -82.0) {
                                if (x[31] <= -77.0) {
                                    if (x[42] <= -72.5) {
                                        if (x[35] <= -94.5) {
                                            if (x[10] <= -68.0) {
                                                if (x[10] <= -76.0) {
                                                    if (x[18] <= -93.0) {
                                                        if (x[32] <= -94.5) {
                                                            if (x[31] <= -85.5) {
                                                                if (x[43] <= -94.5) {
                                                                    if (x[11] <= -77.5) {
                                                                        votes[17] += 1;
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[42] <= -80.5) {
                                                                        if (x[27] <= -95.0) {
                                                                            if (x[2] <= -89.5) {
                                                                                if (x[22] <= -94.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[20] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[2] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= -80.5) {
                                                                                if (x[25] <= -90.5) {
                                                                                    votes[5] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[19] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[6] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[29] <= -93.5) {
                                                                            votes[11] += 1;
                                                                        }

                                                                        else {
                                                                            votes[20] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[21] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[20] <= -94.0) {
                                                                votes[18] += 1;
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[30] <= -94.0) {
                                                            votes[12] += 1;
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[22] <= -83.5) {
                                                        if (x[2] <= -68.0) {
                                                            votes[9] += 1;
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
                                                if (x[11] <= -58.5) {
                                                    votes[16] += 1;
                                                }

                                                else {
                                                    votes[15] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[25] <= -90.5) {
                                                if (x[31] <= -93.5) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[42] <= -64.0) {
                                            votes[8] += 1;
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[12] <= -94.5) {
                                    if (x[35] <= -70.0) {
                                        if (x[27] <= -88.5) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        votes[22] += 1;
                                    }
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #71
                        if (x[29] <= -87.5) {
                            if (x[33] <= -86.5) {
                                if (x[22] <= -76.5) {
                                    if (x[38] <= -94.5) {
                                        if (x[15] <= -80.5) {
                                            if (x[34] <= -70.0) {
                                                if (x[26] <= -65.0) {
                                                    if (x[25] <= -93.0) {
                                                        if (x[11] <= -60.0) {
                                                            if (x[2] <= -92.5) {
                                                                if (x[43] <= -90.5) {
                                                                    if (x[8] <= -94.5) {
                                                                        if (x[31] <= -93.5) {
                                                                            votes[12] += 1;
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
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[28] <= -94.5) {
                                                                    if (x[20] <= -88.5) {
                                                                        if (x[42] <= -69.5) {
                                                                            if (x[42] <= -87.5) {
                                                                                if (x[10] <= -71.0) {
                                                                                    votes[9] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[16] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[11] += 1;
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
                                                                    votes[13] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }

                                        else {
                                            if (x[43] <= -89.5) {
                                                if (x[42] <= -91.0) {
                                                    if (x[42] <= -96.5) {
                                                        if (x[31] <= -93.0) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            votes[23] += 1;
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
                                                if (x[40] <= -95.0) {
                                                    if (x[12] <= -94.5) {
                                                        votes[23] += 1;
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
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= -94.5) {
                                        votes[18] += 1;
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
                            if (x[23] <= -84.5) {
                                if (x[23] <= -94.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[20] += 1;
                                }
                            }

                            else {
                                votes[21] += 1;
                            }
                        }

                        // tree #72
                        if (x[35] <= -70.0) {
                            if (x[31] <= -77.0) {
                                if (x[27] <= -64.5) {
                                    if (x[22] <= -81.5) {
                                        if (x[5] <= -95.0) {
                                            if (x[38] <= -94.5) {
                                                if (x[27] <= -86.0) {
                                                    if (x[41] <= -94.0) {
                                                        if (x[3] <= -76.0) {
                                                            if (x[21] <= -95.5) {
                                                                if (x[2] <= -84.5) {
                                                                    if (x[23] <= -93.5) {
                                                                        if (x[42] <= -96.5) {
                                                                            votes[14] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[14] <= -80.5) {
                                                                                if (x[2] <= -92.5) {
                                                                                    votes[19] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[43] <= -95.0) {
                                                                                    votes[4] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[14] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[29] <= -84.0) {
                                                                            votes[20] += 1;
                                                                        }

                                                                        else {
                                                                            votes[21] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[28] <= -95.0) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[26] <= -94.0) {
                                                                            votes[2] += 1;
                                                                        }

                                                                        else {
                                                                            votes[13] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[16] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[23] <= -83.0) {
                                                                votes[9] += 1;
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
                                                    if (x[25] <= -95.5) {
                                                        if (x[0] <= -94.5) {
                                                            if (x[42] <= -69.0) {
                                                                votes[11] += 1;
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
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
                                        if (x[19] <= -88.5) {
                                            if (x[23] <= -73.0) {
                                                votes[3] += 1;
                                            }

                                            else {
                                                votes[18] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= -94.0) {
                                                if (x[19] <= -84.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    votes[12] += 1;
                                                }
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
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #73
                        if (x[14] <= -68.5) {
                            if (x[28] <= -94.5) {
                                if (x[26] <= -65.0) {
                                    if (x[11] <= -71.0) {
                                        if (x[3] <= -74.0) {
                                            if (x[14] <= -81.0) {
                                                if (x[26] <= -78.5) {
                                                    if (x[19] <= -88.5) {
                                                        if (x[34] <= -82.5) {
                                                            if (x[39] <= -94.0) {
                                                                if (x[30] <= -87.5) {
                                                                    if (x[22] <= -74.0) {
                                                                        if (x[16] <= -94.0) {
                                                                            if (x[3] <= -90.5) {
                                                                                votes[3] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[23] <= -92.5) {
                                                                                    votes[2] += 1;
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
                                                                        votes[18] += 1;
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
                                                            if (x[43] <= -94.5) {
                                                                if (x[15] <= -95.0) {
                                                                    votes[22] += 1;
                                                                }

                                                                else {
                                                                    votes[19] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[10] <= -82.5) {
                                                            if (x[11] <= -83.5) {
                                                                if (x[31] <= -95.0) {
                                                                    votes[12] += 1;
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[42] <= -80.5) {
                                                        votes[5] += 1;
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[31] <= -94.0) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= -68.5) {
                                                if (x[2] <= -69.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    votes[9] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[10] <= -58.5) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[27] <= -89.5) {
                                    if (x[22] <= -84.0) {
                                        votes[20] += 1;
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }

                                else {
                                    votes[13] += 1;
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #74
                        if (x[30] <= -83.5) {
                            if (x[18] <= -84.5) {
                                if (x[24] <= -71.0) {
                                    if (x[3] <= -76.5) {
                                        if (x[35] <= -70.0) {
                                            if (x[14] <= -80.5) {
                                                if (x[21] <= -91.5) {
                                                    if (x[33] <= -94.5) {
                                                        if (x[18] <= -93.0) {
                                                            if (x[42] <= -63.5) {
                                                                if (x[2] <= -86.0) {
                                                                    if (x[26] <= -88.5) {
                                                                        votes[20] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[42] <= -84.5) {
                                                                            votes[19] += 1;
                                                                        }

                                                                        else {
                                                                            votes[5] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[11] <= -58.5) {
                                                                        if (x[43] <= -74.5) {
                                                                            if (x[3] <= -77.5) {
                                                                                if (x[11] <= -95.0) {
                                                                                    votes[2] += 1;
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
                                                                            votes[8] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[15] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[19] <= -95.0) {
                                                            votes[18] += 1;
                                                        }

                                                        else {
                                                            votes[3] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -95.0) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[15] <= -68.5) {
                                                    if (x[31] <= -94.0) {
                                                        votes[14] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[7] <= -94.5) {
                                            if (x[2] <= -70.0) {
                                                if (x[2] <= -72.5) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                if (x[23] <= -83.0) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    votes[7] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[9] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[12] += 1;
                            }
                        }

                        else {
                            if (x[23] <= -78.0) {
                                votes[21] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #75
                        if (x[43] <= -64.0) {
                            if (x[18] <= -84.5) {
                                if (x[10] <= -76.0) {
                                    if (x[0] <= -95.0) {
                                        if (x[18] <= -87.5) {
                                            if (x[27] <= -74.0) {
                                                if (x[33] <= -85.0) {
                                                    if (x[27] <= -86.0) {
                                                        if (x[38] <= -94.5) {
                                                            if (x[35] <= -94.5) {
                                                                if (x[3] <= -94.5) {
                                                                    if (x[29] <= -93.5) {
                                                                        votes[18] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[31] <= -92.0) {
                                                                            votes[20] += 1;
                                                                        }

                                                                        else {
                                                                            votes[21] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[3] <= -77.0) {
                                                                        if (x[16] <= -94.0) {
                                                                            if (x[22] <= -93.5) {
                                                                                if (x[5] <= -93.0) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[17] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[20] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[17] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[27] <= -95.5) {
                                                                    votes[22] += 1;
                                                                }

                                                                else {
                                                                    if (x[25] <= -89.5) {
                                                                        votes[4] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[25] <= -85.5) {
                                                                            votes[14] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[27] <= -83.5) {
                                                            votes[23] += 1;
                                                        }

                                                        else {
                                                            if (x[34] <= -92.0) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[23] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[43] <= -77.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[10] += 1;
                                        }
                                    }

                                    else {
                                        if (x[43] <= -85.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[5] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[10] <= -71.0) {
                                        if (x[23] <= -83.5) {
                                            if (x[6] <= -94.5) {
                                                votes[7] += 1;
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }

                                    else {
                                        if (x[17] <= -95.0) {
                                            if (x[10] <= -62.5) {
                                                votes[16] += 1;
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
                                votes[12] += 1;
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #76
                        if (x[3] <= -76.5) {
                            if (x[11] <= -75.5) {
                                if (x[27] <= -80.0) {
                                    if (x[23] <= -94.0) {
                                        if (x[39] <= -94.0) {
                                            if (x[28] <= -89.5) {
                                                if (x[15] <= -68.0) {
                                                    if (x[2] <= -84.5) {
                                                        if (x[26] <= -85.0) {
                                                            if (x[26] <= -94.0) {
                                                                votes[22] += 1;
                                                            }

                                                            else {
                                                                if (x[26] <= -87.5) {
                                                                    votes[19] += 1;
                                                                }

                                                                else {
                                                                    votes[14] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[15] <= -87.0) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[23] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[21] <= -95.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[17] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                if (x[42] <= -66.0) {
                                                    if (x[3] <= -83.5) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[2] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[32] <= -86.0) {
                                            if (x[18] <= -93.0) {
                                                if (x[11] <= -92.0) {
                                                    if (x[42] <= -84.5) {
                                                        if (x[23] <= -74.5) {
                                                            votes[21] += 1;
                                                        }

                                                        else {
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[20] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[31] <= -95.0) {
                                                    if (x[18] <= -82.5) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        if (x[19] <= -82.0) {
                                                            votes[10] += 1;
                                                        }

                                                        else {
                                                            votes[12] += 1;
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
                                }

                                else {
                                    if (x[2] <= -81.0) {
                                        votes[5] += 1;
                                    }

                                    else {
                                        if (x[42] <= -81.0) {
                                            votes[6] += 1;
                                        }

                                        else {
                                            votes[11] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[10] <= -58.0) {
                                    votes[16] += 1;
                                }

                                else {
                                    votes[15] += 1;
                                }
                            }
                        }

                        else {
                            if (x[27] <= -79.5) {
                                if (x[7] <= -94.5) {
                                    if (x[3] <= -72.0) {
                                        votes[9] += 1;
                                    }

                                    else {
                                        votes[7] += 1;
                                    }
                                }

                                else {
                                    votes[9] += 1;
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        // tree #77
                        if (x[31] <= -75.5) {
                            if (x[43] <= -64.0) {
                                if (x[42] <= -69.0) {
                                    if (x[26] <= -64.5) {
                                        if (x[19] <= -88.5) {
                                            if (x[11] <= -68.5) {
                                                if (x[22] <= -74.0) {
                                                    if (x[39] <= -92.5) {
                                                        if (x[0] <= -95.0) {
                                                            if (x[42] <= -84.5) {
                                                                if (x[24] <= -87.5) {
                                                                    if (x[31] <= -85.0) {
                                                                        if (x[21] <= -89.0) {
                                                                            if (x[42] <= -87.5) {
                                                                                if (x[19] <= -95.0) {
                                                                                    votes[7] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[3] += 1;
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
                                                                        votes[21] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[19] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[31] <= -94.5) {
                                                                    if (x[42] <= -82.0) {
                                                                        votes[20] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[22] <= -93.5) {
                                                                            votes[11] += 1;
                                                                        }

                                                                        else {
                                                                            votes[20] += 1;
                                                                        }
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
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[18] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= -80.5) {
                                                    if (x[6] <= -94.5) {
                                                        if (x[2] <= -81.5) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            votes[16] += 1;
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
                                        }

                                        else {
                                            if (x[10] <= -82.5) {
                                                votes[12] += 1;
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
                                    votes[8] += 1;
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #78
                        if (x[29] <= -84.0) {
                            if (x[1] <= -95.0) {
                                if (x[19] <= -88.5) {
                                    if (x[26] <= -95.0) {
                                        if (x[11] <= -77.5) {
                                            if (x[11] <= -92.5) {
                                                if (x[43] <= -87.0) {
                                                    if (x[39] <= -94.0) {
                                                        if (x[35] <= -71.0) {
                                                            if (x[22] <= -74.5) {
                                                                if (x[25] <= -93.0) {
                                                                    if (x[15] <= -81.5) {
                                                                        votes[3] += 1;
                                                                    }

                                                                    else {
                                                                        votes[4] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[19] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[22] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -93.5) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        votes[20] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[22] <= -83.0) {
                                                if (x[7] <= -87.5) {
                                                    if (x[3] <= -76.5) {
                                                        if (x[2] <= -81.5) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            votes[16] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[10] <= -75.0) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            if (x[3] <= -68.0) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[16] += 1;
                                                }
                                            }

                                            else {
                                                votes[7] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[25] <= -84.5) {
                                            if (x[2] <= -93.5) {
                                                if (x[42] <= -88.5) {
                                                    if (x[35] <= -84.0) {
                                                        votes[4] += 1;
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= -78.0) {
                                                    if (x[27] <= -85.5) {
                                                        if (x[2] <= -82.5) {
                                                            if (x[23] <= -93.5) {
                                                                if (x[42] <= -66.0) {
                                                                    votes[8] += 1;
                                                                }

                                                                else {
                                                                    votes[13] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[13] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[8] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -88.5) {
                                                        votes[11] += 1;
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[19] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[31] <= -95.0) {
                                        if (x[8] <= -94.5) {
                                            votes[12] += 1;
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
                                if (x[27] <= -79.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        else {
                            votes[21] += 1;
                        }

                        // tree #79
                        if (x[18] <= -88.5) {
                            if (x[5] <= -95.0) {
                                if (x[3] <= -94.5) {
                                    if (x[31] <= -94.0) {
                                        if (x[26] <= -87.5) {
                                            if (x[22] <= -73.5) {
                                                if (x[32] <= -91.5) {
                                                    if (x[34] <= -70.0) {
                                                        if (x[43] <= -86.0) {
                                                            if (x[13] <= -90.5) {
                                                                if (x[27] <= -95.5) {
                                                                    if (x[38] <= -92.5) {
                                                                        votes[4] += 1;
                                                                    }

                                                                    else {
                                                                        votes[1] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[4] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[22] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                votes[18] += 1;
                                            }
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }

                                    else {
                                        if (x[26] <= -87.0) {
                                            if (x[39] <= -94.0) {
                                                if (x[26] <= -95.0) {
                                                    if (x[23] <= -91.0) {
                                                        votes[19] += 1;
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[19] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[23] <= -78.5) {
                                        if (x[42] <= -64.0) {
                                            if (x[43] <= -71.5) {
                                                if (x[43] <= -77.0) {
                                                    if (x[26] <= -88.5) {
                                                        if (x[22] <= -86.0) {
                                                            if (x[10] <= -58.5) {
                                                                if (x[10] <= -85.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[15] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[11] <= -75.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                if (x[10] <= -73.5) {
                                                                    votes[7] += 1;
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[42] <= -81.5) {
                                                            votes[6] += 1;
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
                                                votes[8] += 1;
                                            }
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        else {
                            if (x[22] <= -78.5) {
                                votes[10] += 1;
                            }

                            else {
                                if (x[9] <= -94.0) {
                                    votes[12] += 1;
                                }

                                else {
                                    votes[10] += 1;
                                }
                            }
                        }

                        // tree #80
                        if (x[41] <= -94.0) {
                            if (x[22] <= -76.5) {
                                if (x[5] <= -95.0) {
                                    if (x[3] <= -78.5) {
                                        if (x[42] <= -69.0) {
                                            if (x[19] <= -88.5) {
                                                if (x[33] <= -92.0) {
                                                    if (x[28] <= -94.0) {
                                                        if (x[11] <= -58.5) {
                                                            if (x[35] <= -86.0) {
                                                                if (x[6] <= -93.0) {
                                                                    if (x[11] <= -75.0) {
                                                                        if (x[1] <= -95.0) {
                                                                            if (x[22] <= -95.5) {
                                                                                if (x[24] <= -71.0) {
                                                                                    votes[2] += 1;
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
                                                                            votes[5] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[16] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[16] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[34] <= -82.0) {
                                                                    votes[23] += 1;
                                                                }

                                                                else {
                                                                    if (x[14] <= -79.5) {
                                                                        if (x[42] <= -94.0) {
                                                                            votes[22] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[14] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[15] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[28] <= -82.0) {
                                                            if (x[28] <= -87.5) {
                                                                votes[20] += 1;
                                                            }

                                                            else {
                                                                if (x[28] <= -86.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[21] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= -85.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    if (x[10] <= -82.5) {
                                                        votes[12] += 1;
                                                    }

                                                    else {
                                                        votes[10] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= -80.5) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[11] <= -74.0) {
                                            if (x[23] <= -84.5) {
                                                if (x[10] <= -95.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[9] += 1;
                                            }
                                        }

                                        else {
                                            votes[7] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[17] += 1;
                                }
                            }

                            else {
                                if (x[31] <= -87.0) {
                                    votes[18] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #81
                        if (x[41] <= -94.0) {
                            if (x[2] <= -93.5) {
                                if (x[34] <= -70.0) {
                                    if (x[34] <= -82.0) {
                                        if (x[10] <= -93.0) {
                                            if (x[26] <= -86.0) {
                                                if (x[35] <= -88.0) {
                                                    if (x[30] <= -90.0) {
                                                        if (x[22] <= -73.5) {
                                                            if (x[19] <= -95.0) {
                                                                if (x[23] <= -94.0) {
                                                                    if (x[14] <= -92.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[43] <= -94.5) {
                                                                            votes[4] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[32] <= -90.0) {
                                                                        votes[20] += 1;
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

                                                        else {
                                                            votes[18] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[21] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[23] += 1;
                                            }
                                        }

                                        else {
                                            if (x[27] <= -91.5) {
                                                if (x[9] <= -94.0) {
                                                    if (x[23] <= -79.5) {
                                                        if (x[10] <= -82.0) {
                                                            votes[12] += 1;
                                                        }

                                                        else {
                                                            votes[10] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[12] += 1;
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
                                    }

                                    else {
                                        if (x[15] <= -80.5) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            votes[14] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[22] += 1;
                                }
                            }

                            else {
                                if (x[42] <= -69.0) {
                                    if (x[4] <= -94.5) {
                                        if (x[30] <= -94.0) {
                                            if (x[27] <= -88.5) {
                                                if (x[21] <= -92.0) {
                                                    if (x[11] <= -63.5) {
                                                        if (x[21] <= -96.5) {
                                                            if (x[29] <= -93.5) {
                                                                if (x[3] <= -68.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[7] += 1;
                                                                }
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
                                                        votes[15] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -95.0) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        votes[16] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[10] <= -95.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    if (x[23] <= -94.5) {
                                                        votes[6] += 1;
                                                    }

                                                    else {
                                                        votes[11] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= -76.5) {
                                                if (x[26] <= -80.0) {
                                                    votes[0] += 1;
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
                                        votes[17] += 1;
                                    }
                                }

                                else {
                                    if (x[43] <= -64.0) {
                                        votes[8] += 1;
                                    }

                                    else {
                                        votes[13] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #82
                        if (x[5] <= -95.0) {
                            if (x[35] <= -70.0) {
                                if (x[18] <= -95.5) {
                                    if (x[14] <= -69.0) {
                                        if (x[24] <= -87.5) {
                                            if (x[42] <= -72.0) {
                                                if (x[6] <= -94.5) {
                                                    if (x[3] <= -71.5) {
                                                        if (x[0] <= -95.0) {
                                                            if (x[23] <= -74.5) {
                                                                if (x[10] <= -95.0) {
                                                                    if (x[26] <= -80.5) {
                                                                        if (x[24] <= -95.0) {
                                                                            if (x[23] <= -94.0) {
                                                                                votes[2] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[23] <= -84.5) {
                                                                                    votes[20] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[21] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[42] <= -88.5) {
                                                                                if (x[15] <= -74.5) {
                                                                                    votes[14] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[23] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[14] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[11] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[42] <= -91.5) {
                                                                        if (x[21] <= -95.5) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[16] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[27] <= -79.0) {
                                                                votes[0] += 1;
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
                                                    votes[15] += 1;
                                                }
                                            }

                                            else {
                                                if (x[26] <= -85.0) {
                                                    if (x[3] <= -83.0) {
                                                        votes[8] += 1;
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[39] <= -94.0) {
                                                votes[19] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[4] += 1;
                                    }
                                }

                                else {
                                    if (x[11] <= -92.5) {
                                        votes[3] += 1;
                                    }

                                    else {
                                        votes[12] += 1;
                                    }
                                }
                            }

                            else {
                                votes[22] += 1;
                            }
                        }

                        else {
                            votes[17] += 1;
                        }

                        // tree #83
                        if (x[14] <= -68.0) {
                            if (x[29] <= -84.0) {
                                if (x[10] <= -78.0) {
                                    if (x[39] <= -94.0) {
                                        if (x[19] <= -88.5) {
                                            if (x[1] <= -95.0) {
                                                if (x[25] <= -85.5) {
                                                    if (x[42] <= -86.5) {
                                                        if (x[26] <= -85.5) {
                                                            if (x[35] <= -72.5) {
                                                                if (x[22] <= -73.5) {
                                                                    if (x[23] <= -90.5) {
                                                                        if (x[14] <= -88.5) {
                                                                            votes[17] += 1;
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
                                                                    votes[18] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[10] <= -94.5) {
                                                                votes[23] += 1;
                                                            }

                                                            else {
                                                                votes[0] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[10] <= -82.5) {
                                                            if (x[27] <= -95.5) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                if (x[28] <= -94.5) {
                                                                    if (x[31] <= -94.5) {
                                                                        if (x[29] <= -93.5) {
                                                                            if (x[2] <= -79.0) {
                                                                                votes[8] += 1;
                                                                            }

                                                                            else {
                                                                                votes[11] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[8] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[11] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[26] <= -95.0) {
                                                                        votes[20] += 1;
                                                                    }

                                                                    else {
                                                                        votes[13] += 1;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[6] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[19] += 1;
                                                }
                                            }

                                            else {
                                                if (x[10] <= -84.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[23] <= -78.5) {
                                                if (x[18] <= -84.0) {
                                                    votes[10] += 1;
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

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[11] <= -59.0) {
                                        if (x[3] <= -76.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            if (x[3] <= -68.5) {
                                                if (x[11] <= -74.0) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    if (x[23] <= -83.0) {
                                                        votes[9] += 1;
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
                                        votes[15] += 1;
                                    }
                                }
                            }

                            else {
                                votes[21] += 1;
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #84
                        if (x[18] <= -88.0) {
                            if (x[23] <= -76.5) {
                                if (x[26] <= -78.5) {
                                    if (x[25] <= -70.0) {
                                        if (x[32] <= -91.5) {
                                            if (x[40] <= -95.0) {
                                                if (x[27] <= -89.5) {
                                                    if (x[42] <= -84.5) {
                                                        if (x[23] <= -86.0) {
                                                            if (x[35] <= -82.0) {
                                                                if (x[22] <= -94.5) {
                                                                    if (x[2] <= -82.5) {
                                                                        votes[2] += 1;
                                                                    }

                                                                    else {
                                                                        votes[17] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= -81.5) {
                                                                        votes[15] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[11] <= -58.5) {
                                                                            votes[16] += 1;
                                                                        }

                                                                        else {
                                                                            votes[15] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[31] <= -92.0) {
                                                                if (x[7] <= -93.5) {
                                                                    if (x[20] <= -94.0) {
                                                                        if (x[11] <= -75.5) {
                                                                            votes[9] += 1;
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
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[21] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[29] <= -93.5) {
                                                            votes[2] += 1;
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[43] <= -63.5) {
                                                        if (x[35] <= -91.0) {
                                                            votes[8] += 1;
                                                        }

                                                        else {
                                                            if (x[25] <= -85.0) {
                                                                votes[23] += 1;
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[13] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[4] += 1;
                                            }
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[43] <= -80.5) {
                                        if (x[2] <= -76.5) {
                                            votes[5] += 1;
                                        }

                                        else {
                                            votes[6] += 1;
                                        }
                                    }

                                    else {
                                        votes[11] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[31] <= -87.0) {
                                    votes[18] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[31] <= -95.0) {
                                if (x[8] <= -94.5) {
                                    votes[12] += 1;
                                }

                                else {
                                    votes[10] += 1;
                                }
                            }

                            else {
                                votes[10] += 1;
                            }
                        }

                        // tree #85
                        if (x[27] <= -64.5) {
                            if (x[16] <= -94.5) {
                                if (x[42] <= -64.0) {
                                    if (x[26] <= -78.5) {
                                        if (x[3] <= -86.0) {
                                            if (x[11] <= -85.5) {
                                                if (x[15] <= -69.0) {
                                                    if (x[33] <= -95.5) {
                                                        if (x[25] <= -85.5) {
                                                            if (x[34] <= -72.5) {
                                                                if (x[23] <= -84.5) {
                                                                    if (x[35] <= -92.0) {
                                                                        votes[20] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[24] <= -89.5) {
                                                                            votes[23] += 1;
                                                                        }

                                                                        else {
                                                                            votes[14] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[29] <= -91.0) {
                                                                        votes[0] += 1;
                                                                    }

                                                                    else {
                                                                        votes[21] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[43] <= -94.5) {
                                                                votes[1] += 1;
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[20] <= -94.0) {
                                                            if (x[33] <= -84.5) {
                                                                votes[18] += 1;
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
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                if (x[10] <= -82.5) {
                                                    votes[12] += 1;
                                                }

                                                else {
                                                    votes[10] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[43] <= -72.0) {
                                                if (x[7] <= -95.0) {
                                                    if (x[10] <= -93.0) {
                                                        votes[2] += 1;
                                                    }

                                                    else {
                                                        if (x[23] <= -85.5) {
                                                            if (x[5] <= -93.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                votes[17] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[22] <= -86.5) {
                                                        if (x[6] <= -94.5) {
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

                                            else {
                                                votes[8] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[14] <= -86.5) {
                                            if (x[43] <= -80.5) {
                                                votes[5] += 1;
                                            }

                                            else {
                                                votes[11] += 1;
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
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
                            votes[6] += 1;
                        }

                        // tree #86
                        if (x[15] <= -75.5) {
                            if (x[35] <= -71.0) {
                                if (x[27] <= -64.5) {
                                    if (x[32] <= -85.5) {
                                        if (x[42] <= -71.5) {
                                            if (x[11] <= -68.5) {
                                                if (x[43] <= -85.0) {
                                                    if (x[23] <= -80.5) {
                                                        if (x[24] <= -71.5) {
                                                            if (x[29] <= -90.0) {
                                                                if (x[3] <= -75.5) {
                                                                    if (x[4] <= -94.5) {
                                                                        if (x[13] <= -94.0) {
                                                                            votes[19] += 1;
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
                                                                    if (x[3] <= -68.5) {
                                                                        votes[9] += 1;
                                                                    }

                                                                    else {
                                                                        votes[7] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[21] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[23] <= -77.0) {
                                                            if (x[19] <= -82.0) {
                                                                votes[10] += 1;
                                                            }

                                                            else {
                                                                votes[12] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[23] <= -70.5) {
                                                                votes[0] += 1;
                                                            }

                                                            else {
                                                                votes[18] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -88.5) {
                                                        if (x[29] <= -94.0) {
                                                            votes[11] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[22] <= -85.5) {
                                                            votes[20] += 1;
                                                        }

                                                        else {
                                                            votes[5] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[7] <= -87.5) {
                                                    if (x[7] <= -95.0) {
                                                        if (x[23] <= -88.0) {
                                                            votes[16] += 1;
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
                                                    votes[16] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[27] <= -85.5) {
                                                if (x[26] <= -88.5) {
                                                    if (x[42] <= -66.0) {
                                                        votes[8] += 1;
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
                                                votes[8] += 1;
                                            }
                                        }
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
                                votes[22] += 1;
                            }
                        }

                        else {
                            if (x[43] <= -94.5) {
                                if (x[26] <= -85.5) {
                                    votes[14] += 1;
                                }

                                else {
                                    votes[23] += 1;
                                }
                            }

                            else {
                                if (x[24] <= -94.0) {
                                    if (x[30] <= -94.0) {
                                        votes[4] += 1;
                                    }

                                    else {
                                        votes[23] += 1;
                                    }
                                }

                                else {
                                    votes[23] += 1;
                                }
                            }
                        }

                        // tree #87
                        if (x[10] <= -71.0) {
                            if (x[42] <= -87.5) {
                                if (x[5] <= -95.0) {
                                    if (x[22] <= -70.5) {
                                        if (x[2] <= -81.5) {
                                            if (x[23] <= -90.0) {
                                                if (x[43] <= -90.5) {
                                                    if (x[41] <= -92.0) {
                                                        if (x[42] <= -96.5) {
                                                            if (x[25] <= -73.5) {
                                                                if (x[25] <= -95.5) {
                                                                    votes[22] += 1;
                                                                }

                                                                else {
                                                                    if (x[35] <= -81.0) {
                                                                        votes[23] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[31] <= -93.5) {
                                                                            votes[14] += 1;
                                                                        }

                                                                        else {
                                                                            votes[19] += 1;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[1] += 1;
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
                                                    if (x[35] <= -81.5) {
                                                        if (x[12] <= -95.5) {
                                                            votes[23] += 1;
                                                        }

                                                        else {
                                                            votes[19] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[27] <= -88.0) {
                                                            votes[19] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[26] <= -92.0) {
                                                    if (x[10] <= -83.0) {
                                                        if (x[11] <= -92.0) {
                                                            votes[3] += 1;
                                                        }

                                                        else {
                                                            votes[12] += 1;
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
                                        }

                                        else {
                                            if (x[11] <= -76.0) {
                                                votes[9] += 1;
                                            }

                                            else {
                                                if (x[11] <= -73.5) {
                                                    votes[7] += 1;
                                                }

                                                else {
                                                    if (x[23] <= -85.0) {
                                                        votes[7] += 1;
                                                    }

                                                    else {
                                                        if (x[2] <= -68.5) {
                                                            votes[9] += 1;
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[18] += 1;
                                    }
                                }

                                else {
                                    votes[17] += 1;
                                }
                            }

                            else {
                                if (x[10] <= -83.0) {
                                    if (x[0] <= -95.0) {
                                        if (x[27] <= -78.0) {
                                            if (x[27] <= -89.5) {
                                                if (x[2] <= -83.5) {
                                                    if (x[27] <= -95.0) {
                                                        if (x[28] <= -83.5) {
                                                            if (x[3] <= -88.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[21] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[20] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[42] <= -63.5) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
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

                                else {
                                    votes[6] += 1;
                                }
                            }
                        }

                        else {
                            if (x[7] <= -94.5) {
                                votes[16] += 1;
                            }

                            else {
                                if (x[2] <= -81.5) {
                                    votes[15] += 1;
                                }

                                else {
                                    votes[16] += 1;
                                }
                            }
                        }

                        // tree #88
                        if (x[42] <= -64.0) {
                            if (x[40] <= -95.0) {
                                if (x[33] <= -95.5) {
                                    if (x[10] <= -71.0) {
                                        if (x[15] <= -80.5) {
                                            if (x[5] <= -95.0) {
                                                if (x[27] <= -78.0) {
                                                    if (x[27] <= -95.5) {
                                                        if (x[23] <= -93.5) {
                                                            if (x[3] <= -92.5) {
                                                                if (x[34] <= -82.0) {
                                                                    votes[1] += 1;
                                                                }

                                                                else {
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[2] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[42] <= -92.5) {
                                                                if (x[6] <= -94.5) {
                                                                    if (x[2] <= -84.0) {
                                                                        if (x[11] <= -81.5) {
                                                                            votes[12] += 1;
                                                                        }

                                                                        else {
                                                                            votes[10] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[7] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[31] <= -90.0) {
                                                                    votes[20] += 1;
                                                                }

                                                                else {
                                                                    votes[21] += 1;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[15] <= -92.5) {
                                                            if (x[26] <= -91.5) {
                                                                votes[20] += 1;
                                                            }

                                                            else {
                                                                if (x[10] <= -94.5) {
                                                                    votes[8] += 1;
                                                                }

                                                                else {
                                                                    votes[0] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[19] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[27] <= -64.5) {
                                                        if (x[2] <= -81.0) {
                                                            votes[5] += 1;
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[6] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            if (x[14] <= -74.5) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                if (x[26] <= -85.5) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[10] <= -58.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            votes[15] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[21] <= -96.0) {
                                        if (x[32] <= -84.5) {
                                            votes[18] += 1;
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
                                votes[4] += 1;
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #89
                        if (x[22] <= -76.5) {
                            if (x[43] <= -63.5) {
                                if (x[18] <= -86.5) {
                                    if (x[14] <= -74.5) {
                                        if (x[42] <= -87.5) {
                                            if (x[3] <= -77.0) {
                                                if (x[5] <= -95.0) {
                                                    if (x[25] <= -71.0) {
                                                        if (x[35] <= -71.0) {
                                                            if (x[25] <= -86.5) {
                                                                if (x[10] <= -58.5) {
                                                                    if (x[24] <= -94.5) {
                                                                        if (x[16] <= -94.5) {
                                                                            votes[3] += 1;
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
                                                                    votes[15] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[22] += 1;
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
                                                if (x[23] <= -83.5) {
                                                    votes[9] += 1;
                                                }

                                                else {
                                                    if (x[3] <= -72.0) {
                                                        votes[9] += 1;
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= -95.0) {
                                                if (x[22] <= -84.0) {
                                                    if (x[23] <= -88.5) {
                                                        if (x[22] <= -95.5) {
                                                            if (x[2] <= -78.0) {
                                                                if (x[27] <= -91.5) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    if (x[43] <= -74.0) {
                                                                        votes[6] += 1;
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
                                                            votes[11] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= -84.0) {
                                                            votes[20] += 1;
                                                        }

                                                        else {
                                                            if (x[23] <= -86.0) {
                                                                votes[6] += 1;
                                                            }

                                                            else {
                                                                if (x[2] <= -76.0) {
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
                                                    votes[21] += 1;
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[27] <= -86.0) {
                                            if (x[26] <= -87.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[8] <= -94.5) {
                                        votes[12] += 1;
                                    }

                                    else {
                                        votes[10] += 1;
                                    }
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            if (x[23] <= -70.5) {
                                votes[0] += 1;
                            }

                            else {
                                votes[18] += 1;
                            }
                        }

                        // tree #90
                        if (x[43] <= -64.0) {
                            if (x[35] <= -70.5) {
                                if (x[20] <= -88.5) {
                                    if (x[11] <= -71.0) {
                                        if (x[25] <= -71.5) {
                                            if (x[31] <= -79.0) {
                                                if (x[15] <= -68.5) {
                                                    if (x[15] <= -80.5) {
                                                        if (x[11] <= -77.5) {
                                                            if (x[42] <= -70.0) {
                                                                if (x[3] <= -78.5) {
                                                                    if (x[31] <= -85.0) {
                                                                        if (x[1] <= -95.0) {
                                                                            if (x[22] <= -73.0) {
                                                                                if (x[30] <= -94.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[10] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[18] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[5] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[21] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[11] <= -95.0) {
                                                                        votes[11] += 1;
                                                                    }

                                                                    else {
                                                                        votes[6] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[8] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[11] <= -75.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                if (x[22] <= -83.0) {
                                                                    if (x[3] <= -68.0) {
                                                                        votes[9] += 1;
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
                                                        votes[14] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
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
                                        if (x[6] <= -94.0) {
                                            votes[16] += 1;
                                        }

                                        else {
                                            if (x[17] <= -93.5) {
                                                votes[15] += 1;
                                            }

                                            else {
                                                votes[16] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[23] <= -91.0) {
                                        votes[17] += 1;
                                    }

                                    else {
                                        if (x[33] <= -90.5) {
                                            votes[7] += 1;
                                        }

                                        else {
                                            votes[3] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[22] += 1;
                            }
                        }

                        else {
                            votes[13] += 1;
                        }

                        // tree #91
                        if (x[18] <= -85.0) {
                            if (x[43] <= -64.0) {
                                if (x[29] <= -84.0) {
                                    if (x[10] <= -71.0) {
                                        if (x[43] <= -71.5) {
                                            if (x[29] <= -90.0) {
                                                if (x[38] <= -94.5) {
                                                    if (x[16] <= -94.5) {
                                                        if (x[11] <= -78.5) {
                                                            if (x[35] <= -70.0) {
                                                                if (x[33] <= -85.0) {
                                                                    if (x[26] <= -79.0) {
                                                                        if (x[0] <= -95.0) {
                                                                            if (x[22] <= -90.0) {
                                                                                if (x[27] <= -86.0) {
                                                                                    votes[4] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[23] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[10] <= -93.0) {
                                                                                    votes[18] += 1;
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
                                                                        if (x[26] <= -72.5) {
                                                                            votes[5] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[3] <= -78.5) {
                                                                                votes[11] += 1;
                                                                            }

                                                                            else {
                                                                                votes[6] += 1;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[3] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[22] <= -82.5) {
                                                                if (x[10] <= -72.5) {
                                                                    if (x[6] <= -94.0) {
                                                                        if (x[23] <= -85.0) {
                                                                            votes[7] += 1;
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
                                                                    votes[9] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
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
                                                if (x[43] <= -81.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[20] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= -80.5) {
                                            if (x[2] <= -80.5) {
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
                                    votes[21] += 1;
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            if (x[9] <= -94.0) {
                                votes[12] += 1;
                            }

                            else {
                                votes[10] += 1;
                            }
                        }

                        // tree #92
                        if (x[14] <= -69.0) {
                            if (x[22] <= -70.5) {
                                if (x[10] <= -59.0) {
                                    if (x[43] <= -64.0) {
                                        if (x[5] <= -94.5) {
                                            if (x[38] <= -94.5) {
                                                if (x[14] <= -80.0) {
                                                    if (x[22] <= -76.5) {
                                                        if (x[22] <= -81.5) {
                                                            if (x[14] <= -95.0) {
                                                                if (x[3] <= -81.0) {
                                                                    if (x[1] <= -95.0) {
                                                                        if (x[24] <= -95.0) {
                                                                            if (x[3] <= -86.5) {
                                                                                if (x[34] <= -82.0) {
                                                                                    votes[20] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[22] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[27] <= -94.5) {
                                                                                    votes[2] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[8] += 1;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[22] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[5] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[27] <= -65.0) {
                                                                        if (x[2] <= -80.5) {
                                                                            votes[16] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= -71.5) {
                                                                                if (x[23] <= -87.0) {
                                                                                    votes[11] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[9] += 1;
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
                                                            }

                                                            else {
                                                                votes[19] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[33] <= -92.0) {
                                                                if (x[10] <= -81.5) {
                                                                    votes[12] += 1;
                                                                }

                                                                else {
                                                                    votes[10] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[13] <= -94.0) {
                                                        if (x[26] <= -85.5) {
                                                            votes[14] += 1;
                                                        }

                                                        else {
                                                            votes[23] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
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
                                        votes[13] += 1;
                                    }
                                }

                                else {
                                    votes[15] += 1;
                                }
                            }

                            else {
                                votes[18] += 1;
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #93
                        if (x[0] <= -95.0) {
                            if (x[25] <= -86.5) {
                                if (x[41] <= -94.0) {
                                    if (x[23] <= -73.0) {
                                        if (x[42] <= -64.0) {
                                            if (x[4] <= -94.5) {
                                                if (x[34] <= -86.5) {
                                                    if (x[43] <= -81.0) {
                                                        if (x[29] <= -94.0) {
                                                            if (x[35] <= -94.5) {
                                                                if (x[11] <= -92.5) {
                                                                    votes[3] += 1;
                                                                }

                                                                else {
                                                                    if (x[10] <= -71.0) {
                                                                        if (x[22] <= -82.5) {
                                                                            if (x[23] <= -85.0) {
                                                                                if (x[10] <= -75.0) {
                                                                                    votes[6] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[7] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[9] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[3] <= -85.5) {
                                                                                if (x[30] <= -94.0) {
                                                                                    votes[12] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[10] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[7] += 1;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[23] <= -87.5) {
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
                                                            if (x[22] <= -91.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[21] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[27] <= -80.0) {
                                                            if (x[23] <= -93.5) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[11] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[31] <= -94.0) {
                                                        if (x[27] <= -94.0) {
                                                            votes[22] += 1;
                                                        }

                                                        else {
                                                            votes[14] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[23] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[17] += 1;
                                            }
                                        }

                                        else {
                                            votes[13] += 1;
                                        }
                                    }

                                    else {
                                        votes[18] += 1;
                                    }
                                }

                                else {
                                    votes[4] += 1;
                                }
                            }

                            else {
                                if (x[35] <= -81.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[19] += 1;
                                }
                            }
                        }

                        else {
                            if (x[30] <= -80.0) {
                                votes[5] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #94
                        if (x[40] <= -95.0) {
                            if (x[23] <= -70.5) {
                                if (x[28] <= -88.5) {
                                    if (x[11] <= -94.5) {
                                        if (x[14] <= -74.5) {
                                            if (x[15] <= -95.0) {
                                                if (x[33] <= -92.0) {
                                                    if (x[2] <= -92.5) {
                                                        if (x[39] <= -94.0) {
                                                            if (x[34] <= -82.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[1] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[43] <= -75.0) {
                                                            votes[11] += 1;
                                                        }

                                                        else {
                                                            if (x[2] <= -80.5) {
                                                                votes[8] += 1;
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[3] += 1;
                                                }
                                            }

                                            else {
                                                if (x[12] <= -94.5) {
                                                    if (x[25] <= -87.5) {
                                                        votes[14] += 1;
                                                    }

                                                    else {
                                                        votes[19] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[14] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }

                                    else {
                                        if (x[42] <= -85.5) {
                                            if (x[42] <= -94.5) {
                                                if (x[2] <= -92.0) {
                                                    if (x[18] <= -85.0) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        if (x[23] <= -79.5) {
                                                            votes[12] += 1;
                                                        }

                                                        else {
                                                            if (x[10] <= -82.5) {
                                                                votes[12] += 1;
                                                            }

                                                            else {
                                                                votes[10] += 1;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[11] <= -77.5) {
                                                        votes[17] += 1;
                                                    }

                                                    else {
                                                        if (x[21] <= -96.5) {
                                                            if (x[3] <= -77.0) {
                                                                votes[15] += 1;
                                                            }

                                                            else {
                                                                if (x[3] <= -68.5) {
                                                                    votes[9] += 1;
                                                                }

                                                                else {
                                                                    votes[7] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= -75.0) {
                                                                votes[16] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[23] <= -84.5) {
                                                if (x[26] <= -67.0) {
                                                    votes[5] += 1;
                                                }

                                                else {
                                                    votes[6] += 1;
                                                }
                                            }

                                            else {
                                                votes[5] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[23] <= -84.5) {
                                        if (x[2] <= -93.5) {
                                            votes[20] += 1;
                                        }

                                        else {
                                            if (x[27] <= -93.5) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[21] += 1;
                                    }
                                }
                            }

                            else {
                                votes[18] += 1;
                            }
                        }

                        else {
                            votes[4] += 1;
                        }

                        // tree #95
                        if (x[27] <= -78.0) {
                            if (x[5] <= -93.5) {
                                if (x[24] <= -87.5) {
                                    if (x[43] <= -74.0) {
                                        if (x[30] <= -76.0) {
                                            if (x[34] <= -70.0) {
                                                if (x[14] <= -68.5) {
                                                    if (x[23] <= -95.0) {
                                                        if (x[30] <= -93.5) {
                                                            if (x[35] <= -88.0) {
                                                                votes[2] += 1;
                                                            }

                                                            else {
                                                                votes[14] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[23] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[43] <= -85.0) {
                                                            if (x[3] <= -76.0) {
                                                                if (x[30] <= -90.0) {
                                                                    if (x[22] <= -83.5) {
                                                                        votes[16] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[11] <= -92.5) {
                                                                            if (x[33] <= -86.0) {
                                                                                votes[18] += 1;
                                                                            }

                                                                            else {
                                                                                votes[3] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[12] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    votes[21] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[21] <= -94.5) {
                                                                    if (x[6] <= -94.5) {
                                                                        if (x[3] <= -68.5) {
                                                                            votes[9] += 1;
                                                                        }

                                                                        else {
                                                                            votes[7] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[9] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[7] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            votes[20] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[4] += 1;
                                                }
                                            }

                                            else {
                                                votes[22] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[27] <= -85.5) {
                                            if (x[42] <= -66.0) {
                                                votes[8] += 1;
                                            }

                                            else {
                                                votes[13] += 1;
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[25] <= -70.0) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[17] += 1;
                            }
                        }

                        else {
                            if (x[30] <= -93.5) {
                                if (x[10] <= -95.0) {
                                    votes[11] += 1;
                                }

                                else {
                                    votes[6] += 1;
                                }
                            }

                            else {
                                if (x[0] <= -95.0) {
                                    votes[6] += 1;
                                }

                                else {
                                    votes[5] += 1;
                                }
                            }
                        }

                        // tree #96
                        if (x[19] <= -88.5) {
                            if (x[27] <= -64.5) {
                                if (x[15] <= -92.5) {
                                    if (x[11] <= -71.0) {
                                        if (x[5] <= -95.0) {
                                            if (x[33] <= -95.5) {
                                                if (x[1] <= -95.0) {
                                                    if (x[30] <= -83.0) {
                                                        if (x[11] <= -74.0) {
                                                            if (x[43] <= -64.0) {
                                                                if (x[35] <= -74.0) {
                                                                    if (x[28] <= -88.0) {
                                                                        if (x[3] <= -94.5) {
                                                                            votes[1] += 1;
                                                                        }

                                                                        else {
                                                                            if (x[43] <= -90.5) {
                                                                                votes[9] += 1;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= -82.0) {
                                                                                    votes[8] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[11] += 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[20] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[22] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[13] += 1;
                                                            }
                                                        }

                                                        else {
                                                            votes[7] += 1;
                                                        }
                                                    }

                                                    else {
                                                        if (x[31] <= -75.5) {
                                                            votes[21] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[42] <= -85.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        votes[5] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[18] <= -95.5) {
                                                    if (x[21] <= -95.5) {
                                                        votes[18] += 1;
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
                                            votes[17] += 1;
                                        }
                                    }

                                    else {
                                        if (x[20] <= -95.5) {
                                            if (x[23] <= -88.5) {
                                                if (x[17] <= -95.0) {
                                                    votes[15] += 1;
                                                }

                                                else {
                                                    votes[16] += 1;
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
                                }

                                else {
                                    if (x[34] <= -93.0) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        if (x[14] <= -81.0) {
                                            votes[19] += 1;
                                        }

                                        else {
                                            if (x[34] <= -82.0) {
                                                if (x[30] <= -94.0) {
                                                    votes[4] += 1;
                                                }

                                                else {
                                                    votes[23] += 1;
                                                }
                                            }

                                            else {
                                                if (x[25] <= -88.5) {
                                                    votes[14] += 1;
                                                }

                                                else {
                                                    if (x[13] <= -94.0) {
                                                        votes[23] += 1;
                                                    }

                                                    else {
                                                        votes[14] += 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                votes[6] += 1;
                            }
                        }

                        else {
                            if (x[11] <= -81.5) {
                                if (x[19] <= -84.5) {
                                    votes[10] += 1;
                                }

                                else {
                                    votes[12] += 1;
                                }
                            }

                            else {
                                votes[10] += 1;
                            }
                        }

                        // tree #97
                        if (x[15] <= -74.5) {
                            if (x[30] <= -79.0) {
                                if (x[26] <= -78.5) {
                                    if (x[26] <= -95.0) {
                                        if (x[34] <= -70.5) {
                                            if (x[3] <= -94.5) {
                                                if (x[11] <= -92.5) {
                                                    if (x[23] <= -73.0) {
                                                        if (x[35] <= -92.5) {
                                                            if (x[22] <= -81.5) {
                                                                if (x[29] <= -84.5) {
                                                                    votes[20] += 1;
                                                                }

                                                                else {
                                                                    votes[21] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[3] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[24] <= -74.0) {
                                                                votes[19] += 1;
                                                            }

                                                            else {
                                                                votes[1] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[18] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[18] <= -81.5) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[12] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[20] <= -88.5) {
                                                    if (x[42] <= -93.0) {
                                                        if (x[2] <= -74.0) {
                                                            if (x[23] <= -87.5) {
                                                                if (x[10] <= -58.5) {
                                                                    votes[16] += 1;
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
                                                            if (x[3] <= -68.5) {
                                                                votes[9] += 1;
                                                            }

                                                            else {
                                                                votes[7] += 1;
                                                            }
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
                                        }

                                        else {
                                            votes[22] += 1;
                                        }
                                    }

                                    else {
                                        if (x[14] <= -92.5) {
                                            if (x[27] <= -94.5) {
                                                votes[20] += 1;
                                            }

                                            else {
                                                if (x[2] <= -80.5) {
                                                    votes[8] += 1;
                                                }

                                                else {
                                                    votes[13] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[25] <= -84.5) {
                                                votes[14] += 1;
                                            }

                                            else {
                                                votes[19] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[23] <= -87.5) {
                                        if (x[43] <= -81.5) {
                                            votes[6] += 1;
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
                            if (x[26] <= -85.5) {
                                if (x[26] <= -87.5) {
                                    votes[4] += 1;
                                }

                                else {
                                    votes[14] += 1;
                                }
                            }

                            else {
                                votes[23] += 1;
                            }
                        }

                        // tree #98
                        if (x[34] <= -70.0) {
                            if (x[42] <= -64.0) {
                                if (x[28] <= -88.0) {
                                    if (x[27] <= -67.0) {
                                        if (x[42] <= -75.0) {
                                            if (x[19] <= -88.5) {
                                                if (x[32] <= -94.5) {
                                                    if (x[31] <= -79.5) {
                                                        if (x[23] <= -85.0) {
                                                            if (x[14] <= -68.5) {
                                                                if (x[35] <= -81.5) {
                                                                    if (x[21] <= -95.5) {
                                                                        if (x[11] <= -58.5) {
                                                                            if (x[34] <= -92.0) {
                                                                                if (x[25] <= -71.0) {
                                                                                    votes[16] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[1] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[23] += 1;
                                                                            }
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
                                                                    if (x[24] <= -87.5) {
                                                                        votes[14] += 1;
                                                                    }

                                                                    else {
                                                                        votes[19] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                votes[4] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= -95.0) {
                                                                if (x[3] <= -68.5) {
                                                                    votes[9] += 1;
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
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[33] <= -86.5) {
                                                        votes[18] += 1;
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[10] <= -85.0) {
                                                    votes[10] += 1;
                                                }

                                                else {
                                                    if (x[19] <= -84.0) {
                                                        votes[10] += 1;
                                                    }

                                                    else {
                                                        votes[12] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            votes[8] += 1;
                                        }
                                    }

                                    else {
                                        votes[6] += 1;
                                    }
                                }

                                else {
                                    if (x[42] <= -82.5) {
                                        votes[21] += 1;
                                    }

                                    else {
                                        votes[20] += 1;
                                    }
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            votes[22] += 1;
                        }

                        // tree #99
                        if (x[27] <= -65.0) {
                            if (x[42] <= -64.0) {
                                if (x[15] <= -92.5) {
                                    if (x[24] <= -75.5) {
                                        if (x[10] <= -71.0) {
                                            if (x[43] <= -76.5) {
                                                if (x[10] <= -93.5) {
                                                    if (x[33] <= -85.0) {
                                                        if (x[28] <= -94.0) {
                                                            if (x[34] <= -82.0) {
                                                                if (x[23] <= -84.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[18] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[22] += 1;
                                                            }
                                                        }

                                                        else {
                                                            if (x[27] <= -95.5) {
                                                                if (x[43] <= -82.5) {
                                                                    votes[21] += 1;
                                                                }

                                                                else {
                                                                    votes[2] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[20] += 1;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        votes[3] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[23] <= -76.5) {
                                                        if (x[17] <= -94.0) {
                                                            if (x[3] <= -89.5) {
                                                                if (x[22] <= -78.5) {
                                                                    if (x[11] <= -83.0) {
                                                                        votes[12] += 1;
                                                                    }

                                                                    else {
                                                                        if (x[19] <= -83.0) {
                                                                            votes[10] += 1;
                                                                        }

                                                                        else {
                                                                            votes[12] += 1;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[9] <= -94.0) {
                                                                        votes[12] += 1;
                                                                    }

                                                                    else {
                                                                        votes[10] += 1;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[21] <= -93.0) {
                                                                    if (x[2] <= -68.5) {
                                                                        votes[9] += 1;
                                                                    }

                                                                    else {
                                                                        votes[7] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[17] += 1;
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
                                            }

                                            else {
                                                if (x[42] <= -72.0) {
                                                    votes[11] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[16] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[15] <= -80.0) {
                                        votes[19] += 1;
                                    }

                                    else {
                                        if (x[31] <= -94.0) {
                                            if (x[34] <= -83.5) {
                                                votes[4] += 1;
                                            }

                                            else {
                                                votes[14] += 1;
                                            }
                                        }

                                        else {
                                            votes[23] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[13] += 1;
                            }
                        }

                        else {
                            votes[6] += 1;
                        }

                        // tree #100
                        if (x[32] <= -86.0) {
                            if (x[1] <= -95.0) {
                                if (x[18] <= -84.5) {
                                    if (x[43] <= -71.5) {
                                        if (x[27] <= -86.0) {
                                            if (x[10] <= -76.0) {
                                                if (x[20] <= -94.0) {
                                                    if (x[27] <= -88.0) {
                                                        if (x[42] <= -84.5) {
                                                            if (x[35] <= -81.5) {
                                                                if (x[34] <= -94.5) {
                                                                    if (x[28] <= -91.0) {
                                                                        if (x[19] <= -93.5) {
                                                                            if (x[32] <= -94.5) {
                                                                                if (x[22] <= -92.5) {
                                                                                    votes[1] += 1;
                                                                                }

                                                                                else {
                                                                                    votes[9] += 1;
                                                                                }
                                                                            }

                                                                            else {
                                                                                votes[18] += 1;
                                                                            }
                                                                        }

                                                                        else {
                                                                            votes[10] += 1;
                                                                        }
                                                                    }

                                                                    else {
                                                                        votes[21] += 1;
                                                                    }
                                                                }

                                                                else {
                                                                    votes[4] += 1;
                                                                }
                                                            }

                                                            else {
                                                                if (x[25] <= -93.0) {
                                                                    votes[22] += 1;
                                                                }

                                                                else {
                                                                    votes[19] += 1;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[27] <= -95.0) {
                                                                if (x[23] <= -94.0) {
                                                                    votes[2] += 1;
                                                                }

                                                                else {
                                                                    votes[20] += 1;
                                                                }
                                                            }

                                                            else {
                                                                votes[20] += 1;
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
                                                if (x[3] <= -75.0) {
                                                    if (x[7] <= -94.5) {
                                                        if (x[21] <= -95.5) {
                                                            votes[15] += 1;
                                                        }

                                                        else {
                                                            votes[16] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[15] += 1;
                                                    }
                                                }

                                                else {
                                                    if (x[21] <= -96.5) {
                                                        if (x[6] <= -94.5) {
                                                            votes[7] += 1;
                                                        }

                                                        else {
                                                            votes[9] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[7] += 1;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= -90.0) {
                                                votes[23] += 1;
                                            }

                                            else {
                                                if (x[43] <= -77.5) {
                                                    votes[6] += 1;
                                                }

                                                else {
                                                    votes[11] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[26] <= -86.0) {
                                            if (x[28] <= -88.5) {
                                                if (x[29] <= -88.5) {
                                                    votes[13] += 1;
                                                }

                                                else {
                                                    votes[8] += 1;
                                                }
                                            }

                                            else {
                                                votes[13] += 1;
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
                                if (x[30] <= -80.5) {
                                    votes[5] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[3] += 1;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 24; i++) {
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
                            return "Coordenação de química";
                            case 4:
                            return "Lab. Informática 09";
                            case 5:
                            return "Lab. de Instrumentação biomédica";
                            case 6:
                            return "Lab. de aferição e calibração";
                            case 7:
                            return "Lab. de biologia";
                            case 8:
                            return "Lab. de fibras ópticas";
                            case 9:
                            return "Lab. de física";
                            case 10:
                            return "Lab. de matemática";
                            case 11:
                            return "Lab. de medições em telecomunições";
                            case 12:
                            return "Lab. de microscopia";
                            case 13:
                            return "Lab. de redes convergentes";
                            case 14:
                            return "Lab. de telecomunicações";
                            case 15:
                            return "Lab. química 01";
                            case 16:
                            return "Lab. química 02";
                            case 17:
                            return "Lab. química 03";
                            case 18:
                            return "Núcleo de pesquisa";
                            case 19:
                            return "PET Eng. Elétrica";
                            case 20:
                            return "Pesquisa em Eng. Elétrica";
                            case 21:
                            return "Práticas didáticas";
                            case 22:
                            return "Sala dos professores";
                            case 23:
                            return "Sala dos técnicos";
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
0x1B4E2750, 0xF540467C, 0x258065C0, 0xCB8E04EC, 0x7EBD0DDF, 
0x90B36CF3, 0x4C304F42, 0xA23E2E6E, 0xBC62F26E, 0x526C9342, 
0xF2F563E8, 0x1CFB02C4, 0xDEF4601C, 0x30FA0130, 0xBA183585, 
0x541654A9, 0xDE74F081, 0x307A91AD, 0xB242372E, 0x5C4C5602, 
0x5CA4F7CD, 0xB2AA96E1, 0x26BC3B94, 0xC8B25AB8, 0x296AE03B, 
0xC7648117, 0x3BDF4FD5, 0xD5D12EF9, 0x77A93E79, 0x99A75F55, 
0xD6EA2480, 0x38E445AC, 0x710EDE71, 0x9F00BF5D, 0xB6C27760, 
0x58CC164C, 0x267C0156, 0xC872607A, 0xCBCED482, 0x25C0B5AE, 
0x14CAF349, 0xFAC49265, 0x7E119E42, 0x901FFF6E, 
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
        return "Coordenação de química";
        case 4:
        return "Lab. Informática 09";
        case 5:
        return "Lab. de Instrumentação biomédica";
        case 6:
        return "Lab. de aferição e calibração";
        case 7:
        return "Lab. de biologia";
        case 8:
        return "Lab. de fibras ópticas";
        case 9:
        return "Lab. de física";
        case 10:
        return "Lab. de matemática";
        case 11:
        return "Lab. de medições em telecomunições";
        case 12:
        return "Lab. de microscopia";
        case 13:
        return "Lab. de redes convergentes";
        case 14:
        return "Lab. de telecomunicações";
        case 15:
        return "Lab. química 01";
        case 16:
        return "Lab. química 02";
        case 17:
        return "Lab. química 03";
        case 18:
        return "Núcleo de pesquisa";
        case 19:
        return "PET Eng. Elétrica";
        case 20:
        return "Pesquisa em Eng. Elétrica";
        case 21:
        return "Práticas didáticas";
        case 22:
        return "Sala dos professores";
        case 23:
        return "Sala dos técnicos";
        default:
        return "Houston we have a problem";
    }
}

# 3. Modelo a ser treinado

rf_model = RandomForestClassifier(
    n_estimators=100,            # Número de árvores
    max_depth=15,              # Profundidade máxima
    max_features='sqrt'        # Subconjunto aleatório de features
)

Rodada 1 - Acurácia média: 0.9417
Rodada 2 - Acurácia média: 0.9500
Rodada 3 - Acurácia média: 0.9667
Rodada 4 - Acurácia média: 0.9333
Rodada 5 - Acurácia média: 0.9667
Rodada 6 - Acurácia média: 0.9333
Rodada 7 - Acurácia média: 0.9417
Rodada 8 - Acurácia média: 0.9417
Rodada 9 - Acurácia média: 0.9333
Rodada 10 - Acurácia média: 0.9417

======================================
=========== Random Forest ============
======================================
Acurácia média (10 execuções): 0.9450
Desvio padrão entre execuções: 0.0119


Acurácia no conjunto de teste: 1.0000 (100.00%)
Acurácia no conjunto de teste: 1.0
*/
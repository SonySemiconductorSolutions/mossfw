/****************************************************************************
 * Copyright 2023 Sony Semiconductor Solutions Corporation
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "mossfw/sensorlib.h"
#include "mossfw/mossfw_data.h"
#include "inputdata.h"

/****************************************************************************
 * Public Data
 ****************************************************************************/

mossfw_data_v3ts_t acc10[113] = {
  {.x = 30,.y = 2088,.z = 535,.t = 0 & 0xffffu},
  {.x = 25,.y = 2077,.z = 523,.t = 1 & 0xffffu},
  {.x = 25,.y = 2077,.z = 523,.t = 2 & 0xffffu},
  {.x = 22,.y = 2093,.z = 512,.t = 3 & 0xffffu},
  {.x = 22,.y = 2093,.z = 512,.t = 4 & 0xffffu},
  {.x = 14,.y = 2093,.z = 521,.t = 5 & 0xffffu},
  {.x = 14,.y = 2093,.z = 521,.t = 3125 & 0xffffu},
  {.x = 30,.y = 2093,.z = 521,.t = 6250 & 0xffffu},
  {.x = 30,.y = 2093,.z = 521,.t = 9375 & 0xffffu},
  {.x = 15,.y = 2085,.z = 528,.t = 12500 & 0xffffu},
  {.x = 15,.y = 2085,.z = 528,.t = 15625 & 0xffffu},
  {.x = 30,.y = 2099,.z = 525,.t = 18750 & 0xffffu},
  {.x = 30,.y = 2099,.z = 525,.t = 21875 & 0xffffu},
  {.x = 13,.y = 2095,.z = 529,.t = 25000 & 0xffffu},
  {.x = 13,.y = 2095,.z = 529,.t = 28125 & 0xffffu},
  {.x = 29,.y = 2093,.z = 535,.t = 31250 & 0xffffu},
  {.x = 29,.y = 2093,.z = 535,.t = 34375 & 0xffffu},
  {.x = 47,.y = 2085,.z = 515,.t = 37500 & 0xffffu},
  {.x = 47,.y = 2085,.z = 515,.t = 40625 & 0xffffu},
  {.x = 22,.y = 2087,.z = 546,.t = 43750 & 0xffffu},
  {.x = 22,.y = 2087,.z = 546,.t = 46875 & 0xffffu},
  {.x = 14,.y = 2076,.z = 541,.t = 50000 & 0xffffu},
  {.x = 14,.y = 2076,.z = 541,.t = 53125 & 0xffffu},
  {.x = 34,.y = 2065,.z = 509,.t = 56250 & 0xffffu},
  {.x = 34,.y = 2065,.z = 509,.t = 59375 & 0xffffu},
  {.x = 40,.y = 2075,.z = 547,.t = 62500 & 0xffffu},
  {.x = 40,.y = 2075,.z = 547,.t = 65625 & 0xffffu},
  {.x = 35,.y = 2089,.z = 519,.t = 68750 & 0xffffu},
  {.x = 35,.y = 2089,.z = 519,.t = 71875 & 0xffffu},
  {.x = 42,.y = 2079,.z = 543,.t = 75000 & 0xffffu},
  {.x = 42,.y = 2079,.z = 543,.t = 78125 & 0xffffu},
  {.x = 24,.y = 2071,.z = 539,.t = 81250 & 0xffffu},
  {.x = 24,.y = 2071,.z = 539,.t = 84375 & 0xffffu},
  {.x = 50,.y = 2086,.z = 527,.t = 87500 & 0xffffu},
  {.x = 50,.y = 2086,.z = 527,.t = 90625 & 0xffffu},
  {.x = 41,.y = 2078,.z = 537,.t = 93750 & 0xffffu},
  {.x = 41,.y = 2078,.z = 537,.t = 96875 & 0xffffu},
  {.x = 52,.y = 2082,.z = 543,.t = 100000 & 0xffffu},
  {.x = 52,.y = 2082,.z = 543,.t = 103125 & 0xffffu},
  {.x = 37,.y = 2081,.z = 530,.t = 106250 & 0xffffu},
  {.x = 37,.y = 2081,.z = 530,.t = 109375 & 0xffffu},
  {.x = 46,.y = 2085,.z = 557,.t = 112500 & 0xffffu},
  {.x = 46,.y = 2085,.z = 557,.t = 115625 & 0xffffu},
  {.x = 50,.y = 2096,.z = 521,.t = 118750 & 0xffffu},
  {.x = 50,.y = 2096,.z = 521,.t = 121875 & 0xffffu},
  {.x = 62,.y = 2077,.z = 555,.t = 125000 & 0xffffu},
  {.x = 62,.y = 2077,.z = 555,.t = 128125 & 0xffffu},
  {.x = 53,.y = 2092,.z = 546,.t = 131250 & 0xffffu},
  {.x = 53,.y = 2092,.z = 546,.t = 134375 & 0xffffu},
  {.x = 62,.y = 2089,.z = 548,.t = 137500 & 0xffffu},
  {.x = 62,.y = 2089,.z = 548,.t = 140625 & 0xffffu},
  {.x = 62,.y = 2080,.z = 555,.t = 143750 & 0xffffu},
  {.x = 62,.y = 2080,.z = 555,.t = 146875 & 0xffffu},
  {.x = 77,.y = 2093,.z = 561,.t = 150000 & 0xffffu},
  {.x = 77,.y = 2093,.z = 561,.t = 153125 & 0xffffu},
  {.x = 82,.y = 2078,.z = 522,.t = 156250 & 0xffffu},
  {.x = 82,.y = 2078,.z = 522,.t = 159375 & 0xffffu},
  {.x = 66,.y = 2091,.z = 550,.t = 162500 & 0xffffu},
  {.x = 66,.y = 2091,.z = 550,.t = 165625 & 0xffffu},
  {.x = 42,.y = 2081,.z = 561,.t = 168750 & 0xffffu},
  {.x = 42,.y = 2081,.z = 561,.t = 171875 & 0xffffu},
  {.x = 65,.y = 2070,.z = 545,.t = 175000 & 0xffffu},
  {.x = 65,.y = 2070,.z = 545,.t = 178125 & 0xffffu},
  {.x = 47,.y = 2080,.z = 556,.t = 181250 & 0xffffu},
  {.x = 47,.y = 2080,.z = 556,.t = 184375 & 0xffffu},
  {.x = 62,.y = 2072,.z = 535,.t = 187500 & 0xffffu},
  {.x = 62,.y = 2072,.z = 535,.t = 190625 & 0xffffu},
  {.x = 59,.y = 2075,.z = 549,.t = 193750 & 0xffffu},
  {.x = 59,.y = 2075,.z = 549,.t = 196875 & 0xffffu},
  {.x = 24,.y = 2050,.z = 541,.t = 200000 & 0xffffu},
  {.x = 24,.y = 2050,.z = 541,.t = 203125 & 0xffffu},
  {.x = 19,.y = 2043,.z = 542,.t = 206250 & 0xffffu},
  {.x = 19,.y = 2043,.z = 542,.t = 209375 & 0xffffu},
  {.x = 36,.y = 2022,.z = 506,.t = 212500 & 0xffffu},
  {.x = 36,.y = 2022,.z = 506,.t = 215625 & 0xffffu},
  {.x = 1,.y = 2017,.z = 506,.t = 218750 & 0xffffu},
  {.x = 1,.y = 2017,.z = 506,.t = 221875 & 0xffffu},
  {.x = 0,.y = 2030,.z = 525,.t = 225000 & 0xffffu},
  {.x = 0,.y = 2030,.z = 525,.t = 228125 & 0xffffu},
  {.x = 5,.y = 2023,.z = 550,.t = 231250 & 0xffffu},
  {.x = 5,.y = 2023,.z = 550,.t = 234375 & 0xffffu},
  {.x = 21,.y = 2008,.z = 542,.t = 237500 & 0xffffu},
  {.x = 21,.y = 2008,.z = 542,.t = 240625 & 0xffffu},
  {.x = 25,.y = 2025,.z = 565,.t = 243750 & 0xffffu},
  {.x = 25,.y = 2025,.z = 565,.t = 246875 & 0xffffu},
  {.x = 27,.y = 2021,.z = 546,.t = 250000 & 0xffffu},
  {.x = 27,.y = 2021,.z = 546,.t = 253125 & 0xffffu},
  {.x = 20,.y = 1996,.z = 532,.t = 256250 & 0xffffu},
  {.x = 20,.y = 1996,.z = 532,.t = 259375 & 0xffffu},
  {.x = 34,.y = 1979,.z = 525,.t = 262500 & 0xffffu},
  {.x = 34,.y = 1979,.z = 525,.t = 265625 & 0xffffu},
  {.x = 37,.y = 1985,.z = 551,.t = 268750 & 0xffffu},
  {.x = 37,.y = 1985,.z = 551,.t = 271875 & 0xffffu},
  {.x = 7,.y = 1992,.z = 521,.t = 275000 & 0xffffu},
  {.x = 7,.y = 1992,.z = 521,.t = 278125 & 0xffffu},
  {.x = 26,.y = 1997,.z = 532,.t = 281250 & 0xffffu},
  {.x = 26,.y = 1997,.z = 532,.t = 284375 & 0xffffu},
  {.x = 45,.y = 1976,.z = 515,.t = 287500 & 0xffffu},
  {.x = 45,.y = 1976,.z = 515,.t = 290625 & 0xffffu},
  {.x = 45,.y = 2001,.z = 527,.t = 293750 & 0xffffu},
  {.x = 45,.y = 2001,.z = 527,.t = 296875 & 0xffffu},
  {.x = 60,.y = 1990,.z = 546,.t = 300000 & 0xffffu},
  {.x = 60,.y = 1990,.z = 546,.t = 303125 & 0xffffu},
  {.x = 68,.y = 1969,.z = 546,.t = 306250 & 0xffffu},
  {.x = 68,.y = 1969,.z = 546,.t = 309375 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 312500 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 315625 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 318750 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 321875 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 325000 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 328125 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 331250 & 0xffffu},
  {.x = 89,.y = 1996,.z = 550,.t = 334375 & 0xffffu},
};

mossfw_data_v3ts_t gyr10[113] = {
  {.x = -29,.y = -25,.z = 6,.t = 0 & 0xffffu},
  {.x = -26,.y = -32,.z = 11,.t = 1 & 0xffffu},
  {.x = -30,.y = -34,.z = 15,.t = 2 & 0xffffu},
  {.x = -37,.y = -38,.z = 10,.t = 3 & 0xffffu},
  {.x = -37,.y = -33,.z = 15,.t = 4 & 0xffffu},
  {.x = -29,.y = -31,.z = 30,.t = 5 & 0xffffu},
  {.x = -29,.y = -36,.z = 15,.t = 3125 & 0xffffu},
  {.x = -35,.y = -35,.z = 24,.t = 6250 & 0xffffu},
  {.x = -35,.y = -30,.z = 24,.t = 9375 & 0xffffu},
  {.x = -39,.y = -39,.z = 28,.t = 12500 & 0xffffu},
  {.x = -43,.y = -42,.z = 31,.t = 15625 & 0xffffu},
  {.x = -41,.y = -35,.z = 27,.t = 18750 & 0xffffu},
  {.x = -43,.y = -39,.z = 45,.t = 21875 & 0xffffu},
  {.x = -49,.y = -38,.z = 31,.t = 25000 & 0xffffu},
  {.x = -53,.y = -38,.z = 44,.t = 28125 & 0xffffu},
  {.x = -60,.y = -37,.z = 43,.t = 31250 & 0xffffu},
  {.x = -58,.y = -47,.z = 47,.t = 34375 & 0xffffu},
  {.x = -55,.y = -42,.z = 51,.t = 37500 & 0xffffu},
  {.x = -63,.y = -45,.z = 64,.t = 40625 & 0xffffu},
  {.x = -60,.y = -45,.z = 52,.t = 43750 & 0xffffu},
  {.x = -60,.y = -53,.z = 48,.t = 46875 & 0xffffu},
  {.x = -59,.y = -52,.z = 63,.t = 50000 & 0xffffu},
  {.x = -60,.y = -53,.z = 58,.t = 53125 & 0xffffu},
  {.x = -68,.y = -50,.z = 60,.t = 56250 & 0xffffu},
  {.x = -75,.y = -53,.z = 63,.t = 59375 & 0xffffu},
  {.x = -70,.y = -53,.z = 65,.t = 62500 & 0xffffu},
  {.x = -79,.y = -51,.z = 70,.t = 65625 & 0xffffu},
  {.x = -80,.y = -53,.z = 69,.t = 68750 & 0xffffu},
  {.x = -69,.y = -52,.z = 69,.t = 71875 & 0xffffu},
  {.x = -79,.y = -52,.z = 67,.t = 75000 & 0xffffu},
  {.x = -84,.y = -55,.z = 81,.t = 78125 & 0xffffu},
  {.x = -85,.y = -55,.z = 68,.t = 81250 & 0xffffu},
  {.x = -86,.y = -58,.z = 62,.t = 84375 & 0xffffu},
  {.x = -82,.y = -57,.z = 73,.t = 87500 & 0xffffu},
  {.x = -84,.y = -60,.z = 73,.t = 90625 & 0xffffu},
  {.x = -91,.y = -66,.z = 66,.t = 93750 & 0xffffu},
  {.x = -83,.y = -67,.z = 67,.t = 96875 & 0xffffu},
  {.x = -87,.y = -70,.z = 74,.t = 100000 & 0xffffu},
  {.x = -84,.y = -65,.z = 70,.t = 103125 & 0xffffu},
  {.x = -86,.y = -66,.z = 67,.t = 106250 & 0xffffu},
  {.x = -90,.y = -67,.z = 74,.t = 109375 & 0xffffu},
  {.x = -86,.y = -68,.z = 65,.t = 112500 & 0xffffu},
  {.x = -92,.y = -71,.z = 65,.t = 115625 & 0xffffu},
  {.x = -93,.y = -75,.z = 64,.t = 118750 & 0xffffu},
  {.x = -90,.y = -73,.z = 63,.t = 121875 & 0xffffu},
  {.x = -87,.y = -71,.z = 75,.t = 125000 & 0xffffu},
  {.x = -87,.y = -69,.z = 72,.t = 128125 & 0xffffu},
  {.x = -83,.y = -69,.z = 75,.t = 131250 & 0xffffu},
  {.x = -87,.y = -73,.z = 65,.t = 134375 & 0xffffu},
  {.x = -96,.y = -68,.z = 69,.t = 137500 & 0xffffu},
  {.x = -84,.y = -74,.z = 70,.t = 140625 & 0xffffu},
  {.x = -89,.y = -79,.z = 63,.t = 143750 & 0xffffu},
  {.x = -96,.y = -71,.z = 56,.t = 146875 & 0xffffu},
  {.x = -95,.y = -83,.z = 59,.t = 150000 & 0xffffu},
  {.x = -90,.y = -80,.z = 51,.t = 153125 & 0xffffu},
  {.x = -89,.y = -79,.z = 58,.t = 156250 & 0xffffu},
  {.x = -92,.y = -82,.z = 53,.t = 159375 & 0xffffu},
  {.x = -88,.y = -79,.z = 48,.t = 162500 & 0xffffu},
  {.x = -89,.y = -77,.z = 53,.t = 165625 & 0xffffu},
  {.x = -97,.y = -79,.z = 46,.t = 168750 & 0xffffu},
  {.x = -99,.y = -83,.z = 53,.t = 171875 & 0xffffu},
  {.x = -99,.y = -83,.z = 44,.t = 175000 & 0xffffu},
  {.x = -92,.y = -82,.z = 39,.t = 178125 & 0xffffu},
  {.x = -86,.y = -75,.z = 52,.t = 181250 & 0xffffu},
  {.x = -81,.y = -81,.z = 40,.t = 184375 & 0xffffu},
  {.x = -89,.y = -88,.z = 43,.t = 187500 & 0xffffu},
  {.x = -96,.y = -88,.z = 42,.t = 190625 & 0xffffu},
  {.x = -90,.y = -83,.z = 45,.t = 193750 & 0xffffu},
  {.x = -95,.y = -84,.z = 40,.t = 196875 & 0xffffu},
  {.x = -97,.y = -80,.z = 33,.t = 200000 & 0xffffu},
  {.x = -102,.y = -92,.z = 36,.t = 203125 & 0xffffu},
  {.x = -87,.y = -84,.z = 40,.t = 206250 & 0xffffu},
  {.x = -93,.y = -86,.z = 40,.t = 209375 & 0xffffu},
  {.x = -104,.y = -97,.z = 45,.t = 212500 & 0xffffu},
  {.x = -100,.y = -96,.z = 54,.t = 215625 & 0xffffu},
  {.x = -101,.y = -92,.z = 50,.t = 218750 & 0xffffu},
  {.x = -106,.y = -94,.z = 54,.t = 221875 & 0xffffu},
  {.x = -106,.y = -99,.z = 57,.t = 225000 & 0xffffu},
  {.x = -100,.y = -106,.z = 43,.t = 228125 & 0xffffu},
  {.x = -112,.y = -108,.z = 56,.t = 231250 & 0xffffu},
  {.x = -103,.y = -102,.z = 66,.t = 234375 & 0xffffu},
  {.x = -104,.y = -108,.z = 61,.t = 237500 & 0xffffu},
  {.x = -107,.y = -105,.z = 68,.t = 240625 & 0xffffu},
  {.x = -101,.y = -106,.z = 61,.t = 243750 & 0xffffu},
  {.x = -97,.y = -101,.z = 56,.t = 246875 & 0xffffu},
  {.x = -91,.y = -101,.z = 69,.t = 250000 & 0xffffu},
  {.x = -87,.y = -100,.z = 65,.t = 253125 & 0xffffu},
  {.x = -93,.y = -95,.z = 65,.t = 256250 & 0xffffu},
  {.x = -92,.y = -101,.z = 69,.t = 259375 & 0xffffu},
  {.x = -87,.y = -97,.z = 60,.t = 262500 & 0xffffu},
  {.x = -91,.y = -98,.z = 75,.t = 265625 & 0xffffu},
  {.x = -97,.y = -102,.z = 72,.t = 268750 & 0xffffu},
  {.x = -93,.y = -98,.z = 68,.t = 271875 & 0xffffu},
  {.x = -85,.y = -97,.z = 75,.t = 275000 & 0xffffu},
  {.x = -90,.y = -99,.z = 72,.t = 278125 & 0xffffu},
  {.x = -85,.y = -93,.z = 77,.t = 281250 & 0xffffu},
  {.x = -88,.y = -99,.z = 71,.t = 284375 & 0xffffu},
  {.x = -92,.y = -101,.z = 70,.t = 287500 & 0xffffu},
  {.x = -83,.y = -95,.z = 73,.t = 290625 & 0xffffu},
  {.x = -73,.y = -96,.z = 77,.t = 293750 & 0xffffu},
  {.x = -83,.y = -90,.z = 70,.t = 296875 & 0xffffu},
  {.x = -80,.y = -89,.z = 70,.t = 300000 & 0xffffu},
  {.x = -77,.y = -87,.z = 72,.t = 303125 & 0xffffu},
  {.x = -71,.y = -85,.z = 73,.t = 306250 & 0xffffu},
  {.x = -75,.y = -81,.z = 63,.t = 309375 & 0xffffu},
  {.x = -75,.y = -74,.z = 64,.t = 312500 & 0xffffu},
  {.x = -78,.y = -79,.z = 64,.t = 315625 & 0xffffu},
  {.x = -78,.y = -79,.z = 64,.t = 318750 & 0xffffu},
  {.x = -78,.y = -79,.z = 64,.t = 321875 & 0xffffu},
  {.x = -78,.y = -79,.z = 64,.t = 325000 & 0xffffu},
  {.x = -78,.y = -79,.z = 64,.t = 328125 & 0xffffu},
  {.x = -78,.y = -79,.z = 64,.t = 331250 & 0xffffu},
  {.x = -78,.y = -79,.z = 64,.t = 334375 & 0xffffu},
};

mossfw_data_v3ts_t acc14[112] = {
  {.x =  79,.y = 1996,.z = 543,.t = 337494 & 0xffffu},
  {.x =  79,.y = 1996,.z = 543,.t = 337495 & 0xffffu},
  {.x =  99,.y = 1978,.z = 515,.t = 337496 & 0xffffu},
  {.x =  99,.y = 1978,.z = 515,.t = 337497 & 0xffffu},
  {.x = 101,.y = 1990,.z = 551,.t = 337498 & 0xffffu},
  {.x = 101,.y = 1990,.z = 551,.t = 337499 & 0xffffu},
  {.x = 116,.y = 1986,.z = 533,.t = 337500 & 0xffffu},
  {.x = 116,.y = 1986,.z = 533,.t = 340625 & 0xffffu},
  {.x = 124,.y = 1992,.z = 527,.t = 343750 & 0xffffu},
  {.x = 124,.y = 1992,.z = 527,.t = 346875 & 0xffffu},
  {.x = 89,.y = 1978,.z = 538,.t = 350000 & 0xffffu},
  {.x = 89,.y = 1978,.z = 538,.t = 353125 & 0xffffu},
  {.x = 68,.y = 1975,.z = 538,.t = 356250 & 0xffffu},
  {.x = 68,.y = 1975,.z = 538,.t = 359375 & 0xffffu},
  {.x = 108,.y = 1996,.z = 514,.t = 362500 & 0xffffu},
  {.x = 108,.y = 1996,.z = 514,.t = 365625 & 0xffffu},
  {.x = 84,.y = 1991,.z = 554,.t = 368750 & 0xffffu},
  {.x = 84,.y = 1991,.z = 554,.t = 371875 & 0xffffu},
  {.x = 82,.y = 1997,.z = 537,.t = 375000 & 0xffffu},
  {.x = 82,.y = 1997,.z = 537,.t = 378125 & 0xffffu},
  {.x = 101,.y = 1997,.z = 541,.t = 381250 & 0xffffu},
  {.x = 101,.y = 1997,.z = 541,.t = 384375 & 0xffffu},
  {.x = 101,.y = 1995,.z = 537,.t = 387500 & 0xffffu},
  {.x = 101,.y = 1995,.z = 537,.t = 390625 & 0xffffu},
  {.x = 102,.y = 2008,.z = 519,.t = 393750 & 0xffffu},
  {.x = 102,.y = 2008,.z = 519,.t = 396875 & 0xffffu},
  {.x = 88,.y = 2014,.z = 573,.t = 400000 & 0xffffu},
  {.x = 88,.y = 2014,.z = 573,.t = 403125 & 0xffffu},
  {.x = 111,.y = 2026,.z = 561,.t = 406250 & 0xffffu},
  {.x = 111,.y = 2026,.z = 561,.t = 409375 & 0xffffu},
  {.x = 88,.y = 2015,.z = 545,.t = 412500 & 0xffffu},
  {.x = 88,.y = 2015,.z = 545,.t = 415625 & 0xffffu},
  {.x = 101,.y = 2010,.z = 558,.t = 418750 & 0xffffu},
  {.x = 101,.y = 2010,.z = 558,.t = 421875 & 0xffffu},
  {.x = 141,.y = 2024,.z = 526,.t = 425000 & 0xffffu},
  {.x = 141,.y = 2024,.z = 526,.t = 428125 & 0xffffu},
  {.x = 86,.y = 2011,.z = 554,.t = 431250 & 0xffffu},
  {.x = 86,.y = 2011,.z = 554,.t = 434375 & 0xffffu},
  {.x = 116,.y = 2020,.z = 515,.t = 437500 & 0xffffu},
  {.x = 116,.y = 2020,.z = 515,.t = 440625 & 0xffffu},
  {.x = 111,.y = 2026,.z = 529,.t = 443750 & 0xffffu},
  {.x = 111,.y = 2026,.z = 529,.t = 446875 & 0xffffu},
  {.x = 101,.y = 2018,.z = 519,.t = 450000 & 0xffffu},
  {.x = 101,.y = 2018,.z = 519,.t = 453125 & 0xffffu},
  {.x = 119,.y = 2013,.z = 521,.t = 456250 & 0xffffu},
  {.x = 119,.y = 2013,.z = 521,.t = 459375 & 0xffffu},
  {.x = 108,.y = 2025,.z = 531,.t = 462500 & 0xffffu},
  {.x = 108,.y = 2025,.z = 531,.t = 465625 & 0xffffu},
  {.x = 111,.y = 2022,.z = 546,.t = 468750 & 0xffffu},
  {.x = 111,.y = 2022,.z = 546,.t = 471875 & 0xffffu},
  {.x = 126,.y = 2028,.z = 543,.t = 475000 & 0xffffu},
  {.x = 126,.y = 2028,.z = 543,.t = 478125 & 0xffffu},
  {.x = 120,.y = 2020,.z = 526,.t = 481250 & 0xffffu},
  {.x = 120,.y = 2020,.z = 526,.t = 484375 & 0xffffu},
  {.x = 105,.y = 2022,.z = 552,.t = 487500 & 0xffffu},
  {.x = 105,.y = 2022,.z = 552,.t = 490625 & 0xffffu},
  {.x = 135,.y = 2014,.z = 534,.t = 493750 & 0xffffu},
  {.x = 135,.y = 2014,.z = 534,.t = 496875 & 0xffffu},
  {.x = 114,.y = 2003,.z = 517,.t = 500000 & 0xffffu},
  {.x = 114,.y = 2003,.z = 517,.t = 503125 & 0xffffu},
  {.x = 92,.y = 2022,.z = 528,.t = 506250 & 0xffffu},
  {.x = 92,.y = 2022,.z = 528,.t = 509375 & 0xffffu},
  {.x = 126,.y = 2017,.z = 518,.t = 512500 & 0xffffu},
  {.x = 126,.y = 2017,.z = 518,.t = 515625 & 0xffffu},
  {.x = 120,.y = 2037,.z = 544,.t = 518750 & 0xffffu},
  {.x = 120,.y = 2037,.z = 544,.t = 521875 & 0xffffu},
  {.x = 119,.y = 2003,.z = 527,.t = 525000 & 0xffffu},
  {.x = 119,.y = 2003,.z = 527,.t = 528125 & 0xffffu},
  {.x = 131,.y = 2028,.z = 510,.t = 531250 & 0xffffu},
  {.x = 131,.y = 2028,.z = 510,.t = 534375 & 0xffffu},
  {.x = 113,.y = 2060,.z = 535,.t = 537500 & 0xffffu},
  {.x = 113,.y = 2060,.z = 535,.t = 540625 & 0xffffu},
  {.x = 109,.y = 2037,.z = 523,.t = 543750 & 0xffffu},
  {.x = 109,.y = 2037,.z = 523,.t = 546875 & 0xffffu},
  {.x = 111,.y = 2034,.z = 537,.t = 550000 & 0xffffu},
  {.x = 111,.y = 2034,.z = 537,.t = 553125 & 0xffffu},
  {.x = 117,.y = 2042,.z = 514,.t = 556250 & 0xffffu},
  {.x = 117,.y = 2042,.z = 514,.t = 559375 & 0xffffu},
  {.x = 105,.y = 2028,.z = 539,.t = 562500 & 0xffffu},
  {.x = 105,.y = 2028,.z = 539,.t = 565625 & 0xffffu},
  {.x = 108,.y = 2036,.z = 533,.t = 568750 & 0xffffu},
  {.x = 108,.y = 2036,.z = 533,.t = 571875 & 0xffffu},
  {.x = 91,.y = 2034,.z = 541,.t = 575000 & 0xffffu},
  {.x = 91,.y = 2034,.z = 541,.t = 578125 & 0xffffu},
  {.x = 123,.y = 2060,.z = 509,.t = 581250 & 0xffffu},
  {.x = 123,.y = 2060,.z = 509,.t = 584375 & 0xffffu},
  {.x = 84,.y = 2056,.z = 530,.t = 587500 & 0xffffu},
  {.x = 84,.y = 2056,.z = 530,.t = 590625 & 0xffffu},
  {.x = 112,.y = 2048,.z = 534,.t = 593750 & 0xffffu},
  {.x = 112,.y = 2048,.z = 534,.t = 596875 & 0xffffu},
  {.x = 127,.y = 2049,.z = 519,.t = 600000 & 0xffffu},
  {.x = 127,.y = 2049,.z = 519,.t = 603125 & 0xffffu},
  {.x = 93,.y = 2057,.z = 531,.t = 606250 & 0xffffu},
  {.x = 93,.y = 2057,.z = 531,.t = 609375 & 0xffffu},
  {.x = 125,.y = 2083,.z = 542,.t = 612500 & 0xffffu},
  {.x = 125,.y = 2083,.z = 542,.t = 615625 & 0xffffu},
  {.x = 104,.y = 2063,.z = 538,.t = 618750 & 0xffffu},
  {.x = 104,.y = 2063,.z = 538,.t = 621875 & 0xffffu},
  {.x = 106,.y = 2092,.z = 541,.t = 625000 & 0xffffu},
  {.x = 106,.y = 2092,.z = 541,.t = 628125 & 0xffffu},
  {.x = 126,.y = 2079,.z = 520,.t = 631250 & 0xffffu},
  {.x = 126,.y = 2079,.z = 520,.t = 634375 & 0xffffu},
  {.x = 106,.y = 2081,.z = 541,.t = 637500 & 0xffffu},
  {.x = 106,.y = 2081,.z = 541,.t = 640625 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 643750 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 646875 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 650000 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 653125 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 656250 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 659375 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 662500 & 0xffffu},
  {.x = 133,.y = 2127,.z = 534,.t = 665625 & 0xffffu},
};

mossfw_data_v3ts_t gyr14[112] = {
  {.x = -67,.y = -82,.z = 64,.t = 337494 & 0xffffu},
  {.x = -67,.y = -78,.z = 70,.t = 337495 & 0xffffu},
  {.x = -75,.y = -81,.z = 61,.t = 337496 & 0xffffu},
  {.x = -73,.y = -73,.z = 55,.t = 337497 & 0xffffu},
  {.x = -74,.y = -71,.z = 64,.t = 337498 & 0xffffu},
  {.x = -77,.y = -80,.z = 66,.t = 337499 & 0xffffu},
  {.x = -77,.y = -70,.z = 57,.t = 337500 & 0xffffu},
  {.x = -72,.y = -75,.z = 56,.t = 340625 & 0xffffu},
  {.x = -77,.y = -81,.z = 61,.t = 343750 & 0xffffu},
  {.x = -73,.y = -70,.z = 67,.t = 346875 & 0xffffu},
  {.x = -81,.y = -85,.z = 58,.t = 350000 & 0xffffu},
  {.x = -75,.y = -85,.z = 61,.t = 353125 & 0xffffu},
  {.x = -77,.y = -81,.z = 60,.t = 356250 & 0xffffu},
  {.x = -72,.y = -79,.z = 67,.t = 359375 & 0xffffu},
  {.x = -79,.y = -89,.z = 64,.t = 362500 & 0xffffu},
  {.x = -84,.y = -98,.z = 60,.t = 365625 & 0xffffu},
  {.x = -86,.y = -96,.z = 61,.t = 368750 & 0xffffu},
  {.x = -84,.y = -101,.z = 62,.t = 371875 & 0xffffu},
  {.x = -80,.y = -105,.z = 61,.t = 375000 & 0xffffu},
  {.x = -76,.y = -106,.z = 60,.t = 378125 & 0xffffu},
  {.x = -79,.y = -113,.z = 59,.t = 381250 & 0xffffu},
  {.x = -73,.y = -110,.z = 58,.t = 384375 & 0xffffu},
  {.x = -74,.y = -106,.z = 57,.t = 387500 & 0xffffu},
  {.x = -73,.y = -105,.z = 55,.t = 390625 & 0xffffu},
  {.x = -65,.y = -110,.z = 57,.t = 393750 & 0xffffu},
  {.x = -66,.y = -110,.z = 59,.t = 396875 & 0xffffu},
  {.x = -64,.y = -113,.z = 56,.t = 400000 & 0xffffu},
  {.x = -67,.y = -104,.z = 56,.t = 403125 & 0xffffu},
  {.x = -64,.y = -100,.z = 54,.t = 406250 & 0xffffu},
  {.x = -58,.y = -98,.z = 52,.t = 409375 & 0xffffu},
  {.x = -59,.y = -101,.z = 50,.t = 412500 & 0xffffu},
  {.x = -49,.y = -96,.z = 53,.t = 415625 & 0xffffu},
  {.x = -50,.y = -93,.z = 61,.t = 418750 & 0xffffu},
  {.x = -50,.y = -89,.z = 58,.t = 421875 & 0xffffu},
  {.x = -47,.y = -85,.z = 50,.t = 425000 & 0xffffu},
  {.x = -50,.y = -78,.z = 55,.t = 428125 & 0xffffu},
  {.x = -51,.y = -76,.z = 48,.t = 431250 & 0xffffu},
  {.x = -46,.y = -67,.z = 50,.t = 434375 & 0xffffu},
  {.x = -41,.y = -72,.z = 52,.t = 437500 & 0xffffu},
  {.x = -34,.y = -61,.z = 49,.t = 440625 & 0xffffu},
  {.x = -37,.y = -59,.z = 53,.t = 443750 & 0xffffu},
  {.x = -33,.y = -56,.z = 48,.t = 446875 & 0xffffu},
  {.x = -33,.y = -53,.z = 51,.t = 450000 & 0xffffu},
  {.x = -25,.y = -47,.z = 49,.t = 453125 & 0xffffu},
  {.x = -19,.y = -47,.z = 43,.t = 456250 & 0xffffu},
  {.x = -18,.y = -44,.z = 53,.t = 459375 & 0xffffu},
  {.x = -18,.y = -45,.z = 44,.t = 462500 & 0xffffu},
  {.x = -20,.y = -43,.z = 37,.t = 465625 & 0xffffu},
  {.x = -25,.y = -36,.z = 40,.t = 468750 & 0xffffu},
  {.x = -16,.y = -37,.z = 37,.t = 471875 & 0xffffu},
  {.x = -12,.y = -39,.z = 26,.t = 475000 & 0xffffu},
  {.x = -12,.y = -40,.z = 34,.t = 478125 & 0xffffu},
  {.x = -18,.y = -38,.z = 31,.t = 481250 & 0xffffu},
  {.x = -9,.y = -40,.z = 27,.t = 484375 & 0xffffu},
  {.x = 1,.y = -33,.z = 23,.t = 487500 & 0xffffu},
  {.x = -10,.y = -42,.z = 24,.t = 490625 & 0xffffu},
  {.x = -12,.y = -45,.z = 29,.t = 493750 & 0xffffu},
  {.x = -14,.y = -43,.z = 28,.t = 496875 & 0xffffu},
  {.x = -11,.y = -45,.z = 27,.t = 500000 & 0xffffu},
  {.x = -12,.y = -48,.z = 21,.t = 503125 & 0xffffu},
  {.x = -12,.y = -48,.z = 23,.t = 506250 & 0xffffu},
  {.x = -14,.y = -52,.z = 22,.t = 509375 & 0xffffu},
  {.x = -14,.y = -55,.z = 27,.t = 512500 & 0xffffu},
  {.x = -13,.y = -63,.z = 17,.t = 515625 & 0xffffu},
  {.x = -15,.y = -62,.z = 28,.t = 518750 & 0xffffu},
  {.x = -12,.y = -57,.z = 26,.t = 521875 & 0xffffu},
  {.x = -9,.y = -60,.z = 19,.t = 525000 & 0xffffu},
  {.x = -6,.y = -61,.z = 22,.t = 528125 & 0xffffu},
  {.x = -9,.y = -58,.z = 19,.t = 531250 & 0xffffu},
  {.x = -9,.y = -64,.z = 23,.t = 534375 & 0xffffu},
  {.x = -9,.y = -61,.z = 24,.t = 537500 & 0xffffu},
  {.x = -7,.y = -59,.z = 23,.t = 540625 & 0xffffu},
  {.x = -12,.y = -65,.z = 21,.t = 543750 & 0xffffu},
  {.x = -13,.y = -56,.z = 17,.t = 546875 & 0xffffu},
  {.x = -7,.y = -56,.z = 20,.t = 550000 & 0xffffu},
  {.x = -12,.y = -55,.z = 23,.t = 553125 & 0xffffu},
  {.x = -7,.y = -45,.z = 17,.t = 556250 & 0xffffu},
  {.x = -1,.y = -55,.z = 24,.t = 559375 & 0xffffu},
  {.x = -3,.y = -54,.z = 25,.t = 562500 & 0xffffu},
  {.x = -3,.y = -47,.z = 22,.t = 565625 & 0xffffu},
  {.x = -5,.y = -52,.z = 17,.t = 568750 & 0xffffu},
  {.x = -7,.y = -45,.z = 20,.t = 571875 & 0xffffu},
  {.x = -3,.y = -43,.z = 21,.t = 575000 & 0xffffu},
  {.x = 1,.y = -42,.z = 23,.t = 578125 & 0xffffu},
  {.x = 5,.y = -32,.z = 24,.t = 581250 & 0xffffu},
  {.x = 0,.y = -36,.z = 19,.t = 584375 & 0xffffu},
  {.x = -1,.y = -36,.z = 19,.t = 587500 & 0xffffu},
  {.x = 0,.y = -30,.z = 15,.t = 590625 & 0xffffu},
  {.x = -8,.y = -33,.z = 14,.t = 593750 & 0xffffu},
  {.x = -4,.y = -30,.z = 14,.t = 596875 & 0xffffu},
  {.x = -1,.y = -40,.z = 11,.t = 600000 & 0xffffu},
  {.x = -4,.y = -41,.z = 11,.t = 603125 & 0xffffu},
  {.x = -2,.y = -28,.z = 7,.t = 606250 & 0xffffu},
  {.x = 0,.y = -35,.z = 6,.t = 609375 & 0xffffu},
  {.x = -4,.y = -27,.z = 8,.t = 612500 & 0xffffu},
  {.x = -6,.y = -25,.z = -2,.t = 615625 & 0xffffu},
  {.x = 3,.y = -28,.z = -6,.t = 618750 & 0xffffu},
  {.x = 7,.y = -17,.z = -2,.t = 621875 & 0xffffu},
  {.x = 5,.y = -21,.z = -5,.t = 625000 & 0xffffu},
  {.x = 13,.y = -30,.z = -3,.t = 628125 & 0xffffu},
  {.x = 6,.y = -30,.z = -7,.t = 631250 & 0xffffu},
  {.x = -4,.y = -26,.z = -14,.t = 634375 & 0xffffu},
  {.x = 0,.y = -24,.z = -20,.t = 637500 & 0xffffu},
  {.x = 10,.y = -26,.z = -20,.t = 640625 & 0xffffu},
  {.x = 2,.y = -30,.z = -24,.t = 643750 & 0xffffu},
  {.x = -4,.y = -26,.z = -23,.t = 646875 & 0xffffu},
  {.x = -4,.y = -26,.z = -23,.t = 650000 & 0xffffu},
  {.x = -4,.y = -26,.z = -23,.t = 653125 & 0xffffu},
  {.x = -4,.y = -26,.z = -23,.t = 656250 & 0xffffu},
  {.x = -4,.y = -26,.z = -23,.t = 659375 & 0xffffu},
  {.x = -4,.y = -26,.z = -23,.t = 662500 & 0xffffu},
  {.x = -4,.y = -26,.z = -23,.t = 665625 & 0xffffu},
};

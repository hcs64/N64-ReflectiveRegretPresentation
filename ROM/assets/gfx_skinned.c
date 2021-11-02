/***************************************************************
                         gfx_skinned.c

Contains the vertex data for the skinned model example
***************************************************************/

#include <nusys.h>


/*********************************
              Models
*********************************/

Vtx vtx_skinned_frame00[] = {
    {150, 150, 0, 0, 0, 0, 73, 73, -73, 255}, /* 0 */
    {150, -150, 0, 0, 0, 0, 73, -73, -73, 255}, /* 1 */
    {-150, -150, 0, 0, 0, 0, -73, -73, -73, 255}, /* 2 */
    {-150, 150, 0, 0, 0, 0, -73, 73, -73, 255}, /* 3 */
    {150, 150, 300, 0, 0, 0, 73, 73, 73, 255}, /* 4 */
    {-150, 150, 300, 0, 0, 0, -73, 73, 73, 255}, /* 5 */
    {-150, -150, 300, 0, 0, 0, -73, -73, 73, 255}, /* 6 */
    {150, -150, 300, 0, 0, 0, 73, -73, 73, 255}, /* 7 */
    {150, 150, 150, 0, 0, 0, 90, 90, 0, 255}, /* 8 */
    {150, -150, 150, 0, 0, 0, 90, -90, 0, 255}, /* 9 */
    {-150, -150, 150, 0, 0, 0, -90, -90, 0, 255}, /* 10 */
    {-150, 150, 150, 0, 0, 0, -90, 90, 0, 255}, /* 11 */
};

Vtx vtx_skinned_frame10[] = {
    {150, 150, 0, 0, 0, 0, 73, 76, -71, 255}, /* 0 */
    {150, -150, 0, 0, 0, 0, 73, -78, -69, 255}, /* 1 */
    {-150, -150, 0, 0, 0, 0, -73, -78, -69, 255}, /* 2 */
    {-150, 150, 0, 0, 0, 0, -73, 76, -71, 255}, /* 3 */
    {150, 41, 358, 0, 0, 0, 73, 24, 101, 255}, /* 4 */
    {-150, 41, 358, 0, 0, 0, -73, 24, 101, 255}, /* 5 */
    {-150, -208, 191, 0, 0, 0, -73, -103, 14, 255}, /* 6 */
    {150, -208, 191, 0, 0, 0, 73, -103, 14, 255}, /* 7 */
    {150, 137, 192, 0, 0, 0, 84, 91, 28, 255}, /* 8 */
    {150, -137, 108, 0, 0, 0, 103, -71, -22, 255}, /* 9 */
    {-150, -137, 108, 0, 0, 0, -103, -71, -22, 255}, /* 10 */
    {-150, 137, 192, 0, 0, 0, -84, 91, 28, 255}, /* 11 */
};

Vtx vtx_skinned_frame30[] = {
    {150, 150, 0, 0, 0, 0, 71, 82, -66, 255}, /* 0 */
    {150, -150, 0, 0, 0, 0, 73, -77, -70, 255}, /* 1 */
    {-150, -150, 0, 0, 0, 0, -73, -77, -70, 255}, /* 2 */
    {-150, 150, 0, 0, 0, 0, -74, 77, -68, 255}, /* 3 */
    {174, 192, 175, 0, 0, 0, 86, 93, 5, 255}, /* 4 */
    {-124, 228, 160, 0, 0, 0, -57, 113, -6, 255}, /* 5 */
    {-161, 2, 354, 0, 0, 0, -79, -4, 100, 255}, /* 6 */
    {136, -35, 368, 0, 0, 0, 66, -22, 106, 255}, /* 7 */
    {159, 122, 105, 0, 0, 0, 111, 57, -25, 255}, /* 8 */
    {140, -141, 202, 0, 0, 0, 76, -96, 34, 255}, /* 9 */
    {-159, -122, 195, 0, 0, 0, -89, -84, 32, 255}, /* 10 */
    {-140, 141, 98, 0, 0, 0, -102, 73, -22, 255}, /* 11 */
};

#ifndef MOTOR_TYPES_HPP_
#define MOTOR_TYPES_HPP_

enum motorType {
    BAM_PAD = 0,
    FAM_PAD = 1,
    PUSHER_BPM = 2,
    PUSHER_DPM = 3,
    AUGER_PIPE = 7,
    DRILL = 4
};

enum motorPos {
    LEFT = 10,
    RIGHT = 11,
    TOP = 12,
    NONE = 13
};

#endif
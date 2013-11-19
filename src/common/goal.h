#ifndef LIZARDFS_COMMON_GOAL_H_
#define LIZARDFS_COMMON_GOAL_H_

#include <cstdint>

#include "common/chunk_type.h"

const uint8_t kMinOrdinaryGoal = 1;
const uint8_t kMaxOrdinaryGoal = 9;
const uint8_t kMinXorLevel = 2;
const uint8_t kMaxXorLevel = 10;

ChunkType::XorLevel goalToXorLevel(uint8_t goal);
bool isGoalValid(uint8_t goal);
bool isOrdinaryGoal(uint8_t goal);
bool isXorGoal(uint8_t goal);
uint8_t xorLevelToGoal(ChunkType::XorLevel xorLevel);

#endif // LIZARDFS_COMMON_GOAL_H_

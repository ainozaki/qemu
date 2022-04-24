#ifndef NEWARCH_CPU_H
#define NEWARCH_CPU_H

#include "exec/cpu-defs.h"

#define TYPE_NEWARCH_CPU "newarch-cpu"

#define NEWARCH_CPU_TYPE_SUFFIX "-" TYPE_NEWARCH_CPU
#define NEWARCH_CPU_TYPE_NAME(model) model NEWARCH_CPU_TYPE_SUFFIX
#define CPU_RESOLVING_TYPE TYPE_NEWARCH_CPU

typedef struct CPUArchState {
		uint32_t gregs[32]; /* general registers */
    uint32_t pc; /* program counter */
} CPUNEWARCHState;

struct ArchCPU {
	CPUState parent_obj;
	CPUNegativeOffsetState neg;
	CPUNEWARCHState env;
};

#include "exec/cpu-all.h"

#endif /* NEWARCH_CPU_H */

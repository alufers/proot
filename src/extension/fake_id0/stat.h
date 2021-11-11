#ifndef FAKE_ID0_STAT_H
#define FAKE_ID0_STAT_H

#include "tracee/tracee.h"
#include "tracee/reg.h"
#include "extension/fake_id0/config.h"

int handle_stat_enter_end(Tracee *tracee, Reg fd_sysarg);
int handle_stat_exit_end(Tracee *tracee, Config *config, word_t sysnum);

#endif /* FAKE_ID0_STAT_H */

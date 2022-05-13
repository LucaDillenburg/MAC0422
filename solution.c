/* ################################# */

int lockpriority(int pid, int priority) {
	if (!is_child(pid)) return -2;
	if (!is_user_priority(priority)) return -1;

	maintain_priority(pid, true);
	set_priority(pid, priority); // call internal function
}

int unlockpriority(int pid) {
	if (!is_child(pid)) return -2;
	maintain_priority(pid, false);
}

void maintain_priority(int pid, char bool) {
	/* ************************************ */
	// TODO:
	// this is the hardest
	// indicate that in a field in the process table (if adding a field, check out the kernel constants to ensure that nothing has changed)
	// talvez adicionar um bit que locka a prioridade do processo? (alterar onde a prioridade é alterada)
	/* ************************************ */
}

char is_child(int pid) {
	// TODO:
	// how to know that?
	// where to look for this information
}

char is_user_priority(int priority) {
	// TODO:
	// what is a user priority?
}

/* ################################# */
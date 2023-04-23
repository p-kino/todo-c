typedef enum task_status {
	BACKLOG, IN_PROGRESS, COMPLETED
};

typedef struct task {
	int id;
	const char *title;
	enum task_status status;
	const char *comment;
};

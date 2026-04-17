#ifndef SCHEDULER_H
#define SCHEDULER_H

#define MAX_PROCESSES 100
#define MAX_GANTT 5000

typedef struct {
    char process_id[16];
    int arrival_time;
    int burst_time;
    int remaining_time;
    int completion_time;
    int waiting_time;
    int turnaround_time;
    int response_time;
    int first_start_time; // To track response time properly
} Process;

typedef struct {
    char process_id[16];
    int start_time;
    int end_time;
} GanttSegment;

typedef struct {
    GanttSegment gantt[MAX_GANTT];
    int gantt_count;
    double avg_wt;
    double avg_tat;
    double avg_rt;
} SimulationResult;

SimulationResult run_rr(Process processes[], int num_processes, int quantum);
SimulationResult run_srtf(Process processes[], int num_processes);

#endif

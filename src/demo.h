#ifndef DEMO_H
#define DEMO_Hlabel_flag

#include "image.h"
#ifdef __cplusplus
extern "C" {
#endif
//ˆø”‚ğ‘‚â‚µ‚Ä‚¢‚é
void demo(char *cfgfile, char *weightfile, float thresh, float hier_thresh, int cam_index, const char *filename, char **names, int classes, int avgframes,
    int frame_skip, char *prefix, char *out_filename, int mjpeg_port, int dontdraw_bbox, int json_port, int dont_show, int ext_output, int letter_box_in, int time_limit_sec, char *http_post_host, int benchmark, int benchmark_layers, int mosaic_flag, int draw_label, int print_coordinate, int no_total, int show_frame_num, int print_fps, int print_warning);
#ifdef __cplusplus
}
#endif

#endif

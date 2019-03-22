typedef void (*pc_video_update_proc)(bitmap_t *bitmap,
struct mscrtc6845 *crtc);

struct mscrtc6845 *pc_video_start(pc_video_update_proc (*choosevideomode)(running_machine *machine, int *width, int *height, struct mscrtc6845 *crtc));


@protocol IGVideoCellDelegate <NSObject>
@required
-(void)videoCellDidDoubleTap:(id)arg1;
-(void)videoCellDidRequestVideoPlayback:(id)arg1;
-(void)videoCellDidLoadImage:(id)arg1;
-(void)videoCellDidPlayToEnd:(id)arg1;
-(void)videoCell:(id)arg1 didToggleAudio:(char)arg2;

@end


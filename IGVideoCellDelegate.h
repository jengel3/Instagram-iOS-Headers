

@protocol IGVideoCellDelegate <NSObject>
@required
-(void)videoCellDidLoadImage:(id)arg1;
-(void)videoCell:(id)arg1 didToggleAudio:(char)arg2;
-(void)videoCellDidSingleTap:(id)arg1;
-(void)videoCellDidDoubleTap:(id)arg1;

@end


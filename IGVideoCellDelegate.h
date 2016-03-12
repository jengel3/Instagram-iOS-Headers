

@protocol IGVideoCellDelegate <NSObject>
@required
-(void)videoCellDidRequestVideoPlayback:(id)arg1;
-(void)videoCellDidLoadImage:(id)arg1;
-(void)videoCellDidPlayToEnd:(id)arg1;
-(void)feedVideoCellDidDoubleTap:(id)arg1;

@end


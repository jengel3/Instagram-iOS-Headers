

@protocol IGFeedVideoCellPlayerDelegate <NSObject>
@required
-(void)feedVideoCellDidRequestVideoPlayback:(id)arg1 config:(id)arg2;
-(void)feedVideoCellDidRequestCurrentVideoStopWithReason:(int)arg1;
-(void)feedVideoCellDidLoadImage:(id)arg1;

@end


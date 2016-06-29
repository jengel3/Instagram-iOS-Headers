

@protocol IGFeedVideoCellPlayerDelegate <NSObject>
@required
-(void)feedVideoCellDidRequestCurrentVideoStopWithReason:(int)arg1;
-(void)feedVideoCellDidRequestVideoPlayback:(id)arg1 config:(id)arg2;
-(void)feedVideoCellDidLoadImage:(id)arg1;

@end




@protocol IGVideoScrubberViewDelegate <NSObject>
@optional
-(void)scrubberViewDidTapOnHandle;
-(void)scrubberViewBeganMovingHandle;
-(void)scrubberViewFinishedMovingHandle;

@required
-(void)scrubberViewDidMoveHandleToPosition:(float)arg1;

@end


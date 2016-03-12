

@protocol IGVideoScrubberViewDelegate <NSObject>
@required
-(void)scrubberViewBeganMovingHandle;
-(void)scrubberViewDidMoveHandleToPosition:(float)arg1;
-(void)scrubberViewFinishedMovingHandle;
-(void)scrubberViewDidTapOnHandle;

@end


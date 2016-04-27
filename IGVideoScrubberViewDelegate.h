

@protocol IGVideoScrubberViewDelegate <NSObject>
@required
-(void)scrubberViewDidTapOnHandle;
-(void)scrubberViewBeganMovingHandle;
-(void)scrubberViewFinishedMovingHandle;
-(void)scrubberViewDidMoveHandleToPosition:(float)arg1;

@end


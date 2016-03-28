

@protocol IGPanAnimationViewDelegate
@required
-(void)panAnimationView:(id)arg1 didPanToRightBy:(float)arg2;
-(void)panAnimationView:(id)arg1 didPanToLeftBy:(float)arg2;
-(void)panAnimationView:(id)arg1 willFinishPanAnimationWithDuration:(float)arg2;
-(void)panAnimationViewDidFinishPanToRight:(id)arg1;
-(void)panAnimationViewDidFinishPanToLeft:(id)arg1;
-(void)panAnimationView:(id)arg1 willCancelPanAnimationWithDuration:(float)arg2;
-(void)panAnimationViewDidUpdateCenterImage:(id)arg1;

@end


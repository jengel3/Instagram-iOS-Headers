

@protocol UIViewControllerAnimatedTransitioning <NSObject>
@optional
-(void)animationEnded:(char)arg1;

@required
-(double)transitionDuration:(id)arg1;
-(void)animateTransition:(id)arg1;

@end


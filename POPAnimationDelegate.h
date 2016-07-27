

@protocol POPAnimationDelegate <NSObject>
@optional
-(void)pop_animationDidStart:(id)arg1;
-(void)pop_animationDidReachToValue:(id)arg1;
-(void)pop_animationDidStop:(id)arg1 finished:(char)arg2;
-(void)pop_animationDidApply:(id)arg1;

@end


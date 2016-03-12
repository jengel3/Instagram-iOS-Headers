

@protocol CPTAnimationDelegate <NSObject>
@optional
-(void)animationCancelled:(id)arg1;
-(void)animationWillUpdate:(id)arg1;
-(void)animationDidUpdate:(id)arg1;
-(void)animationDidFinish:(id)arg1;
-(void)animationDidStart:(id)arg1;

@end


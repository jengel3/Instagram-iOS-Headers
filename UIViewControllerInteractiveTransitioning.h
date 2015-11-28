

@protocol UIViewControllerInteractiveTransitioning <NSObject>
@optional
-(int)completionCurve;
-(float)completionSpeed;

@required
-(void)startInteractiveTransition:(id)arg1;

@end


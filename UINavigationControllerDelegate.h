

@protocol UINavigationControllerDelegate <NSObject>
@optional
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1;
-(int)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;

@end


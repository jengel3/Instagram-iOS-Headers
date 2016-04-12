

@protocol UITabBarControllerDelegate <NSObject>
@optional
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
-(int)tabBarControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(unsigned)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
-(void)tabBarController:(id)arg1 willBeginCustomizingViewControllers:(id)arg2;
-(void)tabBarController:(id)arg1 willEndCustomizingViewControllers:(id)arg2 changed:(char)arg3;
-(void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(char)arg3;
-(char)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
-(id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;

@end


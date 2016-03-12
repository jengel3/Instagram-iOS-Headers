

@protocol UIViewControllerTransitioningDelegate <NSObject>
@optional
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
-(id)interactionControllerForPresentation:(id)arg1;
-(id)animationControllerForDismissedController:(id)arg1;
-(id)interactionControllerForDismissal:(id)arg1;

@end


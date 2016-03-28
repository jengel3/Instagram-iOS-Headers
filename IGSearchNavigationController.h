
#import <Instagram/IGNavigationController.h>
#import <Instagram/IGNavigationAnimatorDelegate.h>

@class NSString;

@interface IGSearchNavigationController : IGNavigationController <IGNavigationAnimatorDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)showSearchBar;
-(id)searchOriginController;
-(id)popToMainViewController:(char)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
@end



#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface IGAlbumTitleViewControllerTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end


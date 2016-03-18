
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGDirectSlideableViewController.h>

@class UIView, NSString;

@interface IGQuickCamViewController2 : UIViewController <UIViewControllerTransitioningDelegate, IGDirectSlideableViewController> {

	UIView* _overlayView;
	UIView* _contentContainerView;

}

@property (nonatomic,retain) UIView * overlayView;                       //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;              //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onOverlayTapped;
-(UIView *)contentContainerView;
-(id)init;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setContentContainerView:(UIView *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end


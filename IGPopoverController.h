
#import <UIKit/UIViewController.h>
#import <Instagram/IGNavigationControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol IGPopoverControllerDelegate;
@class UIView, UIViewController, IGPopoverNavigationController, NSString;

@interface IGPopoverController : UIViewController <IGNavigationControllerDelegate, IGCustomViewController> {

	UIView* _fadeBackgroundView;
	UIView* _contentView;
	int _style;
	UIViewController* _lastShownViewController;
	IGPopoverNavigationController* _navigationController;
	id<IGPopoverControllerDelegate> _delegate;

}

@property (nonatomic,retain) IGPopoverNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic,__weak) id<IGPopoverControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)popoverMarginForStyle:(int)arg1 ;
-(void)presentWithPreferOverFullScreen:(char)arg1 ;
-(void)updateHeightForViewController:(id)arg1 animated:(char)arg2 ;
-(void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(char)arg3 ;
-(id)ig_keyViewControllers;
-(id)initWithStyle:(int)arg1 rootViewController:(id)arg2 ;
-(void)presentOverFullSreen;
-(void)setDelegate:(id<IGPopoverControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGPopoverControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(IGPopoverNavigationController *)navigationController;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)present;
-(void)setNavigationController:(IGPopoverNavigationController *)arg1 ;
@end


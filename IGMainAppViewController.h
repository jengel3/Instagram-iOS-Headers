
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGStatusBarWindowControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol UIViewControllerTransitioningDelegate;
@class IGTabBarController, IGViewController, NSMutableArray, IGCameraNavigationController, IGStatusBarWindowController, IGDebugBar, NSString;

@interface IGMainAppViewController : UIViewController <IGCameraNavigationControllerDelegate, IGStatusBarWindowControllerDelegate, IGCustomViewController> {

	IGTabBarController* _tabBarController;
	IGViewController* _inboxController;
	NSMutableArray* _activeViewControllers;
	IGCameraNavigationController* _cameraController;
	IGStatusBarWindowController* _statusBarWindowControl;
	id<UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;
	IGDebugBar* _debugBar;

}

@property (nonatomic,retain) IGViewController * inboxController;                                              //@synthesize inboxController=_inboxController - In the implementation block
@property (readonly) NSMutableArray * activeViewControllers;                                                  //@synthesize activeViewControllers=_activeViewControllers - In the implementation block
@property (nonatomic,retain) IGTabBarController * tabBarController;                                           //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraController;                                 //@synthesize cameraController=_cameraController - In the implementation block
@property (nonatomic,retain) IGStatusBarWindowController * statusBarWindowControl;                            //@synthesize statusBarWindowControl=_statusBarWindowControl - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> cameraTransitionDelegate;              //@synthesize cameraTransitionDelegate=_cameraTransitionDelegate - In the implementation block
@property (nonatomic,retain) IGDebugBar * debugBar;                                                           //@synthesize debugBar=_debugBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isUserInCamera;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(id)ig_keyViewControllers;
-(void)presentCameraWithMetadata:(id)arg1 mode:(int)arg2 ;
-(char)isUserInInbox;
-(unsigned)inboxSubscriptionStatus;
-(char)isUserViewingThreadWithThreadId:(id)arg1 ;
-(char)popToThreadVcWithThreadId:(id)arg1 ;
-(void)presentInboxAnimated:(char)arg1 withThreadId:(id)arg2 viaPush:(char)arg3 ;
-(void)openURLInNewsTab:(id)arg1 ;
-(void)reloadInboxIfVisible;
-(IGViewController *)inboxController;
-(void)prefetchAndFocusInboxInNewsTab;
-(void)presentCameraWithMetadata:(id)arg1 existingWaterfallEventName:(id)arg2 ;
-(void)presentCameraFromInlineGalleryWithMetadata:(id)arg1 mode:(int)arg2 waterfallEventName:(id)arg3 waterfallStepDirection:(int)arg4 waterfallLoggingExtras:(id)arg5 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)dismissCameraControllerAnimated:(char)arg1 ;
-(id<UIViewControllerTransitioningDelegate>)cameraTransitionDelegate;
-(void)setCameraTransitionDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(char)isUserJustBrowsing;
-(NSMutableArray *)activeViewControllers;
-(CGRect)viewControllerRectForStatusBarHeight:(float)arg1 ;
-(IGStatusBarWindowController *)statusBarWindowControl;
-(void)toggleDebugBar;
-(IGCameraNavigationController *)cameraController;
-(void)dismissInboxAnimated:(char)arg1 ;
-(void)presentCameraController:(id)arg1 animated:(char)arg2 ;
-(void)setCameraController:(IGCameraNavigationController *)arg1 ;
-(void)statusBarWindowsController:(id)arg1 willShow:(char)arg2 ;
-(void)setInboxController:(IGViewController *)arg1 ;
-(void)setStatusBarWindowControl:(IGStatusBarWindowController *)arg1 ;
-(IGDebugBar *)debugBar;
-(void)setDebugBar:(IGDebugBar *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(IGTabBarController *)tabBarController;
-(void)setTabBarController:(IGTabBarController *)arg1 ;
@end


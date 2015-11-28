
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGStatusBarWindowControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@class IGTabBarController, IGViewController, NSMutableArray, IGCameraNavigationController, IGStatusBarWindowController, NSString;

@interface IGMainAppViewController : UIViewController <IGCameraNavigationControllerDelegate, IGStatusBarWindowControllerDelegate, IGCustomViewController> {

	IGTabBarController* _tabBarController;
	IGViewController* _inboxController;
	NSMutableArray* _activeViewControllers;
	IGCameraNavigationController* _cameraController;
	IGStatusBarWindowController* _statusBarWindowControl;

}

@property (nonatomic,retain) IGViewController * inboxController;                                //@synthesize inboxController=_inboxController - In the implementation block
@property (readonly) NSMutableArray * activeViewControllers;                                    //@synthesize activeViewControllers=_activeViewControllers - In the implementation block
@property (nonatomic,retain) IGTabBarController * tabBarController;                             //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraController;                   //@synthesize cameraController=_cameraController - In the implementation block
@property (nonatomic,retain) IGStatusBarWindowController * statusBarWindowControl;              //@synthesize statusBarWindowControl=_statusBarWindowControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isUserInCamera;
-(void)cameraControllerDidCancel;
-(id)ig_keyViewControllers;
-(void)presentCameraWithMetadata:(id)arg1 openWithState:(unsigned)arg2 ;
-(char)isUserInInbox;
-(unsigned)inboxSubscriptionStatus;
-(char)isUserViewingThreadWithThreadId:(id)arg1 ;
-(char)popToThreadVcWithThreadId:(id)arg1 ;
-(void)presentInboxAnimated:(char)arg1 withThreadId:(id)arg2 viaPush:(char)arg3 ;
-(void)openURLInNewsTab:(id)arg1 ;
-(IGViewController *)inboxController;
-(void)reloadInboxIfVisible;
-(void)prefetchAndFocusInboxInNewsTab;
-(void)presentCameraWithMetadata:(id)arg1 imageFilePath:(id)arg2 existingWaterfallEventName:(id)arg3 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)dismissCameraControllerAnimated:(char)arg1 ;
-(char)isUserJustBrowsing;
-(NSMutableArray *)activeViewControllers;
-(CGRect)viewControllerRectForStatusBarHeight:(float)arg1 ;
-(IGStatusBarWindowController *)statusBarWindowControl;
-(id)debugBar;
-(void)toggleDebugBar;
-(IGCameraNavigationController *)cameraController;
-(void)dismissInboxAnimated:(char)arg1 ;
-(void)setCameraController:(IGCameraNavigationController *)arg1 ;
-(void)presentCameraControllerAnimated:(char)arg1 ;
-(void)statusBarWindowsController:(id)arg1 willShow:(char)arg2 ;
-(id)initWithMainFeedSource:(id)arg1 ;
-(void)onStatusBarFrameWillChange:(id)arg1 ;
-(void)setInboxController:(IGViewController *)arg1 ;
-(void)setStatusBarWindowControl:(IGStatusBarWindowController *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(IGTabBarController *)tabBarController;
-(void)setTabBarController:(IGTabBarController *)arg1 ;
@end


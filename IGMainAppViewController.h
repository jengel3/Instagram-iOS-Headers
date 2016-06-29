
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGStatusBarWindowControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol UIViewControllerTransitioningDelegate;
@class IGTabBarController, NSMutableArray, IGCameraNavigationController, IGStatusBarWindowController, IGDebugBar, NSString;

@interface IGMainAppViewController : UIViewController <IGCameraNavigationControllerDelegate, IGStatusBarWindowControllerDelegate, IGCustomViewController> {

	char _hasAppearedOnce;
	IGTabBarController* _tabBarController;
	NSMutableArray* _activeViewControllers;
	IGCameraNavigationController* _cameraController;
	IGStatusBarWindowController* _statusBarWindowControl;
	id<UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;
	IGDebugBar* _debugBar;

}

@property (readonly) NSMutableArray * activeViewControllers;                                                  //@synthesize activeViewControllers=_activeViewControllers - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraController;                                 //@synthesize cameraController=_cameraController - In the implementation block
@property (nonatomic,retain) IGStatusBarWindowController * statusBarWindowControl;                            //@synthesize statusBarWindowControl=_statusBarWindowControl - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> cameraTransitionDelegate;              //@synthesize cameraTransitionDelegate=_cameraTransitionDelegate - In the implementation block
@property (assign,nonatomic) char hasAppearedOnce;                                                            //@synthesize hasAppearedOnce=_hasAppearedOnce - In the implementation block
@property (nonatomic,retain) IGDebugBar * debugBar;                                                           //@synthesize debugBar=_debugBar - In the implementation block
@property (nonatomic,readonly) IGTabBarController * tabBarController;                                         //@synthesize tabBarController=_tabBarController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isUserInInbox;
-(char)popToThreadVcWithThreadId:(id)arg1 ;
-(void)reloadInboxIfVisible;
-(char)isUserViewingThreadWithThreadId:(id)arg1 ;
-(void)presentPendingInbox;
-(id)ig_keyViewControllers;
-(void)presentCameraWithMetadata:(id)arg1 mode:(int)arg2 ;
-(char)isUserInCamera;
-(void)openURLInNewsTab:(id)arg1 ;
-(void)refetchUserProfile;
-(void)prefetchAndFocusInboxInNewsTab;
-(void)presentCameraFromInlineGalleryWithMetadata:(id)arg1 mode:(int)arg2 waterfallEventName:(id)arg3 waterfallStepDirection:(int)arg4 waterfallLoggingExtras:(id)arg5 ;
-(void)dismissCameraControllerAnimated:(char)arg1 ;
-(id<UIViewControllerTransitioningDelegate>)cameraTransitionDelegate;
-(void)presentInboxAnimated:(char)arg1 withThreadId:(id)arg2 viaEntryPoint:(id)arg3 ;
-(void)dismissInboxAnimated:(char)arg1 ;
-(void)presentCameraWithMetadata:(id)arg1 existingWaterfallEventName:(id)arg2 ;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(void)setCameraTransitionDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(char)isUserJustBrowsing;
-(NSMutableArray *)activeViewControllers;
-(CGRect)viewControllerRectForStatusBarHeight:(float)arg1 ;
-(IGStatusBarWindowController *)statusBarWindowControl;
-(void)toggleDebugBar;
-(char)albumsEnabled;
-(id)inboxControllerFromViewControllerStack;
-(char)isInboxOnTop:(id)arg1 ;
-(IGCameraNavigationController *)cameraController;
-(void)presentCameraController:(id)arg1 animated:(char)arg2 ;
-(void)setCameraController:(IGCameraNavigationController *)arg1 ;
-(void)setStatusBarWindowControl:(IGStatusBarWindowController *)arg1 ;
-(char)hasAppearedOnce;
-(void)setHasAppearedOnce:(char)arg1 ;
-(IGDebugBar *)debugBar;
-(void)setDebugBar:(IGDebugBar *)arg1 ;
-(void)statusBarWindowsController:(id)arg1 willShow:(char)arg2 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(IGTabBarController *)tabBarController;
@end


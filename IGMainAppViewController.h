
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumCameraCoordinatorDelegate.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGStatusBarWindowControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol UIViewControllerTransitioningDelegate;
@class IGTabBarController, IGUserSession, NSMutableArray, IGCameraNavigationController, IGStatusBarWindowController, IGAlbumCameraCoordinator, IGDebugBar, NSString;

@interface IGMainAppViewController : UIViewController <IGAlbumCameraCoordinatorDelegate, IGCameraNavigationControllerDelegate, IGStatusBarWindowControllerDelegate, IGCustomViewController> {

	IGTabBarController* _tabBarController;
	IGUserSession* _userSession;
	NSMutableArray* _activeViewControllers;
	IGCameraNavigationController* _cameraController;
	IGStatusBarWindowController* _statusBarWindowControl;
	id<UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;
	IGAlbumCameraCoordinator* _albumCameraCoordinator;
	IGDebugBar* _debugBar;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                                   //@synthesize userSession=_userSession - In the implementation block
@property (readonly) NSMutableArray * activeViewControllers;                                                  //@synthesize activeViewControllers=_activeViewControllers - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraController;                                 //@synthesize cameraController=_cameraController - In the implementation block
@property (nonatomic,retain) IGStatusBarWindowController * statusBarWindowControl;                            //@synthesize statusBarWindowControl=_statusBarWindowControl - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> cameraTransitionDelegate;              //@synthesize cameraTransitionDelegate=_cameraTransitionDelegate - In the implementation block
@property (nonatomic,readonly) IGAlbumCameraCoordinator * albumCameraCoordinator;                             //@synthesize albumCameraCoordinator=_albumCameraCoordinator - In the implementation block
@property (nonatomic,retain) IGDebugBar * debugBar;                                                           //@synthesize debugBar=_debugBar - In the implementation block
@property (nonatomic,readonly) IGTabBarController * tabBarController;                                         //@synthesize tabBarController=_tabBarController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentAlbumCamera;
-(char)canSwipeToAlbumCameraForCoordinator:(id)arg1 ;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(char)isUserJustBrowsing;
-(void)prefetchAndFocusInboxInNewsTab;
-(id)initWithUserSession:(id)arg1 ;
-(id)ig_keyViewControllers;
-(char)isUserInInbox;
-(void)reloadInboxIfVisible;
-(char)isUserViewingThreadWithThreadId:(id)arg1 ;
-(void)presentInboxAnimated:(char)arg1 withThreadId:(id)arg2 viaEntryPoint:(id)arg3 ;
-(void)presentPendingInbox;
-(void)presentCameraWithMetadata:(id)arg1 mode:(int)arg2 existingWaterfallEventName:(id)arg3 animated:(char)arg4 ;
-(void)presentCameraWithMetadata:(id)arg1 mode:(int)arg2 ;
-(char)isUserInCamera;
-(void)openURLInNewsTab:(id)arg1 ;
-(void)refetchUserProfile;
-(char)albumsEnabled;
-(NSMutableArray *)activeViewControllers;
-(CGRect)viewControllerRectForStatusBarHeight:(float)arg1 ;
-(IGAlbumCameraCoordinator *)albumCameraCoordinator;
-(IGStatusBarWindowController *)statusBarWindowControl;
-(void)toggleDebugBar;
-(id)inboxControllerFromViewControllerStack;
-(char)isInboxOnTop:(id)arg1 ;
-(IGCameraNavigationController *)cameraController;
-(void)dismissInboxAnimated:(char)arg1 ;
-(void)dismissCameraControllerAnimated:(char)arg1 ;
-(void)presentCameraController:(id)arg1 animated:(char)arg2 ;
-(void)setCameraController:(IGCameraNavigationController *)arg1 ;
-(id<UIViewControllerTransitioningDelegate>)cameraTransitionDelegate;
-(char)popToThreadVcWithThreadId:(id)arg1 ;
-(void)setStatusBarWindowControl:(IGStatusBarWindowController *)arg1 ;
-(void)setCameraTransitionDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(IGDebugBar *)debugBar;
-(void)setDebugBar:(IGDebugBar *)arg1 ;
-(void)statusBarWindowsController:(id)arg1 willShow:(char)arg2 ;
-(void)presentCameraFromInlineGalleryWithMetadata:(id)arg1 mode:(int)arg2 waterfallEventName:(id)arg3 waterfallStepDirection:(int)arg4 waterfallLoggingExtras:(id)arg5 ;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(IGTabBarController *)tabBarController;
-(IGUserSession *)userSession;
@end



#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumCreationViewControllerNavigationDelegate.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGStatusBarWindowControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol IGDirectInboxControllerType, UIViewControllerTransitioningDelegate;
@class IGTabBarController, IGViewController, NSMutableArray, IGCameraNavigationController, IGAlbumCreationViewController, IGStatusBarWindowController, IGDebugBar, NSString;

@interface IGMainAppViewController : UIViewController <IGAlbumCreationViewControllerNavigationDelegate, IGCameraNavigationControllerDelegate, IGStatusBarWindowControllerDelegate, IGCustomViewController> {

	IGTabBarController* _tabBarController;
	IGViewController*<IGDirectInboxControllerType> _inboxController;
	NSMutableArray* _activeViewControllers;
	IGCameraNavigationController* _cameraController;
	IGAlbumCreationViewController* _creationViewController;
	IGStatusBarWindowController* _statusBarWindowControl;
	id<UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;
	IGDebugBar* _debugBar;

}

@property (nonatomic,retain) IGViewController*<IGDirectInboxControllerType> inboxController;                  //@synthesize inboxController=_inboxController - In the implementation block
@property (readonly) NSMutableArray * activeViewControllers;                                                  //@synthesize activeViewControllers=_activeViewControllers - In the implementation block
@property (nonatomic,retain) IGTabBarController * tabBarController;                                           //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraController;                                 //@synthesize cameraController=_cameraController - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewController * creationViewController;                          //@synthesize creationViewController=_creationViewController - In the implementation block
@property (nonatomic,retain) IGStatusBarWindowController * statusBarWindowControl;                            //@synthesize statusBarWindowControl=_statusBarWindowControl - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> cameraTransitionDelegate;              //@synthesize cameraTransitionDelegate=_cameraTransitionDelegate - In the implementation block
@property (nonatomic,retain) IGDebugBar * debugBar;                                                           //@synthesize debugBar=_debugBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)creationViewControllerDidFinish:(id)arg1 ;
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
-(void)presentInboxAnimated:(char)arg1 withThreadId:(id)arg2 viaEntryPoint:(id)arg3 ;
-(void)openURLInNewsTab:(id)arg1 ;
-(void)reloadInboxIfVisible;
-(IGViewController*<IGDirectInboxControllerType>)inboxController;
-(void)presentCameraWithMetadata:(id)arg1 existingWaterfallEventName:(id)arg2 ;
-(char)albumsEnabled;
-(void)presentAlbumCameraAnimated:(char)arg1 ;
-(void)refetchUserProfile;
-(void)prefetchAndFocusInboxInNewsTab;
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
-(void)setCreationViewController:(IGAlbumCreationViewController *)arg1 ;
-(IGAlbumCreationViewController *)creationViewController;
-(void)dismissAlbumCameraAnimated:(char)arg1 ;
-(void)statusBarWindowsController:(id)arg1 willShow:(char)arg2 ;
-(void)setInboxController:(IGViewController*<IGDirectInboxControllerType>)arg1 ;
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


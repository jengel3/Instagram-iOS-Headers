
#import <Instagram/IGViewController.h>
#import <Instagram/IGMediaCaptureViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol IGCameraNavigationControllerDelegate;
@class UINavigationBar, UIView, IGEditorViewController, IGUserSession, NSString;

@interface IGCameraNavigationController : IGViewController <IGMediaCaptureViewControllerDelegate, UIViewControllerTransitioningDelegate, UINavigationBarDelegate, IGCustomViewController> {

	char _isTranslucent;
	float _verticalOffset;
	id<IGCameraNavigationControllerDelegate> _delegate;
	UINavigationBar* _navigationBar;
	UIView* _containerView;
	UIView* _navigationBarShadow;
	IGEditorViewController* _currentEditor;
	IGUserSession* _userSession;

}

@property (nonatomic,retain) UIView * containerView;                                                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBar;                                       //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * navigationBarShadow;                                          //@synthesize navigationBarShadow=_navigationBarShadow - In the implementation block
@property (assign,nonatomic,__weak) IGEditorViewController * currentEditor;                         //@synthesize currentEditor=_currentEditor - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                         //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic) float verticalOffset;                                                  //@synthesize verticalOffset=_verticalOffset - In the implementation block
@property (assign,nonatomic,__weak) id<IGCameraNavigationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isNavigationBarHidden,nonatomic) char navigationBarHidden; 
@property (assign,nonatomic) char isTranslucent;                                                    //@synthesize isTranslucent=_isTranslucent - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithMetadata:(id)arg1 mode:(int)arg2 userSession:(id)arg3 ;
-(UIView *)navigationBarShadow;
-(void)setNavigationBarShadow:(UIView *)arg1 ;
-(float)verticalOffset;
-(void)pushViewController:(id)arg1 viewWillBeVisible:(char)arg2 animated:(char)arg3 ;
-(void)setIsTranslucent:(char)arg1 ;
-(void)popViewControllerWithPoppedToViewWillBeVisible:(char)arg1 animated:(char)arg2 ;
-(void)reloadNavigationItem:(id)arg1 animated:(char)arg2 ;
-(void)mediaCaptureViewController:(id)arg1 didProducePhoto:(id)arg2 fromOrigin:(int)arg3 ;
-(void)mediaCaptureViewController:(id)arg1 didProduceVideoComposition:(id)arg2 ;
-(id)ig_keyViewControllers;
-(void)setVerticalOffset:(float)arg1 ;
-(void)reloadNavigationItem:(id)arg1 ;
-(void)pushViewControllersForDraft:(id)arg1 ;
-(void)popToRootViewControllerAndResetMediaMetadataWithNewDraft:(id)arg1 ;
-(IGEditorViewController *)currentEditor;
-(void)setCurrentEditor:(IGEditorViewController *)arg1 ;
-(void)setDelegate:(id<IGCameraNavigationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCameraNavigationControllerDelegate>)delegate;
-(UIView *)containerView;
-(UINavigationBar *)navigationBar;
-(char)isNavigationBarHidden;
-(void)popViewControllerAnimated:(char)arg1 ;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(char)isTranslucent;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(char)navigationBar:(id)arg1 shouldPushItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPushItem:(id)arg2 ;
-(char)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPopItem:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setNavigationBarHidden:(char)arg1 ;
-(IGUserSession *)userSession;
@end


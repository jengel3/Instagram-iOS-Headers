
#import <Instagram/IGViewController.h>
#import <Instagram/IGMediaCaptureViewControllerDelegate.h>
#import <Instagram/IGCustomViewController.h>

@protocol IGCameraNavigationControllerDelegate;
@class IGCameraNavigationBar, IGCaptureManager, UIView, IGCameraShutterView, IGCameraToolbar, IGEditorViewController, NSString;

@interface IGCameraNavigationController : IGViewController <IGMediaCaptureViewControllerDelegate, IGCustomViewController> {

	IGCameraNavigationBar* _customNavbar;
	IGCaptureManager* _captureManager;
	UIView* _containerView;
	IGCameraShutterView* _shutterView;
	id<IGCameraNavigationControllerDelegate> _delegate;
	IGCameraToolbar* _customToolbar;
	IGEditorViewController* _currentEditor;

}

@property (nonatomic,retain) IGCameraNavigationBar * customNavbar;                                  //@synthesize customNavbar=_customNavbar - In the implementation block
@property (nonatomic,retain) IGCaptureManager * captureManager;                                     //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) float verticalOffset; 
@property (nonatomic,retain) IGCameraShutterView * shutterView;                                     //@synthesize shutterView=_shutterView - In the implementation block
@property (assign,nonatomic,__weak) id<IGCameraNavigationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isNavigationBarHidden,nonatomic) char navigationBarHidden; 
@property (nonatomic,retain) IGCameraToolbar * customToolbar;                                       //@synthesize customToolbar=_customToolbar - In the implementation block
@property (assign,nonatomic,__weak) IGEditorViewController * currentEditor;                         //@synthesize currentEditor=_currentEditor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadNavigationItem:(id)arg1 ;
-(void)setIsTranslucent:(char)arg1 ;
-(void)reloadNavigationItem:(id)arg1 animated:(char)arg2 ;
-(id)initWithMetadata:(id)arg1 openWithState:(unsigned)arg2 imageFilePath:(id)arg3 allowedTabs:(unsigned)arg4 ;
-(IGCameraShutterView *)shutterView;
-(float)originalToolbarY;
-(IGCameraNavigationBar *)customNavbar;
-(IGCameraToolbar *)customToolbar;
-(char)mediaCaptureViewControllerShouldUseProducePhotoDelegate:(id)arg1 ;
-(void)mediaCaptureViewController:(id)arg1 didProducePhoto:(id)arg2 ;
-(id)ig_keyViewControllers;
-(id)initWithSelfieCamera;
-(id)initWithMetadata:(id)arg1 openWithState:(unsigned)arg2 ;
-(id)initWithMetadata:(id)arg1 imageFilePath:(id)arg2 ;
-(float)verticalOffset;
-(void)setVerticalOffset:(float)arg1 ;
-(void)popToRootViewController;
-(void)updateToolbarVisibility;
-(void)setCustomNavbar:(IGCameraNavigationBar *)arg1 ;
-(IGCaptureManager *)captureManager;
-(void)setCaptureManager:(IGCaptureManager *)arg1 ;
-(void)setShutterView:(IGCameraShutterView *)arg1 ;
-(void)setCustomToolbar:(IGCameraToolbar *)arg1 ;
-(IGEditorViewController *)currentEditor;
-(void)setCurrentEditor:(IGEditorViewController *)arg1 ;
-(void)setDelegate:(id<IGCameraNavigationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGCameraNavigationControllerDelegate>)delegate;
-(UIView *)containerView;
-(char)isNavigationBarHidden;
-(void)popViewControllerAnimated:(char)arg1 ;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setNavigationBarHidden:(char)arg1 ;
@end


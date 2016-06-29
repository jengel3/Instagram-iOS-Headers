
@class IGCameraNavigationController;


@protocol IGCameraViewControllerProtocol <NSObject>
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
@required
-(id)initWithDraft:(id)arg1 userSession:(id)arg2;
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(char)prefersStatusBarHidden;
-(IGCameraNavigationController *)navController;

@end


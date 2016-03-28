
@class IGCameraNavigationController;


@protocol IGCameraViewControllerProtocol <NSObject>
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
@required
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(IGCameraNavigationController *)navController;

@end


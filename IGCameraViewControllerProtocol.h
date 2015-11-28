
@class IGCameraNavigationController;


@protocol IGCameraViewControllerProtocol <NSObject>
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
@required
-(char)overlayIsOpaque;
-(char)prefersToolbarHidden;
-(char)prefersNavbarBottomBorderHidden;
-(IGCameraNavigationController *)navController;

@end


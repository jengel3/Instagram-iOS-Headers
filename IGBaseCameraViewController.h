
#import <Instagram/IGViewController.h>
#import <Instagram/IGCameraViewControllerProtocol.h>

@class IGCameraNavigationController, NSString;

@interface IGBaseCameraViewController : IGViewController <IGCameraViewControllerProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGCameraNavigationController * navController; 
-(char)overlayIsOpaque;
-(char)prefersNavbarBottomBorderHidden;
-(char)prefersStatusBarHidden;
-(void)viewDidLoad;
-(IGCameraNavigationController *)navController;
@end


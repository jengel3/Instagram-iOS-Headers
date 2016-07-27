
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class IGAlbumCameraViewController, NSString;

@interface IGAlbumCreationAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	char _presenting;
	IGAlbumCameraViewController* _cameraViewController;

}

@property (nonatomic,retain) IGAlbumCameraViewController * cameraViewController;              //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (assign,nonatomic) char presenting;                                                 //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentationTransition:(id)arg1 ;
-(void)dismissTransition:(id)arg1 ;
-(void)showPreviewButtons:(char)arg1 previewController:(id)arg2 ;
-(void)addCameraControllerButtons:(id)arg1 toView:(id)arg2 ;
-(void)showCameraButtons:(char)arg1 cameraController:(id)arg2 ;
-(void)addPreviewControllerButtons:(id)arg1 toView:(id)arg2 ;
-(void)adjustButton:(id)arg1 transform:(CGAffineTransform)arg2 alpha:(float)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)presenting;
-(void)setPresenting:(char)arg1 ;
-(void)setCameraViewController:(IGAlbumCameraViewController *)arg1 ;
-(IGAlbumCameraViewController *)cameraViewController;
@end


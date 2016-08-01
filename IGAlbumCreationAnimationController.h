
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
-(void)showPreviewCancelButton:(id)arg1 downloadButton:(id)arg2 addTextButton:(id)arg3 addDrawingButton:(id)arg4 show:(char)arg5 ;
-(void)showCameraFlashButton:(id)arg1 switchCameraButton:(id)arg2 closeButton:(id)arg3 show:(char)arg4 ;
-(void)adjustButton:(id)arg1 transform:(CGAffineTransform)arg2 alpha:(float)arg3 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)presenting;
-(void)setPresenting:(char)arg1 ;
-(void)setCameraViewController:(IGAlbumCameraViewController *)arg1 ;
-(IGAlbumCameraViewController *)cameraViewController;
@end



#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGCameraNavigationControllerDelegate.h>

@class UIViewController, IGCameraNavigationController, NSURL, NSString;

@interface IGDirectFeedCoordinator : NSObject <IGMediaRequestDelegate, IGCameraNavigationControllerDelegate> {

	UIViewController* _presenter;
	IGCameraNavigationController* _cameraNavigationController;
	NSURL* _mediaUrl;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;                                    //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraNavigationController;              //@synthesize cameraNavigationController=_cameraNavigationController - In the implementation block
@property (nonatomic,copy) NSURL * mediaUrl;                                                         //@synthesize mediaUrl=_mediaUrl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)setMediaUrl:(NSURL *)arg1 ;
-(NSURL *)mediaUrl;
-(void)postVideoToFeed:(id)arg1 ;
-(void)postPhotoToFeed:(id)arg1 ;
-(void)postToFeed:(id)arg1 ;
-(id)initWithPresentController:(id)arg1 ;
-(void)setCameraNavigationController:(IGCameraNavigationController *)arg1 ;
-(IGCameraNavigationController *)cameraNavigationController;
-(UIViewController *)presenter;
-(void)setPresenter:(UIViewController *)arg1 ;
@end


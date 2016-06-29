
#import <Instagram/IGMediaRequestControllerDelegate.h>

@class UIViewController, IGCameraNavigationController, NSURL, IGMediaRequestController, NSString;

@interface IGDirectFeedCoordinator : NSObject <IGMediaRequestControllerDelegate> {

	UIViewController* _presenter;
	IGCameraNavigationController* _cameraNavigationController;
	NSURL* _mediaUrl;
	IGMediaRequestController* _mediaRequestController;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;                                           //@synthesize presenter=_presenter - In the implementation block
@property (assign,nonatomic,__weak) IGCameraNavigationController * cameraNavigationController;              //@synthesize cameraNavigationController=_cameraNavigationController - In the implementation block
@property (nonatomic,copy) NSURL * mediaUrl;                                                                //@synthesize mediaUrl=_mediaUrl - In the implementation block
@property (nonatomic,retain) IGMediaRequestController * mediaRequestController;                             //@synthesize mediaRequestController=_mediaRequestController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaUrl:(NSURL *)arg1 ;
-(NSURL *)mediaUrl;
-(void)postPhotoToFeed:(id)arg1 ;
-(void)postVideoToFeed:(id)arg1 ;
-(id)initWithPresentController:(id)arg1 cameraNavigationController:(id)arg2 ;
-(void)postToFeed:(id)arg1 ;
-(IGMediaRequestController *)mediaRequestController;
-(void)mediaRequestControllerSucceedLoadingImage:(id)arg1 forUrl:(id)arg2 ;
-(void)mediaRequestControllerFailedLoadingImageForUrl:(id)arg1 ;
-(void)setMediaRequestController:(IGMediaRequestController *)arg1 ;
-(void)setCameraNavigationController:(IGCameraNavigationController *)arg1 ;
-(IGCameraNavigationController *)cameraNavigationController;
-(UIViewController *)presenter;
-(void)setPresenter:(UIViewController *)arg1 ;
@end


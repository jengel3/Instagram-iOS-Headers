
#import <Instagram/IGCameraNavigationControllerDelegate.h>
#import <Instagram/IGCustomAlertViewControllerDelegate.h>
#import <Instagram/IGCaptureControllerDelegate.h>
#import <Instagram/IGShareViewControllerDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGTwitterProfilePictureDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@protocol IGProfilePictureHelperDelegate, UIViewControllerTransitioningDelegate;
@class UIViewController, IGCameraNavigationController, UIImage, IGMediaMetadata, IGCustomAlertViewController, NSString;

@interface IGProfilePictureHelper : NSObject <IGCameraNavigationControllerDelegate, IGCustomAlertViewControllerDelegate, IGCaptureControllerDelegate, IGShareViewControllerDelegate, IGActionSheetDelegate, IGTwitterProfilePictureDelegate, UIImagePickerControllerDelegate> {

	char _allowProfilePhotoShareToFeed;
	char _showLocalOptionsOnly;
	id<IGProfilePictureHelperDelegate> _delegate;
	UIViewController* _viewController;
	IGCameraNavigationController* _cameraNavigationController;
	id<UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;
	UIImage* _localProducedImage;
	IGMediaMetadata* _localProducedMediaMetadata;
	int _localProducedImageOrigin;
	IGCustomAlertViewController* _photoSharingAlertViewController;

}

@property (assign,nonatomic) char showLocalOptionsOnly;                                                       //@synthesize showLocalOptionsOnly=_showLocalOptionsOnly - In the implementation block
@property (nonatomic,retain) IGCameraNavigationController * cameraNavigationController;                       //@synthesize cameraNavigationController=_cameraNavigationController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> cameraTransitionDelegate;              //@synthesize cameraTransitionDelegate=_cameraTransitionDelegate - In the implementation block
@property (nonatomic,retain) UIImage * localProducedImage;                                                    //@synthesize localProducedImage=_localProducedImage - In the implementation block
@property (nonatomic,retain) IGMediaMetadata * localProducedMediaMetadata;                                    //@synthesize localProducedMediaMetadata=_localProducedMediaMetadata - In the implementation block
@property (assign,nonatomic) int localProducedImageOrigin;                                                    //@synthesize localProducedImageOrigin=_localProducedImageOrigin - In the implementation block
@property (nonatomic,retain) IGCustomAlertViewController * photoSharingAlertViewController;                   //@synthesize photoSharingAlertViewController=_photoSharingAlertViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IGProfilePictureHelperDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                        //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) char allowProfilePhotoShareToFeed;                                               //@synthesize allowProfilePhotoShareToFeed=_allowProfilePhotoShareToFeed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)logProfilePictureUpdatedWithOption:(int)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)delegateWillPerformAction:(int)arg1 ;
-(void)presentPhotoLibrary;
-(void)presentCamera;
-(void)presentLoggedOutFacebookLogin;
-(void)loadFacebookProfilePictureFromAccessToken:(id)arg1 ;
-(void)presentFacebookLogin;
-(void)loadTwitterProfilePicture;
-(void)presentTwitterLogin;
-(void)delegateDidFinishDownloadingProfilePicture:(id)arg1 fromOption:(int)arg2 ;
-(void)setLocalProducedImage:(UIImage *)arg1 ;
-(void)setLocalProducedMediaMetadata:(IGMediaMetadata *)arg1 ;
-(void)setLocalProducedImageOrigin:(int)arg1 ;
-(char)isProfilePhotoSharingPromptFlowEnabled;
-(void)presentProfilePictureSharingAlertWithImage:(id)arg1 instantShareToFeedEnabled:(char)arg2 ;
-(char)isProfilePhotoSharingPromptSkipShareScreenEnabled;
-(void)setCameraNavigationController:(IGCameraNavigationController *)arg1 ;
-(void)openCameraWithMode:(int)arg1 ;
-(char)isProfilePhotoSharingLegacyCaptureFlowEnabled;
-(char)isProfilePhotoSharingOptOutFlowEnabled;
-(id<UIViewControllerTransitioningDelegate>)cameraTransitionDelegate;
-(void)prepareMetadataForSharing:(id)arg1 withImage:(id)arg2 ;
-(IGCameraNavigationController *)cameraNavigationController;
-(void)didChooseProfilePicture:(id)arg1 fromOrigin:(int)arg2 withMediaMetadata:(id)arg3 ;
-(UIImage *)localProducedImage;
-(int)localProducedImageOrigin;
-(char)allowProfilePhotoShareToFeed;
-(void)setPhotoSharingAlertViewController:(IGCustomAlertViewController *)arg1 ;
-(IGCustomAlertViewController *)photoSharingAlertViewController;
-(IGMediaMetadata *)localProducedMediaMetadata;
-(void)instantShareProfilePictureToFeed;
-(void)delegateDidFinishDownloadingProfilePictureWithURL:(id)arg1 fromOption:(int)arg2 ;
-(void)delegateDidFailDownloadingProfilePicture;
-(void)delegateWillStartDownloadingProfilePicture;
-(void)loadFacebookProfilePictureWithFacebookUserInfo:(id)arg1 ;
-(void)facebookAuthDidFinishWithAccessToken:(id)arg1 ;
-(void)onTwitterLoginCompleted:(id)arg1 ;
-(void)twitterLoginCancelled;
-(void)removeTwitterObserver;
-(char)delegateShouldShowRemoveCurrentPicture;
-(void)delegateRemovePictureButtonTapped;
-(void)importProfilePictureFromLibrary;
-(void)importProfilePictureFromFacebook;
-(void)importProfilePictureFromTwitter;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(int)arg2 ;
-(void)cameraControllerDidFinishWithDirectShare:(char)arg1 ;
-(void)cameraControllerDidFinishWithVideoComposition:(id)arg1 ;
-(void)customAlertViewDidConfirm:(id)arg1 ;
-(void)customAlertViewDidCancel:(id)arg1 ;
-(void)captureController:(id)arg1 didChangeToCameraMode:(int)arg2 ;
-(void)captureController:(id)arg1 willTakePhotoWithPreviewBuffer:(id)arg2 mediaMetadata:(id)arg3 ;
-(void)captureController:(id)arg1 didTakePhotoWithBuffer:(id)arg2 mediaMetadata:(id)arg3 ;
-(void)captureControllerWillBeginFilmingClip:(id)arg1 ;
-(void)captureController:(id)arg1 didUpdateVideoComposition:(id)arg2 ;
-(void)captureController:(id)arg1 didFinishFilmingWithVideoComposition:(id)arg2 mediaMetadata:(id)arg3 ;
-(void)captureControllerDidCancelCapture:(id)arg1 ;
-(void)shareViewControllerDidAppear:(id)arg1 ;
-(void)shareViewControllerWillFinish:(id)arg1 ;
-(void)shareViewControllerDidCancel:(id)arg1 ;
-(void)imageTicketDidFinishWithData:(id)arg1 ;
-(void)imageTicketDidFail;
-(void)imageTicketDidFinishWithURL:(id)arg1 ;
-(void)importProfilePictureFromCamera;
-(void)showActionSheet;
-(void)setAllowProfilePhotoShareToFeed:(char)arg1 ;
-(char)showLocalOptionsOnly;
-(void)setShowLocalOptionsOnly:(char)arg1 ;
-(void)setCameraTransitionDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(void)setDelegate:(id<IGProfilePictureHelperDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGProfilePictureHelperDelegate>)delegate;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
@end


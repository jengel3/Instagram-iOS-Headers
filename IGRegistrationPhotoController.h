
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGRegistrationStepObject.h>

@protocol IGRegistrationPhotoControllerDelegate;
@class IGRegistrationPhotoStepView, IGRegistrationNavigationBar, UIView, IGProfilePictureHelper, UIImage, IGFacebookUserInfo, UIViewController, NSString;

@interface IGRegistrationPhotoController : NSObject <IGProfilePictureHelperDelegate, IGRegistrationStepObject> {

	char _downloadingProfilePicture;
	char _connectedWithFacebook;
	char _connectingWithFacebook;
	id<IGRegistrationPhotoControllerDelegate> _delegate;
	IGRegistrationPhotoStepView* _stepView;
	IGRegistrationNavigationBar* _navBar;
	UIView* _iconView;
	IGProfilePictureHelper* _photoHelper;
	UIImage* _profilePhoto;
	IGFacebookUserInfo* _facebookUserInfo;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) id<IGRegistrationPhotoControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRegistrationPhotoStepView * stepView;                                 //@synthesize stepView=_stepView - In the implementation block
@property (nonatomic,retain) IGRegistrationNavigationBar * navBar;                                   //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                                      //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) IGProfilePictureHelper * photoHelper;                                   //@synthesize photoHelper=_photoHelper - In the implementation block
@property (nonatomic,retain) UIImage * profilePhoto;                                                 //@synthesize profilePhoto=_profilePhoto - In the implementation block
@property (nonatomic,retain) IGFacebookUserInfo * facebookUserInfo;                                  //@synthesize facebookUserInfo=_facebookUserInfo - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                               //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) char downloadingProfilePicture;                                         //@synthesize downloadingProfilePicture=_downloadingProfilePicture - In the implementation block
@property (assign,nonatomic) char connectedWithFacebook;                                             //@synthesize connectedWithFacebook=_connectedWithFacebook - In the implementation block
@property (assign,nonatomic) char connectingWithFacebook;                                            //@synthesize connectingWithFacebook=_connectingWithFacebook - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVerifying:(char)arg1 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 ;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(void)setFacebookUserInfo:(IGFacebookUserInfo *)arg1 ;
-(void)getFacebookUserInfo;
-(IGFacebookUserInfo *)facebookUserInfo;
-(IGRegistrationPhotoStepView *)stepView;
-(void)stepViewWillAppear;
-(void)setStepView:(IGRegistrationPhotoStepView *)arg1 ;
-(void)importFromFacebookButtonTapped;
-(void)takePhotoButtonTapped;
-(void)chooseFromLibraryButtonTapped;
-(void)importFromTwitterButtonTapped;
-(IGProfilePictureHelper *)photoHelper;
-(void)setProfilePhoto:(UIImage *)arg1 ;
-(void)stepViewBecomesFirstResponder;
-(void)profilePictureHelperWillStartcDownloadingProfilePicture:(id)arg1 ;
-(void)setPhotoHelper:(IGProfilePictureHelper *)arg1 ;
-(UIImage *)profilePhoto;
-(char)downloadingProfilePicture;
-(void)setDownloadingProfilePicture:(char)arg1 ;
-(char)connectedWithFacebook;
-(void)setConnectedWithFacebook:(char)arg1 ;
-(char)connectingWithFacebook;
-(void)setConnectingWithFacebook:(char)arg1 ;
-(void)setDelegate:(id<IGRegistrationPhotoControllerDelegate>)arg1 ;
-(id<IGRegistrationPhotoControllerDelegate>)delegate;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(void)setNavBar:(IGRegistrationNavigationBar *)arg1 ;
-(IGRegistrationNavigationBar *)navBar;
@end


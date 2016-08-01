
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>

@protocol IGProfilePeekViewControllerDelegate;
@class IGUser, IGProfilePictureImageView, UIButton, IGCircularProgressView, UIView, NSString;

@interface IGProfilePeekViewController : IGViewController <IGProfilePictureImageViewDelegate> {

	id<IGProfilePeekViewControllerDelegate> _delegate;
	IGUser* _user;
	IGProfilePictureImageView* _profilePic;
	UIButton* _editButton;
	IGCircularProgressView* _spinner;
	UIButton* _menuButton;
	UIView* _overlayView;
	UIButton* _dismissButton;

}

@property (assign,nonatomic,__weak) id<IGProfilePeekViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGUser * user;                                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                               //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,readonly) UIButton * editButton;                                              //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,readonly) IGCircularProgressView * spinner;                                   //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) UIButton * menuButton;                                              //@synthesize menuButton=_menuButton - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                                               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                           //@synthesize dismissButton=_dismissButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)grayCircleWithSize:(CGSize)arg1 ;
-(id)analyticsModule;
-(void)dismissButtonTapped;
-(void)menuButtonTapped;
-(CGSize)fullSizeForProfilePic;
-(void)logProfilePeekEvent:(id)arg1 ;
-(UIButton *)menuButton;
-(IGProfilePictureImageView *)profilePic;
-(void)profilePictureTapped:(id)arg1 ;
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)imageViewDidChangeImageProgress:(float)arg1 ;
-(char)shouldShowMenuButton;
-(char)enableNavState;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)editButtonTapped;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setDelegate:(id<IGProfilePeekViewControllerDelegate>)arg1 ;
-(id<IGProfilePeekViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(IGCircularProgressView *)spinner;
-(UIButton *)editButton;
-(UIButton *)dismissButton;
-(UIView *)overlayView;
@end


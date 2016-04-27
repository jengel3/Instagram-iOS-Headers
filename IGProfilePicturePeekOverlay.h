
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>

@protocol IGProfilePicturePeekDelegate;
@class UIView, UIButton, IGProfilePictureImageView, IGCircularProgressView, IGUser, NSString;

@interface IGProfilePicturePeekOverlay : UIView <IGProfilePictureImageViewDelegate> {

	id<IGProfilePicturePeekDelegate> _delegate;
	UIView* _overlayView;
	UIButton* _editButton;
	UIButton* _dismissButton;
	UIButton* _menuButton;
	IGProfilePictureImageView* _profilePic;
	IGCircularProgressView* _spinner;
	IGUser* _user;

}

@property (assign,nonatomic,__weak) id<IGProfilePicturePeekDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                          //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                         //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                      //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIButton * menuButton;                                         //@synthesize menuButton=_menuButton - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                        //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGCircularProgressView * spinner;                              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                 //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)grayCircleWithSize:(CGSize)arg1 ;
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)imageViewDidChangeImageProgress:(float)arg1 ;
-(void)dismissButtonTapped;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)profilePictureTapped:(id)arg1 ;
-(void)menuButtonTapped;
-(CGSize)fullSizeForProfilePic;
-(UIButton *)menuButton;
-(void)presentWithUser:(id)arg1 scaleFromRect:(CGRect)arg2 animated:(char)arg3 ;
-(char)shouldShowMenuButton;
-(void)showSpinnerIfNeeded;
-(void)presentWithUser:(id)arg1 ;
-(void)presentWithUser:(id)arg1 scaleAnimatedFromRect:(CGRect)arg2 ;
-(void)dismissAnimated:(char)arg1 scaleToRect:(CGRect)arg2 ;
-(void)setMenuButton:(UIButton *)arg1 ;
-(void)userUpdated:(id)arg1 ;
-(void)editButtonTapped;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGProfilePicturePeekDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGProfilePicturePeekDelegate>)delegate;
-(IGCircularProgressView *)spinner;
-(void)setSpinner:(IGCircularProgressView *)arg1 ;
-(void)setEditButton:(UIButton *)arg1 ;
-(UIButton *)editButton;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end


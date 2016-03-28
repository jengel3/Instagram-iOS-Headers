
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGProfilePicturePeekDelegate;
@class UIButton, IGProfilePictureImageView;

@interface IGProfilePicturePeekOverlay : UIView {

	char _dismissInProgress;
	id<IGProfilePicturePeekDelegate> _delegate;
	UIButton* _changeButton;
	UIButton* _dismissButton;
	IGProfilePictureImageView* _profilePic;

}

@property (assign,nonatomic,__weak) id<IGProfilePicturePeekDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * changeButton;                                       //@synthesize changeButton=_changeButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                      //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                        //@synthesize profilePic=_profilePic - In the implementation block
@property (assign,nonatomic) char dismissInProgress;                                        //@synthesize dismissInProgress=_dismissInProgress - In the implementation block
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)dismissButtonTapped;
-(void)presentWithUser:(id)arg1 inParentView:(id)arg2 animated:(char)arg3 ;
-(void)changeButtonTapped;
-(UIButton *)changeButton;
-(char)dismissInProgress;
-(void)setDismissInProgress:(char)arg1 ;
-(void)setChangeButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGProfilePicturePeekDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGProfilePicturePeekDelegate>)delegate;
-(void)dismissAnimated:(char)arg1 ;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
@end


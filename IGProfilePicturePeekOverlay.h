
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGProfilePictureImageViewDelegate.h>

@protocol IGProfilePicturePeekDelegate;
@class UIView, UIButton, IGProfilePictureImageView, NSString;

@interface IGProfilePicturePeekOverlay : UIView <IGProfilePictureImageViewDelegate> {

	id<IGProfilePicturePeekDelegate> _delegate;
	UIView* _overlayView;
	UIButton* _editButton;
	UIButton* _dismissButton;
	UIButton* _menuButton;
	IGProfilePictureImageView* _profilePic;

}

@property (assign,nonatomic,__weak) id<IGProfilePicturePeekDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                          //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIButton * editButton;                                         //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                      //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIButton * menuButton;                                         //@synthesize menuButton=_menuButton - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePic;                        //@synthesize profilePic=_profilePic - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)dismissButtonTapped;
-(void)profilePictureTapped:(id)arg1 ;
-(void)presentWithUser:(id)arg1 animated:(char)arg2 ;
-(CGSize)fullSizeForProfilePic;
-(void)menuButtonTapped;
-(UIButton *)menuButton;
-(void)applyAnimationIsAppearing:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMenuButton:(UIButton *)arg1 ;
-(void)editButtonTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGProfilePicturePeekDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGProfilePicturePeekDelegate>)delegate;
-(void)dismiss;
-(void)setEditButton:(UIButton *)arg1 ;
-(UIButton *)editButton;
-(UIButton *)dismissButton;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end


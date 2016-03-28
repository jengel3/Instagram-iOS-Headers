
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGHScrollAYMFCellDelegate;
@class IGFeaturedUserInfo, UIButton, UILabel, IGProfilePictureImageView, IGFollowButton, NSString;

@interface IGHScrollAYMFCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	id<IGHScrollAYMFCellDelegate> _delegate;
	IGFeaturedUserInfo* _userInfo;
	UIButton* _dismissButton;
	UILabel* _usernameLabel;
	UILabel* _socialContextLabel;
	IGProfilePictureImageView* _profilePicImageView;
	IGFollowButton* _followButton;

}

@property (assign,nonatomic,__weak) id<IGHScrollAYMFCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeaturedUserInfo * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                     //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                                      //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * socialContextLabel;                                 //@synthesize socialContextLabel=_socialContextLabel - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profilePicImageView;              //@synthesize profilePicImageView=_profilePicImageView - In the implementation block
@property (nonatomic,readonly) IGFollowButton * followButton;                                //@synthesize followButton=_followButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)suggestedCellSize;
-(UILabel *)usernameLabel;
-(void)dismissButtonTapped;
-(IGFollowButton *)followButton;
-(IGProfilePictureImageView *)profilePicImageView;
-(void)setUpSubViews;
-(UILabel *)socialContextLabel;
-(void)didTapAYMFCell;
-(void)configureWithFeaturedUserInfo:(id)arg1 analyticsDelegate:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGHScrollAYMFCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGHScrollAYMFCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(IGFeaturedUserInfo *)userInfo;
-(UIButton *)dismissButton;
@end



#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGHScrollAYMFCellDelegate;
@class IGFeaturedUserInfo, UIButton, UILabel, UIImageView, IGProfilePictureImageView, IGFollowButton, IGSpringButton, UIView, NSString;

@interface IGHScrollAYMFCell : UICollectionViewCell <UIGestureRecognizerDelegate, IGFollowButtonDelegate> {

	id<IGHScrollAYMFCellDelegate> _delegate;
	IGFeaturedUserInfo* _userInfo;
	int _cellType;
	UIButton* _dismissButton;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _actionCardImageView;
	IGProfilePictureImageView* _profilePicImageView;
	IGFollowButton* _followButton;
	IGSpringButton* _fbConnectButton;
	UIView* _verifiedBadgeView;
	float _secondaryLabelHeight;

}

@property (nonatomic,readonly) UIButton * dismissButton;                                     //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UILabel * primaryLabel;                                       //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                     //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * actionCardImageView;                            //@synthesize actionCardImageView=_actionCardImageView - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profilePicImageView;              //@synthesize profilePicImageView=_profilePicImageView - In the implementation block
@property (nonatomic,readonly) IGFollowButton * followButton;                                //@synthesize followButton=_followButton - In the implementation block
@property (assign,nonatomic) int cellType;                                                   //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,readonly) IGSpringButton * fbConnectButton;                             //@synthesize fbConnectButton=_fbConnectButton - In the implementation block
@property (nonatomic,readonly) UIView * verifiedBadgeView;                                   //@synthesize verifiedBadgeView=_verifiedBadgeView - In the implementation block
@property (assign,nonatomic) float secondaryLabelHeight;                                     //@synthesize secondaryLabelHeight=_secondaryLabelHeight - In the implementation block
@property (assign,nonatomic,__weak) id<IGHScrollAYMFCellDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGFeaturedUserInfo * userInfo;                                //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)suggestedCellHeightForType:(int)arg1 ;
+(float)suggestedCellWidth;
-(void)setUpSubViews;
-(UILabel *)primaryLabel;
-(IGSpringButton *)fbConnectButton;
-(UIImageView *)actionCardImageView;
-(UIView *)verifiedBadgeView;
-(IGProfilePictureImageView *)profilePicImageView;
-(float)secondaryLabelHeight;
-(IGFollowButton *)followButton;
-(void)didTapAYMFCell;
-(id)createfbConnectButton;
-(void)didTapConnectButton;
-(void)configureWithFeaturedUserInfo:(id)arg1 cellType:(int)arg2 ;
-(void)configureActionCardsWithCellType:(int)arg1 ;
-(void)setSecondaryLabelHeight:(float)arg1 ;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(void)configureWithItem:(id)arg1 cellType:(int)arg2 ;
-(void)FBButtonConnected;
-(void)dismissButtonTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGHScrollAYMFCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGHScrollAYMFCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(IGFeaturedUserInfo *)userInfo;
-(void)prepareForReuse;
-(UILabel *)secondaryLabel;
-(UIButton *)dismissButton;
-(int)cellType;
-(void)setCellType:(int)arg1 ;
@end


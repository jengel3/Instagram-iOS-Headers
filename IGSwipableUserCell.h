
#import <Instagram/IGTableViewCell.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGFollowButtonDelegate.h>

@protocol IGSwipableUserCellDelegate, IGRaindropAnalyticsDelegate;
@class IGProfilePictureImageView, UILabel, IGFollowButton, UIImageView, UIScrollView, UIView, UIButton, NSString;

@interface IGSwipableUserCell : IGTableViewCell <UIScrollViewDelegate, IGFollowButtonDelegate> {

	char _separatorHidden;
	char _isUserVerified;
	id<IGSwipableUserCellDelegate> _delegate;
	IGProfilePictureImageView* _profilePicImageView;
	UILabel* _usernameLabel;
	UILabel* _userDetailLabel;
	IGFollowButton* _followButton;
	UIImageView* _verifiedUserBadgeView;
	UIScrollView* _swipableContentScrollView;
	UIView* _swipableContentView;
	UIButton* _dismissButton;
	UIView* _separatorLineView;
	id<IGRaindropAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePicImageView;                       //@synthesize profilePicImageView=_profilePicImageView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                               //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * userDetailLabel;                                             //@synthesize userDetailLabel=_userDetailLabel - In the implementation block
@property (nonatomic,retain) IGFollowButton * followButton;                                         //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedUserBadgeView;                                   //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
@property (nonatomic,retain) UIScrollView * swipableContentScrollView;                              //@synthesize swipableContentScrollView=_swipableContentScrollView - In the implementation block
@property (nonatomic,retain) UIView * swipableContentView;                                          //@synthesize swipableContentView=_swipableContentView - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                              //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIView * separatorLineView;                                            //@synthesize separatorLineView=_separatorLineView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRaindropAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGSwipableUserCellDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char separatorHidden;                                                  //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) char isUserVerified;                                                   //@synthesize isUserVerified=_isUserVerified - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(id<IGRaindropAnalyticsDelegate>)analyticsDelegate;
-(id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2 ;
-(void)setIsUserVerified:(char)arg1 ;
-(UILabel *)userDetailLabel;
-(void)setAnalyticsDelegate:(id<IGRaindropAnalyticsDelegate>)arg1 ;
-(UIImageView *)verifiedUserBadgeView;
-(void)setVerifiedUserBadgeView:(UIImageView *)arg1 ;
-(char)isUserVerified;
-(void)setProfilePicImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setUserDetailLabel:(UILabel *)arg1 ;
-(void)setFollowButton:(IGFollowButton *)arg1 ;
-(void)setSwipableContentScrollView:(UIScrollView *)arg1 ;
-(void)setSwipableContentView:(UIView *)arg1 ;
-(UIScrollView *)swipableContentScrollView;
-(UIView *)swipableContentView;
-(IGProfilePictureImageView *)profilePicImageView;
-(IGFollowButton *)followButton;
-(void)followButton:(id)arg1 tappedWithAction:(int)arg2 ;
-(void)followButtonDidUpdateButtonState:(id)arg1 ;
-(void)cellTapped:(id)arg1 ;
-(void)setSeparatorHidden:(char)arg1 ;
-(char)separatorHidden;
-(void)setDelegate:(id<IGSwipableUserCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGSwipableUserCellDelegate>)delegate;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(UIButton *)dismissButton;
-(void)dismissButtonTapped:(id)arg1 ;
-(UIView *)separatorLineView;
-(void)setSeparatorLineView:(UIView *)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
@end


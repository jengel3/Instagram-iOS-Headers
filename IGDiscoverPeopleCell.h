
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGDiscoverPeopleCellDelegate;
@class IGProfilePictureImageView, IGUser, UILabel, UIImageView, IGExploreButtonGroupView;

@interface IGDiscoverPeopleCell : UICollectionViewCell {

	IGProfilePictureImageView* _profilePictureImageView;
	id<IGDiscoverPeopleCellDelegate> _delegate;
	IGUser* _user;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bylineLabel;
	UIImageView* _verifiedUserBadgeView;
	IGExploreButtonGroupView* _actionView;

}

@property (nonatomic,retain) IGUser * user;                                                    //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * bylineLabel;                                          //@synthesize bylineLabel=_bylineLabel - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePictureImageView;              //@synthesize profilePictureImageView=_profilePictureImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * verifiedUserBadgeView;                            //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
@property (nonatomic,readonly) IGExploreButtonGroupView * actionView;                          //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic,__weak) id<IGDiscoverPeopleCellDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(IGProfilePictureImageView *)profilePictureImageView;
-(void)setProfilePictureImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setFollowingVisible:(char)arg1 animated:(char)arg2 ;
-(void)onDismissButtonTapped:(id)arg1 ;
-(void)setUpSubViews;
-(void)onFollowButtonTapped:(id)arg1 ;
-(void)onFollowingButtonTapped:(id)arg1 ;
-(UILabel *)bylineLabel;
-(void)setFeaturedUserInfo:(id)arg1 ;
-(UIImageView *)verifiedUserBadgeView;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDiscoverPeopleCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDiscoverPeopleCellDelegate>)delegate;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(IGExploreButtonGroupView *)actionView;
@end


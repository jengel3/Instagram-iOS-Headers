
#import <Instagram/IGSearchResultCell.h>

@class UIImageView, IGProfilePictureImageView;

@interface IGSearchResultUserCell : IGSearchResultCell {

	char _showFollowButton;
	char _showFollowingButton;
	UIImageView* _verifiedUserBadgeView;

}

@property (nonatomic,retain) UIImageView * verifiedUserBadgeView;               //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * iconView; 
@property (nonatomic,readonly) char showFollowButton;                           //@synthesize showFollowButton=_showFollowButton - In the implementation block
@property (nonatomic,readonly) char showFollowingButton;                        //@synthesize showFollowingButton=_showFollowingButton - In the implementation block
-(char)showFollowButton;
-(UIImageView *)verifiedUserBadgeView;
-(void)setVerifiedUserBadgeView:(UIImageView *)arg1 ;
-(char)showFollowingButton;
-(void)setUpDetailTextLabelForUser:(id)arg1 ;
-(char)shouldShowFollowButtonForUser:(id)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end


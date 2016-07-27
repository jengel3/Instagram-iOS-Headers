
#import <Instagram/IGPlainTableViewCell.h>

@class IGUser, IGProfilePictureImageView, UIImageView;

@interface IGUsertagCell : IGPlainTableViewCell {

	IGUser* _user;
	IGProfilePictureImageView* _profilePictureImageView;
	UIImageView* _verifiedUserBadgeView;

}

@property (nonatomic,retain) IGUser * user;                                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profilePictureImageView;              //@synthesize profilePictureImageView=_profilePictureImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * verifiedUserBadgeView;                              //@synthesize verifiedUserBadgeView=_verifiedUserBadgeView - In the implementation block
-(UIImageView *)verifiedUserBadgeView;
-(IGProfilePictureImageView *)profilePictureImageView;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end


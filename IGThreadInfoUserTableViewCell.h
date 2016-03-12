
#import <Instagram/IGTableViewCell.h>

@class IGUser, IGProfilePictureImageView;

@interface IGThreadInfoUserTableViewCell : IGTableViewCell {

	IGUser* _user;
	IGProfilePictureImageView* _profilePicture;

}

@property (nonatomic,retain) IGUser * user;                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
+(float)cellHeight;
-(IGProfilePictureImageView *)profilePicture;
-(void)setProfilePicture:(IGProfilePictureImageView *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end


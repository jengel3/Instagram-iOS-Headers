
#import <Instagram/IGPlainTableViewCell.h>

@class IGProfilePictureImageView, IGUser;

@interface IGUsertagCell : IGPlainTableViewCell {

	IGProfilePictureImageView* _profilePictureImageView;
	IGUser* _user;

}

@property (nonatomic,retain) IGUser * user;              //@synthesize user=_user - In the implementation block
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end


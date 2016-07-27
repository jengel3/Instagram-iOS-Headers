
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGUser, IGProfilePictureImageView, UILabel;

@interface IGAlbumViewerCell : UICollectionViewCell {

	IGUser* _user;
	IGProfilePictureImageView* _profileImageView;
	UILabel* _usernameLabel;
	UILabel* _userDetailLabel;

}

@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * userDetailLabel;                                 //@synthesize userDetailLabel=_userDetailLabel - In the implementation block
@property (nonatomic,retain) IGUser * user;                                               //@synthesize user=_user - In the implementation block
+(float)preferredHeight;
-(IGProfilePictureImageView *)profileImageView;
-(UILabel *)usernameLabel;
-(UILabel *)userDetailLabel;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end


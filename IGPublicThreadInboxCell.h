
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGUser, IGProfilePictureImageView, UILabel;

@interface IGPublicThreadInboxCell : UICollectionViewCell {

	IGUser* _user;
	IGProfilePictureImageView* _profileView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) IGUser * user;                                        //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profileView;              //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)createTitleLabel:(CGRect)arg1 ;
-(void)updateTitleText;
-(IGProfilePictureImageView *)profileView;
-(void)setProfileView:(IGProfilePictureImageView *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end


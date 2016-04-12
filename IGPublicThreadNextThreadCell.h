
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, IGProfilePictureImageView;

@interface IGPublicThreadNextThreadCell : UICollectionViewCell {

	UILabel* _nameLabel;
	IGProfilePictureImageView* _profileView;

}

@property (nonatomic,retain) UILabel * nameLabel;                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView * profileView;              //@synthesize profileView=_profileView - In the implementation block
-(IGProfilePictureImageView *)profileView;
-(void)setProfileView:(IGProfilePictureImageView *)arg1 ;
-(void)setupNameLabel;
-(void)setupProfileView;
-(void)updateHeight:(float)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setThread:(id)arg1 ;
@end


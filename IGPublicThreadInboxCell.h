
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, UILabel;

@interface IGPublicThreadInboxCell : UICollectionViewCell {

	IGProfilePictureImageView* _profileView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) IGProfilePictureImageView * profileView;              //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)createTitleLabel;
-(void)updateTitleLabelFrame;
-(IGProfilePictureImageView *)profileView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
@end


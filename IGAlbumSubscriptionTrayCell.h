
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, UILabel, UIImageView;

@interface IGAlbumSubscriptionTrayCell : UICollectionViewCell {

	IGProfilePictureImageView* _profileImageView;
	UILabel* _titleLabel;
	UIImageView* _ringImageView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * ringImageView;                               //@synthesize ringImageView=_ringImageView - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
+(CGSize)preferredCellSize;
-(UIImageView *)ringImageView;
-(void)configureWithUser:(id)arg1 seen:(char)arg2 isCurrentUserReel:(char)arg3 ;
-(IGProfilePictureImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
@end


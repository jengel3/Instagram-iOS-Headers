
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface IGExternalShareCollectionViewCell : UICollectionViewCell {

	UIImageView* _imageView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
+(float)contractedCellWidth;
+(float)cellHeight;
-(id)createTitleLabel;
-(id)createIconImageWithColor:(id)arg1 image:(id)arg2 ;
-(void)configureCellWithImageName:(id)arg1 backgroundColor:(id)arg2 iconTitle:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end


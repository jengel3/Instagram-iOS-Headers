
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface IGExternalShareCollectionViewCell : UICollectionViewCell {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(float)contractedCellWidth;
+(float)cellHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end


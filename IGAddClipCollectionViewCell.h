
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface IGAddClipCollectionViewCell : UICollectionViewCell {

	UIImageView* _addIconImageView;

}

@property (nonatomic,retain) UIImageView * addIconImageView;              //@synthesize addIconImageView=_addIconImageView - In the implementation block
-(UIImageView *)addIconImageView;
-(void)setAddIconImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end


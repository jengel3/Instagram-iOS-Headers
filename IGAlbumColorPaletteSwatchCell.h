
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIColor;

@interface IGAlbumColorPaletteSwatchCell : UICollectionViewCell {

	UIColor* _swatchColor;

}

@property (nonatomic,retain) UIColor * swatchColor;              //@synthesize swatchColor=_swatchColor - In the implementation block
-(void)setSwatchColor:(UIColor *)arg1 ;
-(UIColor *)swatchColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(char)arg1 ;
@end


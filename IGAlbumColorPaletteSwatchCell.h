
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGAlbumColorPaletteSwatchDelegate;
@class CALayer, UIColor, UILongPressGestureRecognizer;

@interface IGAlbumColorPaletteSwatchCell : UICollectionViewCell {

	CALayer* _swatchLayer;
	id<IGAlbumColorPaletteSwatchDelegate> _delegate;
	UIColor* _swatchColor;
	float _swatchRadius;
	UILongPressGestureRecognizer* _longPressRecognizer;

}

@property (assign,nonatomic,__weak) id<IGAlbumColorPaletteSwatchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * swatchColor;                                              //@synthesize swatchColor=_swatchColor - In the implementation block
@property (assign,nonatomic) float swatchRadius;                                                 //@synthesize swatchRadius=_swatchRadius - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * longPressRecognizer;               //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
-(void)longPressRecognized;
-(void)setSwatchColor:(UIColor *)arg1 ;
-(void)setSwatchRadius:(float)arg1 ;
-(UIColor *)swatchColor;
-(float)swatchRadius;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumColorPaletteSwatchDelegate>)arg1 ;
-(id<IGAlbumColorPaletteSwatchDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
@end


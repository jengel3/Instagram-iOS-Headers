
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTapButton.h>

@class CAShapeLayer;

@interface IGAlbumBrushButton : IGTapButton {

	CAShapeLayer* _selectionLayer;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 ;
@end



#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface IGAlbumOverviewNubView : UIView {

	CAShapeLayer* _pointerLayer;

}

@property (nonatomic,retain) CAShapeLayer * pointerLayer;              //@synthesize pointerLayer=_pointerLayer - In the implementation block
-(CAShapeLayer *)pointerLayer;
-(void)setPointerLayer:(CAShapeLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


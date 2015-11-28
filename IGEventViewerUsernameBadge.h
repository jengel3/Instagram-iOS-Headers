
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer;

@interface IGEventViewerUsernameBadge : UIButton {

	CAShapeLayer* _shapeLayer;

}

@property (nonatomic,__weak,readonly) CAShapeLayer * shapeLayer;              //@synthesize shapeLayer=_shapeLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)textAttributes;
-(void)setHighlighted:(char)arg1 ;
-(CAShapeLayer *)shapeLayer;
-(void)setupSubviews;
-(void)setUsername:(id)arg1 ;
@end


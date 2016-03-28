
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@interface IGTapButton : UIButton {

	UIOffset _tapPadding;

}

@property (assign,nonatomic) UIOffset tapPadding;              //@synthesize tapPadding=_tapPadding - In the implementation block
-(void)setTapPadding:(UIOffset)arg1 ;
-(UIOffset)tapPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end


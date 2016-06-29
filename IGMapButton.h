
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGButton.h>

@class UIImageView;

@interface IGMapButton : IGButton {

	UIImageView* _otherImageView;

}

@property (nonatomic,retain) UIImageView * otherImageView;              //@synthesize otherImageView=_otherImageView - In the implementation block
-(id)initWithStyle:(Class)arg1 image:(id)arg2 offset:(CGPoint)arg3 ;
-(UIImageView *)otherImageView;
-(void)setOtherImageView:(UIImageView *)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)initWithStyle:(Class)arg1 image:(id)arg2 ;
@end


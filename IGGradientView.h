
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface IGGradientView : UIView {

	int _gradientDirection;
	NSArray* _colors;

}

@property (assign,nonatomic) int gradientDirection;              //@synthesize gradientDirection=_gradientDirection - In the implementation block
@property (nonatomic,retain) NSArray * colors;                   //@synthesize colors=_colors - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(int)gradientDirection;
-(void)setGradientDirection:(int)arg1 ;
-(NSArray *)colors;
@end


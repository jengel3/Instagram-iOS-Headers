
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface IGDrawBrushPickerDot : UIView {

	UIColor* _brushColor;
	float _brushWidth;

}

@property (nonatomic,retain) UIColor * brushColor;              //@synthesize brushColor=_brushColor - In the implementation block
@property (assign,nonatomic) float brushWidth;                  //@synthesize brushWidth=_brushWidth - In the implementation block
-(void)setBrushColor:(UIColor *)arg1 ;
-(void)setBrushWidth:(float)arg1 ;
-(UIColor *)brushColor;
-(float)brushWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end


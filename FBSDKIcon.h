

#import <Instagram/Instagram-Structs.h>
@class UIColor;

@interface FBSDKIcon : NSObject {

	UIColor* _color;

}

@property (nonatomic,readonly) UIColor * color;              //@synthesize color=_color - In the implementation block
-(CGPathRef)pathWithSize:(CGSize)arg1 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)init;
-(UIColor *)color;
-(id)initWithColor:(id)arg1 ;
@end




#import <Instagram/Instagram-Structs.h>
@interface IGDrawPlainStyleStroke : NSObject {

	CGImageRef _image;
	CGRect _frame;

}

@property (nonatomic,readonly) CGImageRef image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
-(id)initWithImage:(CGImageRef)arg1 frame:(CGRect)arg2 ;
-(void)dealloc;
-(CGRect)frame;
-(CGImageRef)image;
@end


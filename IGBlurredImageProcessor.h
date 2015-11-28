
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageProcessor.h>

@class UIColor, NSString;

@interface IGBlurredImageProcessor : NSObject <IGImageProcessor> {

	float _blurRadius;
	unsigned _iterations;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) float blurRadius;                    //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,readonly) unsigned iterations;                 //@synthesize iterations=_iterations - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                 //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBlurRadius:(float)arg1 iterations:(unsigned)arg2 tintColor:(id)arg3 ;
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)init;
-(float)blurRadius;
-(UIColor *)tintColor;
-(unsigned)iterations;
@end


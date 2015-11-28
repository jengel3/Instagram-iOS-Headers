
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageProcessor.h>

@class NSString;

@interface IGProfilePictureImageProcessor : NSObject <IGImageProcessor> {

	int _borderStyle;

}

@property (assign,nonatomic) int borderStyle;                       //@synthesize borderStyle=_borderStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageProcessorWithBorderStyle:(int)arg1 ;
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)initWithBorderStyle:(int)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(id)borderColor;
-(float)borderWidth;
-(int)borderStyle;
@end



#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageProcessor.h>

@class NSString;

@interface IGPublicThreadUserBasedImageURLProcessor : NSObject <IGImageProcessor> {

	NSString* _userId;

}

@property (nonatomic,readonly) NSString * userId;                   //@synthesize userId=_userId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
@end



#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageProcessor.h>

@class NSString;

@interface IGDirectItemIdBasedImageURLProcessor : NSObject <IGImageProcessor> {

	NSString* _itemId;

}

@property (nonatomic,readonly) NSString * itemId;                   //@synthesize itemId=_itemId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItemId:(id)arg1 ;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(NSString *)itemId;
@end

